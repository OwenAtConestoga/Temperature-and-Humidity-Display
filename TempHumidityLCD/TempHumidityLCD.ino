#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#include <LiquidCrystal.h>

// Define DHT sensor type and pin
#define DHT_SENSOR_PIN 2
#define DHT_SENSOR_TYPE DHT11

// Initialize the DHT sensor
DHT dht(DHT_SENSOR_PIN, DHT_SENSOR_TYPE);

// Initialize the LCD
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // Start the LCD
  lcd.begin(16, 2);

  // Start the DHT sensor
  dht.begin();

  // Initial message on the LCD
  lcd.setCursor(0, 0);
  lcd.print("Initializing...");
  delay(2000);
  lcd.clear();
}

void loop() {
  // Read temperature and humidity
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Check if the readings are valid
  if (isnan(temperature) || isnan(humidity)) {
    lcd.setCursor(0, 0);
    lcd.print("Sensor Error");
    delay(2000);
    return;
  }

  // Display temperature on the first line
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature, 1); // 1 decimal point
  lcd.print(" C");

  // Display humidity on the second line
  lcd.setCursor(0, 1);
  lcd.print("Hum:  ");
  lcd.print(humidity, 1); // 1 decimal point
  lcd.print(" %");

  delay(2000); // Update every 2 seconds
}
