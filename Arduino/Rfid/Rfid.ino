#include <SPI.h>
#include <MFRC522.h>
#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN);
String r = "1";
String messaggio="";
void setup()
{
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();

}
void loop()
{

  if ( ! mfrc522.PICC_IsNewCardPresent())
  {
    return;
  }

  if ( ! mfrc522.PICC_ReadCardSerial())
  {
    return;
  }
  String content = "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++)
  {
    //(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    //(mfrc522.uid.uidByte[i], HEX);
    content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
    content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  content.toUpperCase();
  Serial.print("{\"Tag\":[");
  Serial.print("{\"Rilevatore\": \""+r+"\",");
  Serial.print("\"Messaggio\": \""+messaggio+"\",");
  Serial.print("\"ID\": \""+content+" \"}");
  Serial.println("]}");
}
