#include <DHT.h>
#define DHTPIN 8
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);
float tempo = millis();
float tempo2 = millis();
#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;
String lum = "";
String Hum = "";
String Temp = "";
String ID = "";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
  lcd.begin(16, 2);
  lcd.setRGB(255, 0, 0);
}
void loop() {
  // put your main code here, to run repeatedly:

  if (millis() - tempo > 3000)
  {
    String lum = String(analogRead (A1));
    String Hum = String(dht.readHumidity());
    String Temp = String(dht.readTemperature());
    String ID = "2";
    Serial.print("{\"sensori\":[");
    Serial.print("{\"luminosita\": " + lum + ",");
    Serial.print("\"umidita\": " + Hum + ",");
    Serial.print("\"temperatura\": " + Temp + ",");
    Serial.print("\"ID\": " + ID + "}");
    Serial.println("]}");
    tempo = millis();
    lcd.clear();
  }
  lcd.clear();
  String lum = String(analogRead (A1));
  while (millis() - tempo < 1000)
  {

    lcd.setCursor(0, 0);
    lcd.print("Luminosita");
    lcd.setCursor(0, 1);
    lcd.print(lum + " lux");
  }
  lcd.clear();
  String Hum = String(dht.readHumidity());
  while (millis() - tempo < 2000 && millis() - tempo > 1000)
  {

    lcd.setCursor(0, 0);
    lcd.print("Umidita");
    lcd.setCursor(0, 1);
    lcd.print(Hum + " %");
  }
  lcd.clear();
  String Temp = String(dht.readTemperature());
  while (millis() - tempo < 3000 && millis() - tempo > 2000)
  {

    lcd.setCursor(0, 0);
    lcd.print("Temperatura");
    lcd.setCursor(0, 1);
    lcd.print(Temp + " C");
  }


}
