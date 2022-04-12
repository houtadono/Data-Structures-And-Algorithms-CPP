import socket 
import os

HOST = "127.0.0.1"
SERVER_PORT = 65432
FORMAT ="utf8" 

client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)






client.connect( (HOST, SERVER_PORT))
os.system('cls')
print("!Connected to the server!")
print("client address: ",client.getsockname())


y=input("Nhap 1 xau ki tu: "); 
client.sendall(y.encode(FORMAT))


str_new=client.recv(1024).decode(FORMAT)
print("Xau ki tu sau khi viet hoa:" + str_new)

input()