# Hardware Description

## List of Components:

- **Arduino Uno:**
    The PIC microcontroller was used to control, through its input and output pins, the components used in the design, by code. 
    
- **12V 5A Power Supply:**
  A 12 volts and 5 amperes was used to power part of the developed circuit. This choice was made beacause of two components used are outside the arduino's 5-volt limit: the aquarium heater and the fan cooler. In addition, there's a lack of need to move the hardware around, so it can be fed directly from a power outlet. 
  
- **10KOhms and 300Ohms Resistors:** 
  The resistors used in the design were: 300 ohms resistors, used for the RGB LED present in the circuit; 10Kohms resistors, used as pull down resistors, ensuring stable logical level when a button is not pressed. 10kohms resistors also function as current limiters, preventing the temperature sensor from pulling current higher than the 0.04 amperes that each arduino pin can provide, keeping the current flow's sum sent by all pins less than 0.2 amperes.
  
- **DS18B20 Waterproof Temperature Sensor:**
 The temperature sensor chosen was the waterproof version of the DS18B20. The sensor uses the One Wire protocol to communicate with the microcontroller and, therefore, is a digital sensor. The collected data serves as input for control the rest of the electricals and electronics components used.
  
 ![Alt](https://github.com/begalv/mackenzie-projeto-TermostatoAquario/blob/master/docs/Hardware/images/sensor.jpg)
  
- **LED RGB:** 
  The RGB LED used in the design works as a visual output signal. When the temperature falls below a certain value, the LED turns on the blue light, indicating the cold temperature of the aquarium; when the temperature is within the ideal range, turns on the green light, indicating the temperature within the desired range; when the temperature is above certain higher values, it turns yellow, indicating the warm temperature, or red, indicating the hotter temperatures.
  
- **LCD Display (16x2):**
 The LCD display is used as an output to inform relevant data to the user. The system shown on the screen has two different states (menus): one to show the current temperature of the aquarium in Celsius, provided by the sensor, and another to inform the ideal temperature for the aquarium selected by the user, which can be changed in the same menu.

- **I2C Module for LCD Displays:** 
  The I2C module, made for LCD displays, has been added to the project in order to reduce the number of ports taken by the display. The module uses the I2C protocol for communication with the Arduino, and consequently, with the LCD display itself. 
  
   ![Alt](https://github.com/begalv/mackenzie-projeto-PCCooler/blob/master/docs/Hardware/images/i2c.jpg)

- **Input Buttons:**
  The buttons serve as input components in the circuit. Through them users can navigate through menus in the system and select the ideal temperature. When the user selects the ideal temperature, he is indirectly selecting also the temperatures of cold, warm and hot.

- **12V 0.45A Fan Cooler:*
  The fan is used for temperature control and it is turned on at half-power (via Arduino's PWM) when the temperature is warm, and, at the maximum power when is very hot. When activated, it accelerates the process of water evaporation in the aquarium, cooling its temperature without lowering water level.
  
  ![Alt](https://github.com/begalv/mackenzie-projeto-PCCooler/blob/master/docs/Hardware/images/cooler.jpg)

- **L293 H Bridge:**
  The L293 chip is used for controling the fan through arduino. The arduino works with voltages of up to 5.5 volts, unable to drive alone the 12-volt fan. Thus, the H-bridge acts as an intermediate in the communication between the microcontroller and the fan, since it supports higher voltages. In addition, you can adjust the motor power through the PWM outputs.

- **12V 5A Water Heater:**
  The heater, like the fan, is used to control the temperature, being triggered when it falls below a certain value. The heater used for the circuit has 12 volts and 60 watts, and can heat 1 liter of water in up to 15 minutes.
  
  ![Alt](https://github.com/begalv/mackenzie-projeto-PCCooler/blob/master/docs/Hardware/images/aquecedor.jpg)

- **Relay Module:**
  Since the heater has higher voltage and current than those provided by Arduino, a relay module is used as an intermediate between the Arduino and the heater.
  
## Project's Scalability
  Both logical and physical parts of this project were designed to be scalable according to the size of the aquarium. The choice of the relay module for the activation of the 12V heater, rather than the H bridge, is due to relay's higher voltage support needed for more powerful heaters used in larger aquariums. The choice of the H-bridge for the activation of the 12-V fan, instead of the activation via the relay module, is due to the possibility of regulating the power of the fan via PWM outputs. For larger aquariums, more fans can be added to the circuit, being possible to control two fans per bridge H.
  
## Design

**obs:**
   In the circuit developed by fritzing, a 9V battery was used to represent the 12v source, due to lack of option in the software. Regarding the fan and heater, symbolic parts were used to represent them.
   
![Alt](https://github.com/begalv/mackenzie-projeto-PCCooler/blob/master/docs/Hardware/images/fritzing.jpg)

## Electronic Schematics

![Alt](https://github.com/begalv/mackenzie-projeto-PCCooler/blob/master/docs/Hardware/images/circ.jpg)


