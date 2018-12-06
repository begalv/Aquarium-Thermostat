# Protocols and Interfaces

## Protocols/Communication Interfaces

- **One Wire**: 
  The One Wire protocol was used in the design to establish communication between the DS18B20 temperature sensor and the Arduino. Developed by Dallas Semiconductors, the protocol allows communication between a master device, in most cases the microcontroller, and one or more slave devices, using only a bus cable for the data. This means that only one arduino port is needed for the connection between several devices using the protocol, controlling each of the devices individually through the same pin of the microcontroller, since each device has its own address within the protocol. In this project, the arduino uno was used as master device and only one slave device was used, the temperature sensor. 
  
- **I2C:**
  The I2C protocol was used in the project to establish communication between the LCD display and the Arduino. Similar to the One Wire protocol, the I2C protocol was developed by Philips Semiconductors and can establish communication between several devices using only two cables, Serial Data (SDA) and Serial Clock (SCL). The protocol also uses the master-slave connection dynamics, but the devices in the circuit change states according to the need for communication, and therefore both buses are bidirectional. Each of the devices have a fixed address within the protocol and establish communication with the Arduino A5 (SDA) and A4 (SCL) ports. Both bus cables are held at high level when there is no communication between the devices, so it is necessary to use pull up resistors between each cable and the communication VCC. In this design, the resistors are already built into the I2C module for the LCD display.

## User Interface
  
 It was developed for the circuit a simple user interface through the system written in * C ++ *. The interface uses a 16x2 LCD display and two input buttons. Through the display the user can see two menus in the system, one that prints the current temperature of the aquarium and another that shows the ideal temperature selected by the user. Pressing the two buttons at the same time, the user can move from one menu to another, and in the second menu, pressing the right button, can raise the ideal temperature and pressing the left, decrease. The ideal standard temperature is 25 degrees celcius, being ideal for most fish. By raising or lowering this temperature, the maximum, minimum, and average temperatures that determine the very hot, cold, and warm points of the aquarium are also changed to plus or minus.
  
