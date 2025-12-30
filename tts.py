# first install pyttsx3 library - for tts

import serial
import pyttsx3

# Initialize the text-to-speech engine
engine = pyttsx3.init()

# Adjust the serial port and baud rate
ser = serial.Serial('/dev/ttyUSB0', 9600)

# Set properties (not compulsary)
# engine.setProperty('rate', 150)  # Speed of speech (words per minute)
# engine.setProperty('volume', 0.9) # Volume level (0.0 to 1.0)

pause_flag = False # Defining a flag to indicate whether reading aloud is paused

# Listen for data on the serial port and read it aloud
while True:
    if ser.in_waiting > 0:
        # Read a line of text from the serial port
        data = ser.readline().decode().strip()
        
        # If the "pause" button is pressed, toggle the pause flag
        if data == "pause_button_pressed":
            pause_flag = not pause_flag

        # If the pause flag is not set, convert text to speech and read aloud
        if not pause_flag:
            engine.say(data)
            engine.runAndWait()
