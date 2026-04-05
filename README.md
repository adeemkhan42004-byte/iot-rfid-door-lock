# IoT Smart Door Lock using RFID & Email Alerts

This project is an IoT-based smart door locking system built using ESP8266 and RFID technology. It allows access control using RFID cards and sends real-time email notifications for security monitoring.

## Features
- RFID-based secure door access
- Real-time email alerts on door unlock
- Alert for unauthorized card attempts
- WiFi-enabled remote monitoring using Blynk
- Low-cost and efficient IoT solution

## Tech Stack
- ESP8266 (NodeMCU)
- RFID Module (RC522)
- Embedded C
- Blynk IoT Platform
- SMTP (Email Notifications)

## Components Used
- ESP8266 NodeMCU
- RC522 RFID Reader
- RFID Cards/Tags
- Servo Motor / Solenoid Lock
- Jumper Wires
- Breadboard

## Working
1. RFID card is scanned using RC522 module
2. ESP8266 checks if the card is authorized
3. If valid → Door unlocks + Email sent
4. If invalid → Access denied + Alert email sent
5. System is connected to Blynk for monitoring over WiFi

## Future Improvements
- Mobile app integration
- Fingerprint authentication
- Camera-based logging system

## Author
Mohd Adeem Khan
