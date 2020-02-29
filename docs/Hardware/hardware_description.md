# Hardware Description

## List of Components:

- **Arduino Uno:**
    The PIC microcontroller was used to control, through its input and output pins, the components used in the design, by code. 
    
- **12V 5A Power Supply:**
  12 volts and 5 amperes was used to power the aquarium heater and the fan cooler, that are both outside the arduino's 5-volt limit.
  
- **10KOhms and 300Ohms Resistors:** 
  The resistors used in the design were: 300 ohms resistors, used for the RGB LED present in the circuit; 10Kohms resistors, used as pull down resistors, ensuring stable logical level when a button is not pressed. 10kohms resistors also function as current limiters, preventing the temperature sensor from pulling current higher than the 0.04 amperes that each arduino pin can provide.
  
- **DS18B20 Waterproof Temperature Sensor:**
 The temperature sensor chosen was the waterproof version of the DS18B20. The sensor uses the One Wire protocol to communicate with the microcontroller.
  
 ![Alt](https://github.com/begalv/mackenzie-projeto-TermostatoAquario/blob/master/docs/Hardware/images/sensor.jpg)
  
- **LED RGB:** 
  When the temperature falls below a certain value, the LED turns on the blue light, indicating the cold temperature of the aquarium. When the temperature is within the ideal range, it turns on the green light and, finally, when the temperature is above a certain value, it turns on the yellow light, indicating warm water, or red when the temperature even higher. 
  
- **LCD Display (16x2):**
  The system shown on the screen has two different states (menus): one to show the current temperature of the aquarium in Celsius and another to inform the ideal temperature selected by the user, which can be changed in the same menu.

- **I2C Module for LCD Displays:** 
  The I2C module, made for LCD displays, has been added to the project in order to reduce the number of pins taken by the display. The module uses the I2C protocol for communication with the Arduino, and consequently, with the LCD display itself. 
  
   ![Alt](https://github.com/begalv/mackenzie-projeto-PCCooler/blob/master/docs/Hardware/images/i2c.jpg)

- **Input Buttons:**
  Through them users can navigate through menus in the system and select the ideal temperature. When the user selects the ideal temperature, he is indirectly selecting also the temperatures of cold, warm and hot.

- **12V 0.45A Fan Cooler:*
  The fan is used for temperature control and it is turned on at half-power (via Arduino's PWM) when the temperature is warm, and, at the maximum power when is hot.
  
  ![Alt](https://github.com/begalv/mackenzie-projeto-PCCooler/blob/master/docs/Hardware/images/cooler.jpg)

- **L293 H Bridge:**
  The L293 chip is used for controling the fan through arduino. The arduino works with voltages of up to 5.5 volts, unable to drive alone the 12-volt fan. Thus, the H-bridge acts as an intermediate in the communication between the microcontroller and the fan, since it supports higher voltages. In addition, it allows to adjust the motor power through the PWM pins.

- **12V 5A Water Heater:**
  The heater, like the fan, is used to control the temperature, being triggered when it falls below a certain value. The heater used for the circuit has 12 volts and 60 watts, and can heat 1 liter of water in up to 15 minutes.
  
  ![Alt](https://github.com/begalv/mackenzie-projeto-PCCooler/blob/master/docs/Hardware/images/aquecedor.jpg)

- **Relay Module:**
  Since the heater has higher voltage and current than those provided by Arduino, a relay module is used as an intermediate between the Arduino and the heater.
  
## Project's Scalability
  Both logical and physical parts of this project were designed to be scalable according to the size of the aquarium. The option for the relay module to activate the 12V heater, instead of another H bridge, is due to relay's higher voltage support, needed by more powerful heaters used in larger aquariums. And the option for the H-bridge to activate the 12-V fan, instead of a relay module, is due to the possibility of regulating the fan's power through PWM pins.
## Design

**obs:**
   In the circuit developed by fritzing, a 9V battery was used to represent the 12v source, due to lack of option in the software. Regarding the fan and heater, symbolic parts were used to represent them.
   
![Alt](https://github.com/begalv/mackenzie-projeto-PCCooler/blob/master/docs/Hardware/images/fritzing.jpg)

## Electronic Schematics

![Alt](https://github.com/begalv/mackenzie-projeto-PCCooler/blob/master/docs/Hardware/images/circ.jpg)


