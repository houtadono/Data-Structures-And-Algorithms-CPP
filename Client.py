import socket 
import os

IP = "192.168.43.155"
SERVER_PORT = 57123
FORMAT ="utf8" 

client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

client.connect( (IP, SERVER_PORT))
os.system('cls')
print("!Connected to the server!")
print("client address: ",client.getsockname())

print("Nhap 2 so a va b: ")
a = int(input("Nhap a: "))
client.sendall(str(a).encode(FORMAT))

b = int(input("Nhap b: "))
client.sendall(str(b).encode(FORMAT))

tong = client.recv(1024).decode(FORMAT)
client.sendall(tong.encode(FORMAT))
hieu = client.recv(1024).decode(FORMAT)
client.sendall(tong.encode(FORMAT))
tich = client.recv(1024).decode(FORMAT)
client.sendall(tong.encode(FORMAT))
thuong = client.recv(1024).decode(FORMAT)
client.sendall(tong.encode(FORMAT))
print("Tong 2 so la: ", tong)
print("Hieu 2 so la: ", hieu)
print("Tich 2 so la: ", tich)
print("Thuong 2 so la: ", thuong)

client.close()
