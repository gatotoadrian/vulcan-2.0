#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Initialize the LCD with the I2C address 0x27
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int sensor_pin = A0; // Analog pin connected to the moisture sensor
int sensor_analog;         // Variable to store the analog value from the sensor
float _moisture;           // Variable to store the calculated moisture percentage

void setup() {
  // Initialize the serial communication at a baud rate of 9600
  Serial.begin(9600);

  // Initialize the LCD
  lcd.begin();
  lcd.backlight();
}

void loop() {
  // Set the cursor to the first column, first row of the LCD
  lcd.setCursor(0, 0);
  
  // Read the analog value from the sensor connected to sensor_pin
  sensor_analog = analogRead(sensor_pin);
  
  // Calculate the moisture percentage
  // The formula converts the raw analog reading (0-4095) to a percentage (0-100)
  _moisture = (100 - ((sensor_analog / 4095.00) * 100));
  
  // Print the moisture value to the serial monitor
  Serial.print("Moisture = ");
  Serial.print(_moisture);  // Print the calculated moisture percentage
  Serial.println("%");      // Print a percentage sign and move to the next line
  
  // Print the moisture value to the LCD
  lcd.print("Moisture = "); // Print the text "Moisture = " on the LCD
  lcd.setCursor(0, 1);      // Move the cursor to the first column, second row
  lcd.print(_moisture);     // Print the calculated moisture percentage on the LCD
  
  // Wait for 1 second (1000 milliseconds)
  delay(1000);
  
  // Clear the LCD screen for the next reading
  lcd.clear(); 
}
