# Dual Arduino UART Communication System

A dual Arduino system demonstrating UART (Universal Asynchronous Receiver-Transmitter) communication, where one Arduino reads potentiometer values and transmits them to another Arduino that controls a servo motor and LCD display.

## 🛠️ Components Used

- 2x Arduino Uno
- 1x 16x2 LCD Display
- 1x Servo Motor
- 1x Potentiometer
- Jumper Wires
- 1x Breadboard
- Resistors

## 📋 Features

- UART communication between Arduinos
- Software Serial implementation
- Real-time data transmission
- Servo position control
- LCD status display
- Analog to digital conversion

## 🔌 UART Configuration

### Communication Setup
- Baud Rate: 9600
- Data Bits: 8
- Parity: None
- Stop Bits: 1
- Flow Control: None

### Pin Connections
Arduino 1 (Receiver):
  - RX: Pin 0
  - TX: Pin 1

Arduino 2 (Transmitter):
  - RX: Pin 0
  - TX: Pin 1


## 🎮 Component Connections

### Arduino 1 (Display & Servo)
LCD Pins:
  - RS: Pin 12
  - E: Pin 11
  - D4: Pin 5
  - D3: Pin 4
  - D2: Pin 3
  - D1: Pin 2
  
Servo: Pin 9


### Arduino 2 (Sensor)
Potentiometer: A0


## 📺 Circuit Diagram

![USART_UART](https://github.com/user-attachments/assets/5dbaee06-a151-4943-bb1a-47ce11e706b8)


## 💡 Data Flow

1. **Sensor Arduino (Arduino 2)**
   - Reads analog potentiometer value (0-1023)
   - Transmits via UART when value changes
   - Implements change detection to minimize traffic

2. **Control Arduino (Arduino 1)**
   - Receives data via UART
   - Maps values to servo position (0-180°)
   - Updates LCD with current values
   - Controls servo motor position

## ⚠️ Important Notes

- Cross-connect TX/RX pins between Arduinos
- Common ground connection is essential
- Match baud rates on both devices
- Monitor serial buffer overflow
- Implement proper error checking

## 🔧 Setup Instructions

1. **UART Configuration**
   - Set identical baud rates
   - Connect TX to RX (cross-over)
   - Establish common ground

2. **Hardware Setup**
   - Connect LCD display
   - Wire servo motor
   - Install potentiometer
   - Verify power connections

3. **Software Setup**
   - Upload respective codes
   - Monitor serial communication
   - Test data transmission

## 🔍 Troubleshooting

| Problem | Possible Solution |
|---------|------------------|
| No data transmission | Check TX/RX connections |
| Garbled data | Verify baud rate settings |
| Missing data | Check buffer overflow |
| System freeze | Verify timing/delays |

## 🔄 Version History

- v1.0 (Initial Release)
  - UART communication implementation
  - Basic servo control
  - LCD display integration
 
## 📝 License

This project is licensed under the MIT License
