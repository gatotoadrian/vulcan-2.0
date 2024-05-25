###MoiProjectsture Sensor Display 
This project reads the moisture level from a sensor, calculates the moisture percentage, and displays the result on both an LCD and the serial monitor. The program runs in a loop, updating the readings every second.

##Components Required

-Arduino Board (e.g., Arduino Uno)
-Moisture Sensor (e.g., soil moisture sensor)
-LCD Display (e.g., 16x2 LCD with I2C interface)
-Connecting Wires
-Breadboard (optional)

##Circuit Diagram
Connect the components as follows:

#1.Moisture Sensor

-VCC to 5V
-GND to GND
-Analog output to an analog pin on the Arduino (e.g., A0)

#2.LCD Display:

-Connect the I2C pins (SDA and SCL) of the LCD to the corresponding I2C pins on the Arduino. Typically, these are:
-SDA to A4 (on Arduino Uno)
-SCL to A5 (on Arduino Uno)

##Code Explanation
The provided Arduino code reads the moisture level from the sensor, converts it to a percentage, and displays it on an LCD and the serial monitor. The loop repeats every second.


##Setup Instructions

#1.Connect the Hardware:

-Follow the circuit diagram to connect the moisture sensor and LCD to the Arduino.

#2.Upload the Code:

-Open the Arduino IDE.
-Copy the provided code into the IDE.
-Select the correct board and port from the Tools menu.
-Click on the upload button to upload the code to the Arduino.

#3.Monitor the Output:

-Open the Serial Monitor in the Arduino IDE to see the moisture readings.
-The LCD will also display the moisture percentage.

##License
This project is open-source and available under the MIT License. Feel free to use, modify, and distribute as per the terms of the license.

##Author
[AdrianWeru]