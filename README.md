# ESP32-Slimboard-26x40
Compact ESP32‑WROOM‑32 module (26×40 mm) featuring a 2×15 pin connector for vertical or horizontal mounting, and a 10‑pin ZIF for UART/JTAG programming and I²C interface.

## 🧩 Processor Board
<img width="471" height="387" alt="image" src="https://github.com/user-attachments/assets/4399ea76-0588-4701-ae5c-468f98522b0d" />

The processor board is equipped with an ESP32‑WROOM‑32UE module (the E model can be used if no external antenna is needed).
It includes 16 MB of flash memory.

There is no USB interface nor 3.3V regulator on board, since these features are only needed a few times during the product life.
An external adapter can be used for initial programming; OTA updates can be used afterwards.

The board features a 2×15 pin male connector with 2.0 mm pitch, allowing use on prototyping platforms or production boards.

## 📐 Specifications
- Small size: 26x40mm
- Soc module on-board: ESP32‑WROOM‑32‑E (or UE)
  - 240MHz
  - 16MB Flash
  - 520KB Sram
  - 448 KB Rom
- Power supply: 3.3 V external  
- 1× 2×15×2.0 mm male connector
  - Straight version for horizontal mounting
  - Right‑angle version for vertical mounting  
- Reset button    
- 1× red LED on GPIO0  
- 1× green LED on GPIO2  
- one 10x0.5mm ZIF connector 
  - for Jtag or Uart programming (ESPPROG2 + adapter recommended)
  - for I²C or SPI expansion
## 📐 Connectivity
![Zif connector](images/others/pinout-zif10-5.svg)

## 🖼 Applications images
a water tank level sensor board communicating on MQTT with <img src="images/others/homeassistant.svg" width="30" /> Homeassistant
![level sensor](images/applications/20260613_170756_resiz.jpg)

<img src="images/applications/20260613_170756_resiz.jpg" width="300" />


## 🎪 Tools
no tool available
## 📑 Table of Contents
- [Processor Board](#processor-board)
- [documents](docs/)


