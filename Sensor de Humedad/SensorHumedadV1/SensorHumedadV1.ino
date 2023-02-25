include <LiquidCrystal.h>
include <DHT.h>

define DHTPIN 8
define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);                                  
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
float humidity, temperature;                               
 
void setup() {
   dht.begin();                                             
   lcd.begin(16, 2);   
 }
 void loop() {
   humidity = dht.readHumidity();                           
   temperature = dht.readTemperature();                     
   delay(2000);
   lcd.setCursor(8, 0);
   lcd.print("Temperatur:");
   lcd.setCursor(8, 1);
   lcd.print("Humidity:");
   lcd.setCursor(0, 0);
   lcd.print(temperature);
   lcd.setCursor(0, 1);
   lcd.print(humidity);
 }