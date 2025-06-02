# Arduino OLED Display Project (128x64 I2C)

This Arduino project demonstrates how to use a 128x64 pixel I2C OLED display with the `Adafruit_GFX` and `Adafruit_SSD1306` libraries. It displays text and graphics on the screen using the I2C interface and `Wire.h`.

## 📷 Overview

- 📟 128x64 pixel monochrome OLED display
- 🔌 I2C communication protocol
- 🧰 Libraries used:
  - `Adafruit_GFX.h` — graphics primitives
  - `Adafruit_SSD1306.h` — display driver
  - `Wire.h` — I2C communication

## 🛠️ Requirements

- Arduino board (Uno, Nano, Mega, etc.)
- 128x64 I2C OLED display (SSD1306 chipset)
- Jumper wires
- Breadboard (optional)

## 📦 Library Installation

Install the following libraries via the Arduino Library Manager:

1. **Adafruit GFX Library**
2. **Adafruit SSD1306 Library**
3. **Wire (Built-in)**

> **Tip**: Search for these in **Tools > Manage Libraries...**

## ⚙️ Wiring

| OLED Pin | Arduino Pin |
|----------|-------------|
| VCC      | 5V          |
| GND      | GND         |
| SCL      | A5 (Uno/Nano) |
| SDA      | A4 (Uno/Nano) |

> For other boards (e.g. Mega, ESP32), refer to their I2C pin documentation.
}