import socket
import os
    
HOST = "127.0.0.1"
SERVER_PORT = 65432
FORMAT ="utf8"

s= socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind((HOST,SERVER_PORT))
s.listen() 

print("server:",HOST,SERVER_PORT)
print("Waiting for Client....") 

conn, addr = s.accept()
os.system('cls')
print("!Client connected!")
print("client address:",addr) 
print("conn:", conn.getsockname()) 

y=conn.recv(1024).decode(FORMAT)
print("Da nhan xau ki tu: "+y)
str_new= y.upper() 

conn.sendall(str_new.encode(FORMAT))
print("Da tra ve client xau ki tu: "+y)

input()