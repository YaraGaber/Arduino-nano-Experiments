
# Arduino Nano Experiments

This repository contains a collection of **experiments and projects** using the **Arduino Nano**. Each experiment demonstrates different functionalities, sensors, and components that can be used with the Arduino Nano. Whether you're a beginner or an experienced maker, these experiments will help you explore the capabilities of the Arduino Nano.

![Arduino Nano](https://github.com/YaraGaber/Arduino-nano-Experiments/blob/main/Arduino%20Nano%2033%20BLE%20Rev2.jpg)  
*Figure 1: Arduino Nano in action.*

---

## Table of Contents
1. [Introduction](#introduction)
2. [Experiments List](#experiments-list)
3. [Hardware Requirements](#hardware-requirements)
4. [Software Requirements](#software-requirements)
5. [Installation](#installation)
6. [Usage](#usage)
7. [Contributing](#contributing)
8. [License](#license)
9. [Acknowledgments](#acknowledgments)

---

## Introduction
The **Arduino Nano** is a compact and versatile microcontroller board that is perfect for prototyping and building small-scale projects. This repository contains a variety of experiments that showcase the capabilities of the Arduino Nano, including:
- Working with sensors (e.g., temperature, light, motion).
- Controlling actuators (e.g., LEDs, motors, servos).
- Communicating with other devices (e.g., Bluetooth, Wi-Fi).

Each experiment is documented with a circuit diagram, code, and instructions to help you get started.

---

## Experiments List
Here’s a list of experiments included in this repository:

1. **Blinking LED**  
   A simple experiment to blink an LED using the Arduino Nano.

2. **Temperature and Humidity Sensor**  
   Measure temperature and humidity using the DHT11 sensor.

3. **Light Sensor**  
   Detect light intensity using an LDR (Light Dependent Resistor).

4. **Ultrasonic Distance Sensor**  
   Measure distance using the HC-SR04 ultrasonic sensor.

5. **Servo Motor Control**  
   Control a servo motor using PWM signals.

6. **Bluetooth Communication**  
   Send and receive data via Bluetooth using the HC-05 module.

7. **IR Remote Control**  
   Control devices using an IR remote and receiver.

8. **7-Segment Display**  
   Display numbers and characters on a 7-segment display.

---

## Hardware Requirements
To run these experiments, you will need the following components:
- **Arduino Nano**
- Breadboard and jumper wires
- LEDs and resistors
- Sensors (e.g., DHT11, LDR, HC-SR04)
- Actuators (e.g., servo motor, DC motor)
- Communication modules (e.g., HC-05 Bluetooth module, IR receiver)
- USB cable for Arduino Nano

---

## Software Requirements
- **Arduino IDE** (download from [here](https://www.arduino.cc/en/software))
- Required Arduino libraries (specific to each experiment)
- Python (optional, for some advanced experiments)

---

## Installation
1. **Clone the Repository:**
   ```bash
   git clone https://github.com/YaraGaber/Arduino-nano-Experiments.git
   cd Arduino-nano-Experiments
   ```

2. **Install Arduino IDE:**
   - Download and install the Arduino IDE from the [official website](https://www.arduino.cc/en/software).

3. **Install Required Libraries:**
   - Open the Arduino IDE.
   - Go to `Sketch` -> `Include Library` -> `Manage Libraries`.
   - Search for and install the required libraries for each experiment (e.g., `DHT`, `Servo`, `IRremote`).

4. **Upload the Code:**
   - Open the `.ino` file for the experiment you want to run.
   - Connect your Arduino Nano to your computer.
   - Select the correct board and port from the `Tools` menu.
   - Click the `Upload` button to upload the code to the Arduino Nano.

---

## Usage
1. **Choose an Experiment:**
   - Navigate to the experiment folder (e.g., `Blinking_LED`).
   - Open the `.ino` file in the Arduino IDE.

2. **Set Up the Circuit:**
   - Follow the circuit diagram provided in the experiment folder.
   - Connect the components as shown.

3. **Upload and Run:**
   - Upload the code to your Arduino Nano.
   - Observe the results (e.g., LED blinking, sensor readings).

