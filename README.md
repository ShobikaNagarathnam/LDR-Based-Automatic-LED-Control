# LDR-Based-Automatic-LED-Control

## 📌 Project Overview

This project implements an automatic light detection system using an Arduino Uno and an LDR (Light Dependent Resistor). The Arduino continuously monitors the ambient light intensity and controls an LED based on the measured light level.

## 🛠 Components Used

- Arduino Uno R3
- LDR (Photoresistor)
- LED
- 10 kΩ Resistor
- 220 Ω Resistor
- Breadboard
- Jumper Wires

## ⚙ Hardware Connections

### LDR Connections

| LDR Circuit | Arduino Uno |
|-------------|-------------|
| One Terminal | 5V |
| Other Terminal | A0 |
| 10 kΩ Resistor | A0 → GND |

### LED Connections

| LED Pin | Arduino Uno |
|---------|-------------|
| Anode (+) | D9 (through 220 Ω resistor) |
| Cathode (-) | GND |

## 🔄 Working Principle

The LDR and resistor form a voltage divider whose output is connected to analog pin **A0**. The Arduino continuously reads the analog value from the LDR and compares it with a predefined threshold value 600. When the surrounding light intensity decreases below the threshold, the LED turns ON; otherwise, it remains OFF.

## 🚀 Applications

- Automatic Street Lights
- Smart Home Lighting
- Ambient Light Monitoring
- Energy-Efficient Lighting Systems

## 🔗 Tinkercad Simulation

https://www.tinkercad.com/things/k89WH52Xzgo-photoresistor/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard&sharecode=toGXnG-xjceGq7Vcme6C-lTFuWqgNcwRV3aSjGHzDoU&sharecode=toGXnG-xjceGq7Vcme6C-lTFuWqgNcwRV3aSjGHzDoU

## 🤖 Working Demonstration


https://github.com/user-attachments/assets/bfda6058-de55-4c0f-b435-f3e8935634ac

