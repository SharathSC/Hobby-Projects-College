import csv
import collections
from collections import namedtuple

class DataBase(object):
    def __init__(self, csv_filename, recordname):
        # read data from csv format file into a list of namedtuples
        with open(csv_filename) as inputfile:
            csv_reader = csv.reader(inputfile, delimiter=',')
            self.fields = next(csv_reader)  # read header row
            self.Record = namedtuple(recordname, self.fields)
            self.records = [self.Record(*row) for row in csv_reader]
            self.valid_fieldnames = set(self.fields)
        # create an empty table of lookup tables for each field name that maps
        # each unique field value to a list of record-list indices of the ones
        # that contain it
            self.lookup_tables = collections.defaultdict(lambda: collections.defaultdict(list))

    def retrieve(self, **kwargs):
        """ Fetch a list of records with a field name with the value supplied
            as a keyword arg (or return None if there aren't any). """
        if len(kwargs) != 1:
                            raise ValueError('Exactly one fieldname/keyword argument required for function ''(%s specified)' % ', '.join([repr(k) for k in kwargs.keys()]))
        field,value = list(kwargs.items())[0]  # get only keyword arg and value
        if field not in self.valid_fieldnames:
                                              raise ValueError('keyword arg "%s" isn\'t a valid field name' % field)
        if field not in self.lookup_tables:
            for index, record in enumerate(self.records):
                v = getattr(record, field)
                self.lookup_tables[field][v].append(index)
        matches = [self.records[index]
                   for index in self.lookup_tables[field].get(value, []) ]
        return matches if matches else None
             
                                                                            
if __name__ == '__main__':
    empdb = DataBase('employees.csv', 'Person')
    print ("retrieve(name='Ted Kingston'):", empdb.retrieve(name='Ted Kingston'))
    print ("retrieve(age='27'):", empdb.retrieve(age='27'))
    print ("retrieve(weight='150'):", empdb.retrieve(weight='150'))
    print ("retrieve(height='5ft 10in'):", empdb.retrieve(height='5ft 10in'))    
    print ("ValueError('{}') raised as expected").format(e)
else:
    raise type('NoExceptionError', (Exception,), {})(
            'No exception raised from "retrieve(height=\'5ft\')" call.')
