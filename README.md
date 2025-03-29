# arduino-automatic-garden-irrigation-system
Automatic garden irrigation system based on Arduino


## Libraries
- RTClib by Adafruit: https://github.com/adafruit/RTClib

## Components
- Arduino UNO
- relay 5V 10A SRD-5VDC-SL-C
- Real Time Clock Module DS1307
- Keyestudio Prototype P CB Board For Arduino UNO R3 Shield Board FR-4
- diode 1N4148 DO35 (200mA 100V)
- LED
- power source 12V
- transistor 2N7000 TO-92
- Water Pump R365 (DC 6-12V, 0.45A, 1.45 liter/minute)
- resistor 10kOhm
- resistor 500 Ohm

## Steps:
1. Assemble and solder the circuit on the proto shield
2. Attach proto shield to Arduino UNO
3. Upload src/RealTimeClockSetup.ino firmware to Arduino to set the RTC to the datatime
4. Upload src/IrrigationSystem.ino firmware to Arduino
5. Connect the water pump to the circuit
