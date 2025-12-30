#python code - reads data from arduino and saves it to file
import serial

ser = serial.Serial('/dev/ttyUSB0', 9600) # Adjust the port and baud rate
with open('output.txt', 'w') as f:
    while True:
        data = ser.readline().decode().strip()
        print(data)
        f.write(data + '\n')
