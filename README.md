# Raspberry Pi Sensor Hub

## Description
A Raspberry Pi C++ demo to blink an LED, read sensor data, and communicate over UART. Ideal as a starter for IoT, automation, or embedded projects.

## Hardware Used
- Raspberry Pi 4 / Pi 3 / Pi Zero
- LED + resistor
- MPU6050 (I2C) or DHT22 sensor
- USB-UART adapter (for external UART testing)

## Features
- LED blinking using GPIO
- UART send/receive
- Sensor reading over I2C or GPIO
- Basic modular design (`led.cpp`, `uart.cpp`, `sensor.cpp`)

## How to Build
```bash
make all

