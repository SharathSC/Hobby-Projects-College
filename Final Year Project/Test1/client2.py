# client2.py  
import socket
import ssl
import pickle
# create a socket object
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM) 
# get local machine name
host = socket.gethostname()                           

port = 9999

# connection to hostname on the port.
s.connect((host, port))                               

# Receive no more than 1024 bytes
passw = s.recv(1024)                                     
password = pickle.loads(passw)
# print("The password got from the server is %s" %password['loginid'] )
quer = s.recv(1024)
query = quer.decode('ascii')
print ('Client 2:The query is %s' %quer.decode('ascii'))
for name, pas in password.items():
    if name == query:
        s.send(pas.encode('ascii'))
    else:
        print('Client 2:Not existing for the corresponding query')         
s.close()
