# 🚗 DATA-DRIVEN VEHICLE CONTROL SYSTEM USING CAN PROTOCOL
## 📚 PROJECT OVERVIEW:
This project demonstrates a CAN (Controller Area Network) protocol-based vehicle control system implemented using LPC2129 microcontroller. It simulates real-time communication between different Electronic Control Units (ECUs) in a vehicle to handle:
- 🌡️ Engine Temperature Monitoring
- ⚠️ Reverse Gear Alert System
- 🪟 Window Glass Control (Up/Down)
This system follows multi-node CAN communication where:
- Main Node reads temperature and handles switching
- Reverse Node reads proximity sensor
- Window Node controls LEDs representing glass position
## 🧠 WHAT IS CAN?
CAN (Controller Area Network) is a robust serial communication protocol used in automotive and industrial environments for reliable and real-time data exchange between Electronic Control Units (ECUs).
## 🚗 CAN Usage in Automotive:
- Engine control units
- Power window & door systems
- Reverse gear proximity alert
- Airbag systems
- Brake control (ABS/ESP)
- Lighting and infotainment control
## 📋 KEY FEATURES:
- ✅ Multi-node CAN communication (Main, Window, Reverse)
- 🌡️ Temperature sensor (DS18B20) reading
- ⚠️ Distance detection using GP2D12 sensor
- 🪟 Glass window control with LED visualization
- 🖥️ Real-time LCD display for temp, gear, window status
- 📶 External interrupts to trigger switch inputs
- 💡 CAN messages with specific IDs and data bytes
## 📂 FILE STRUCTURE:
main_node.c ->	Reads temperature, gear input, sends window count via CAN
window_node.c	-> Receives count and controls window via LEDs
reverse_node.c ->	Reads distance sensor and sends alert via CAN
types.h, can.h -> Header files for type definitions and CAN setup
lcd.h, lcd_defines.h ->	LCD control logic and macros
DS18B20_sens.h ->	Temperature sensor interface
ext_int.h ->	External interrupt configuration
## ⚙️ HOW TO COMPILE & FLASH:
###  🛠️ SOFTWARE TOOLS REQUIRED:
- Keil uVision (C Compiler)
- Flash Magic (Flashing onto LPC2129)
### 🚀 BUILD & FLASH STEPS:
- Write and compile .c files in Keil uVision.
- Generate .hex file.
- Use Flash Magic to program the LPC2129 board.
- Power the board and monitor output on LCD and LEDs.
## 🧠 MODULE WISE FUNCTIONALITY:
### 🧩 MAIN NODE:
- Reads temperature from DS18B20
- Reads gear status (forward/reverse) via interrupts
- Sends window glass count to Window Node
- Receives reverse alert from Reverse Node
### 🪟 WINDOW GLASS CONTROL NODE:
- Receives count from Main Node
- Turns ON LEDs based on count (simulating window movement)
### 🔄 REVERSE ALERT NODE:
- Continuously reads distance from GP2D12
- Sends alert to Main Node to stop the car if distance < threshold (e.g., < 80 cm)
## 🖥️ TESTING SEQUENCE:
- ✅ Test LCD display functionality
- ✅ Test ADC with variable voltage (potentiometer)
- ✅ Integrate GP2D12 sensor and display distance
- ✅ Test external interrupts with push-button switches
- ✅ Test DS18B20 sensor and LCD output
- ✅ Load and test basic CAN transmission and reception
- ✅ Finalize and flash the integrated code for all 3 nodes
## 💻 HARDWARE COMPONENTS:
- 🧠 LPC2129 Microcontroller
- 🔌 CAN Transceiver (MCP2551)
- 🖥️ 16x2 LCD Display
- 📏 GP2D12 Distance Sensor
- 🌡️ DS18B20 Temperature Sensor
- 🕹️ Switches (SW1, SW2,(for window up/down), SW3(for reverse))
- 💡 LEDs for window position
- 🔗 USB to UART Converter
## 🧠 CONCEPTS USED:
- CAN communication (Tx/Rx frames, DLC, RTR, ID)
- ADC and sensor interfacing (GP2D12, DS18B20)
- External interrupts for button input
- LCD interfacing with LPC2129
- Bitwise control of LEDs
## 📈 EXPECTED OUTPUT:
- Main LCD displays:  Gear status (G:FWD or reverse alert)
- Engine temperature in °C (E:25.50°C)
-  Window control status (via LED feedback)
- Reverse alert node triggers reverse warning on main node when obstacle is near.
- Window node lights LEDs from 1 to 8 based on control signal received from main node.
## 💬 FINAL NOTE:
This project mimics real-world automotive ECU communication, providing hands-on experience in CAN networking, sensor interfacing, and embedded programming on ARM7 architecture.


# Happy Coding......!
