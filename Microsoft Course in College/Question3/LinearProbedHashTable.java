//Answer.java

public class LinearProbedHashTable {
	
	public LinearProbedHashTable(int capacity){
		table = new int[capacity];
		for(int i = 0; i < table.length; i++){
			table[i] = -1;
		}
	}
	
	
	public int insert(int value) throws TableFullException{
		int index = -1;
			index = Answer.hash(value, table.length);
		System.out.format("Inserting %d at index %d\n", value, index);
		if ( table[index] == value || table[index] == -1) {
			table[index] = value;
			return 0;
		} else {
			int collisions = 0;
			int i = (index + 1) % table.length;
			while (i != index && table[i] != -1){
				i = (i + 1) % table.length;
				collisions++;
			}
			if ( i != index  ){
				table[i] = value;
			} else {
				throw new TableFullException(String.format("Table is full and cannot accommodate %d\n", value));
			}
			return collisions;
		}
	}
	
	public int elementAt(int index){
		return table[index];
	}
	
	public int getCapacity(){
		return table.length;
	}
	
	
	public String toString(){
		StringBuffer buffer = new StringBuffer();
		buffer.append("{");
		for(int i = 0; i < table.length; i++) {
			buffer.append(table[i]);
			buffer.append(",");
		}
		buffer.append("}\n");
		return buffer.toString();
	}
	
	
	private boolean useLocalHashFn = false;
	private int[] table = null;
}

class TableFullException extends Exception {
	public TableFullException (String message) {
		super(message);
	}
}
