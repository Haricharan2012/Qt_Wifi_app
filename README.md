# 📡 Qt WiFi Configuration Tool (Raspberry Pi)

A lightweight **GUI-based WiFi configuration application** built using **Qt and C++** for Raspberry Pi, enabling users to connect to wireless networks easily in embedded environments.

---

## 🚀 Project Overview

This project provides a **user-friendly interface** to connect a Raspberry Pi to WiFi networks by entering SSID and password, eliminating the need for manual terminal configuration.

It is designed specifically for **embedded systems** where ease of use and reliability are critical.

---

## 🎯 Features

* 📶 Connect to WiFi using SSID and password
* 🖥️ Simple and intuitive GUI (Qt-based)
* ⌨️ On-screen keyboard integration for touchscreen devices
* ⚡ Multiple backend execution approaches
* 🔄 Designed for embedded deployment

---

## ⚙️ Tech Stack

### 💻 Software

* C++
* Qt Framework
* Linux (Raspberry Pi OS)

### 🔧 Tools & Utilities

* `nmcli` (Network Manager CLI)
* Shell scripting
* Qt `QProcess`

---

## 🧠 Implementation Details

The application was implemented using **three different system-level approaches**:

### 1️⃣ Using `system()`

* Executes shell commands directly
* Simple but blocking approach

### 2️⃣ Using `QProcess`

* Executes `nmcli` commands asynchronously
* Provides better control and responsiveness

### 3️⃣ Dynamic Shell Script Generation

* Generates a shell script based on user input
* Executes script to establish WiFi connection

---

## 🏗️ Architecture

```
User Input (SSID + Password)
        ↓
Qt GUI Application
        ↓
Execution Layer
(system() / QProcess / Script)
        ↓
nmcli / Shell Commands
        ↓
WiFi Connection Established
```

---

## 🔧 Use Case

This application was designed as part of an embedded system for:

* 📥 Connecting Raspberry Pi to internet
* 🔄 Downloading firmware updates from a file server *(planned feature)*
* 🪑 Supporting a **dental chair control system**

---

## 📷 Screenshots

*Add UI screenshots here*

---

## 🧪 Current Status

🚧 **Partially Completed**

* [x] GUI implementation
* [x] WiFi connection via multiple methods
* [x] On-screen keyboard integration
* [ ] Firmware download system (planned)

---

## 🔮 Future Improvements

* 🌐 Automatic firmware download integration
* 📡 Network scanning and SSID listing
* 🔐 Secure credential handling
* 📱 Enhanced UI for touchscreen devices

---

## 📚 References

* Qt Documentation
* nmcli (Network Manager CLI)
* Raspberry Pi Documentation

---

## 👨‍💻 Author

**R. Haricharan**
🔗 GitHub: [https://github.com/Haricharan2012](https://github.com/Haricharan2012)

---

## 📹 Video

https://github.com/user-attachments/assets/0714381b-c194-4f45-bb3a-fcffc86dc4a7

---
