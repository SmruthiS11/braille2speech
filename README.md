# Braille to Speech Conversion
This repository contains the code to build a system, providing the blind with cost-effective and easy-to-use technologies, to convert Braille input to speech. The proposed system consists of two main subsystems : a) converting Braille input into text and b) text-to-speech (TTS) models for audio conversion, which is the final expected output. The objectives of this proposed system are to improve accessibility for visually impaired users, demonstrating promising accuracy and usability through user testing.

The research paper on the same has been published and can be found in the below link : 
https://ieeexplore.ieee.org/document/11182190

# Files
## `braille2text.ino`
This file was run on the Arduino IDE which performed the conversion of Braille input to text output displayed on the serial monitor. The Braille input was given via push butttons arranged in a 3X2 matrix to mimic the Braille script. 
## `serial_monitor_save.py`
This file was run on a *Python* compiler to take the input from the serial monitor and save it to a file (`output.txt` in this case).
## `tts.py`
This file, also run on a Python compiler, did the final step of converting the text input from the serial monitor to speech. The pyttsx3 library needs to be installed for the same.

# Software Tools
- Arduino IDE
- Python Compiler
