Automatic Street Light System Using Arduino

Objective

To develop an automatic street light system using Arduino and an LDR sensor that switches an LED ON or OFF depending on the surrounding light intensity.

Components

- Arduino Uno
- LDR (Light Dependent Resistor)
- 10kΩ Resistor
- LED
- 220Ω Resistor
- Breadboard
- Jumper Wires

Working Principle

The LDR sensor detects the surrounding light intensity and sends an analog signal to Arduino through analog pin A0.

Arduino continuously reads the sensor value and compares it with a predefined threshold of 500.

- When the LDR value is below 500, the LED turns ON.
- When the LDR value is 500 or above, the LED turns OFF.

The sensor readings and LED status are displayed on the Serial Monitor.

Expected Output

- The LED should automatically turn ON in darkness.
- The LED should automatically turn OFF in sufficient light.
- Light intensity readings should be displayed on the Serial Monitor.
- The system should continuously monitor the surrounding light conditions.

QA Approach

The project is tested for:

- LDR sensor functionality.
- Light intensity detection.
- Threshold configuration.
- Analog input pin configuration.
- LED switching operation.
- Serial communication.
- Program compilation.

Technologies Used

- Arduino Uno
- Arduino IDE
- Embedded C/C++
- GitHub

Project Purpose

This project demonstrates an automated lighting system that reduces manual operation by controlling street lights according to surrounding light conditions.
