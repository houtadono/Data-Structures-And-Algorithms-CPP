from pydoc import cli
import socket 
import os

IP = "10.170.44.136"
SERVER_PORT = 57123

FORMAT ="utf8" 

client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

client.connect( (IP, SERVER_PORT))
os.system('cls')
print("!Connected to the server!")
print("client address: ",client.getsockname())

print("Nhap 2 so a va b: ")
a = input()
b = input()
client.sendall(a.encode(FORMAT))
client.sendall(b.encode(FORMAT))

tong = client.recv(1024).decode(FORMAT)
hieu = client.recv(1024).decode(FORMAT)
tich = client.recv(1024).decode(FORMAT)
thuong = client.recv(1024).decode(FORMAT)

print("Tong 2 so la: ", tong)
print("Hieu 2 so la: ", hieu)
print("Tich 2 so la: ", tich)
print("Thuong 2 so la: ", thuong)


input()
