# DHT11 Temp and Humidity LCD Project

This Arduino project reads temperature and humidity data using the DHT11 sensor and displays the values on a 16x2 LCD screen. It demonstrates the integration of sensors and displays for real-time data visualization, suitable for learning or simple environmental monitoring applications.

## Components Used
- Arduino Uno
- DHT11 Temperature and Humidity Sensor
- 16x2 LCD Screen
- Breadboard and jumper wires

## Required Libraries
To run this project, you'll need to install the following libraries in your Arduino IDE:

1. **Adafruit Unified Sensor Library**:
   - Go to **Sketch > Include Library > Manage Libraries**.
   - Search for `Adafruit Unified Sensor` and install it.

2. **DHT Sensor Library**:
   - In the Library Manager, search for `DHT sensor library` by Adafruit and install it.

These libraries handle the DHT11 sensor data and simplify the implementation process.

## Code Overview
The code performs the following tasks:
1. Initializes the DHT11 sensor and the LCD display.
2. Continuously reads temperature (in Celsius) and humidity data from the sensor.
3. Displays the temperature on the first line of the LCD and humidity on the second line.
4. Includes error handling to notify the user if the sensor fails.

### Temperature Conversion
The code uses the DHT library to directly read temperature in Celsius. If needed, the value can be converted to Fahrenheit using the formula:
\[ \text{Temp (°F)} = \text{Temp (°C)} \times \frac{9}{5} + 32 \]

This project keeps the output in Celsius for simplicity but can be adapted for Fahrenheit.

## How to Use
1. Clone or download this repository to your computer.
2. Open the `.ino` file in the Arduino IDE.
3. Ensure the required libraries are installed (as described above).
4. Connect the components according to your wiring diagram.
5. Upload the code to your Arduino Uno.
6. Observe the temperature and humidity readings displayed on the LCD.
