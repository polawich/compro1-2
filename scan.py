import socket
import random
server = socket.socket()
server.setsockopt(socket.SOL_SOCKET,socket.SO_REUSEADDR,1)
server.connect(('104.248.39.146',port))