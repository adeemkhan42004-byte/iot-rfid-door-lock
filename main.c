#include <ESP8266WiFi.h>
#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN D2
#define RST_PIN D1

MFRC522 rfid(SS_PIN, RST_PIN);

const char* ssid = "YOUR_WIFI";
const char* password = "YOUR_PASSWORD";

String validUID = "AB CD EF 12"; // Example RFID UID

void setup() {
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();

  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConnected!");
}

void loop() {
  if (!rfid.PICC_IsNewCardPresent()) return;
  if (!rfid.PICC_ReadCardSerial()) return;

  String uid = "";

  for (byte i = 0; i < rfid.uid.size; i++) {
    uid += String(rfid.uid.uidByte[i], HEX);
  }

  Serial.println("Card UID: " + uid);

  if (uid == validUID) {
    Serial.println("Access Granted");
    // Trigger door unlock + email
  } else {
    Serial.println("Access Denied");
    // Send alert email
  }

  delay(2000);
}
