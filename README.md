# 🏠 Smart Home Automation System using ESP32

## 📌 Overview

This project is an IoT-based Smart Home Automation System that allows users to remotely control and monitor electrical appliances (such as lights) using an ESP32 microcontroller and a web interface.

The system uses a relay module to safely control AC loads (220V), while providing real-time feedback to the user. It demonstrates the integration of embedded systems, networking, and user interface design.

---

## 🚀 Features

* 🔌 Remote control of home appliances via web interface
* ⚡ Control of 220V AC devices using relay module
* 📡 Wi-Fi connectivity using ESP32
* 🔄 Real-time ON/OFF status feedback
* 🖥️ Simple and responsive web dashboard
* 🔒 (Optional) Authentication and logging system

---

## 🧠 System Architecture

* ESP32 connects to Wi-Fi
* Web interface sends control commands
* ESP32 processes requests and controls relay
* Relay switches the AC load (e.g., lamp)
* Status is sent back to the user

---

## 🛠️ Hardware Components

* ESP32 Development Board
* Relay Module (1-Channel or more)
* AC Load (Lamp 220V)
* Jumper Wires
* Power Supply

---

## 🔌 Wiring Diagram

### ESP32 → Relay

* GPIO 5 → IN
* 3.3V / 5V → VCC
* GND → GND

### Relay → AC Load

* COM → Live (L)
* NO → Lamp
* Neutral (N) → Direct to Lamp

⚠️ **Warning:** Handle 220V connections carefully. Always disconnect power before wiring.

---

## 💻 Software Requirements

* Arduino IDE
* ESP32 Board Package
* Wi-Fi Library (built-in)

---

## 📟 Code Example

```cpp
int relayPin = 5;

void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);
}

void loop() {
  digitalWrite(relayPin, HIGH); // ON
  delay(5000);
  digitalWrite(relayPin, LOW);  // OFF
  delay(5000);
}
```

---

## 🌐 Future Improvements

* 📱 Mobile application integration
* ☁️ Cloud control (Firebase / MQTT)
* 🔐 User authentication system
* 📊 Data logging and analytics
* 🤖 Automation based on sensors

---

## 📄 License

This project is for educational purposes.

---

## 👨‍💻 Author

**Mahmoud Elsalmy**
Computer Systems Engineering Student
