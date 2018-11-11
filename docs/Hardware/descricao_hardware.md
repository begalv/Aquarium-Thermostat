# Descriçao do Hardware

## Lista de Peças:

- **Arduino Uno:**
    O microcontrolador PIC foi utilizado para o controle, através dos pinos de entrada e saída, dos componentes utilizados no trabalho. O arduino envia sinais elétricos para o acionamento de diferentes partes do projeto em questão, além de enviar sinais alternados em um curto período de tempo para simular diferentes níveis de voltagem com apenas seus 5 volts característicos do estado "HIGH". Portanto, o microcontrolador PIC permitiu com que os componetnes de hardware utilizados fossem controlados através de códigos de programação, com o controle digital de corrente alta e baixa e o controle analógico, simulado pelas suas saídas PWM (Pulse with Modulation). 

- **Fonte 12V 5A:**
  Foi utilizado uma fonte de 12 volts e 5 amperes para alimentar o circuito desenvolvido no projeto. Esta escolha é consequência da utilização de dois componentes fora do limite de 5 volts do arduino: o aquecedor de áquarios e o ventilador cooler, além da falta de necessidade de locomoção do hardware, que pode ser alimentado diretamente de uma tomada. Assim, a fonte alimentará o aquecedor de 12 volts e 5 amperes, o ventilador de, também 12 volts, porém 0.45 amperes e, por fim, o arduino, que aguenta voltagens de 7 a 12 volts e alimentará o resto do circuito com 5 volts e amperagem adequada. 

- **Resistores 10KOhms e 300Ohms:** 
  Os resistores utilizados no projeto foram: resistores de 300 ohms, utilizados para que a voltagem enviada pelo arduino não queimasse o LED RGB presente no circuito; resistores de 10Kohms, que exercem o papel de resistores de pull down, garantindo nível lógico estável quando um botão não é pressionado. Os resistores de 10kohms também funcionam como limitadores de corrente, impedindo com que o sensor de temperatura puxe corrente superior aos 0.04 amperes que cada pino do arduino pode oferecer, mantendo a soma do fluxo de corrente enviado por todos os pinos inferior a 0.2 amperes. 
  
- **Termistor DS18B20 (aprova d'áqua):**
  O sensor de temperatura escolhido foi a versão do DS18B20 a prova d'água. O sensor utiliza o protocolo One Wire para se comunicar com o microcontrolador, sendo, portanto, um sensor digital. Os dados coletados servem como "input" para o controle, através de código, do restante dos componentes elétricos e eletrônicos utilizados. 
  
 ![Alt](https://github.com/begalv/mackenzie-projeto-TermostatoAquario/blob/master/docs/Hardware/Imagens/sensor.jpg)
  
- **LED RGB:** 
  O LED RGB utilizado no projeto funciona como um sinal visual de "output". Quando a temperatura cai abaixo de determinado valor, o LED acende a luz azul, indicando a temperatura fria do áquario; quando a temperatura está no intervalo ideal, acende verde, indicando a temperatura dentro do desejado; quando a temperatura está a cima de determinados valores mais altos, acende amarelo, indicando a temperatura morna, ou acende vermelho, indicando a temperatura quente.

- **Display LCD (16x2):**
  O display LCD é utilizado como "output" para informar ao usuário dados relevantes. O sistema possui dois estados (menus) diferentes: um para mostrar a temperatura atual do aquário em Celsius, fornecida pelo sensor, e outro para informar a temperatura ideal para o aquário selecionada pelo usuário, sendo que esta pode ser alterada neste mesmo menu. 

- **Módulo i2c para displays LCD:** 
  O módulo I2C próprio para displays LCDs foi adicionado ao projeto com o intuito de diminuir o uso, normalmente alto, de portas tomadas pelo display. O módulo utiliza o protocolo I2C para a comunicação com o arduino, e consequentemente, com o próprio display LCD. O módulo também possui um potenciômetro para a regulagem de contraste da tela. 
  
   ![Alt](https://github.com/begalv/mackenzie-projeto-PCCooler/blob/master/docs/Hardware/Imagens/i2c.jpg)

- **Botões de entrada:**
  Os botões servem como componentes de "input" no circuito. Através deles os usuários conseguem navegar pelos dois menus existentes no sistema, além de poderem selecionar a temperatura ideal do aquário. Quando o usuário seleciona a temperatura ideal, está indiretamente selecionando, também, as temperaturas de ponto frio, morno e quente. 

- **Ventilador Cooler 12V 0.45A:**
  O ventilador é utilizado para o controle da temperatura, sendo ligado a meia potência (através do PWM do arduino) quando a temperatura está morna e a máxima potência quando quente. Quando acionado, acelera o processo de evaporação da água do aquário, ocasinado na queda da temperatura da água, sendo que sua potência é o suficiente para resfriar a água e não diminuir o nível do aquário. 
  
  ![Alt](https://github.com/begalv/mackenzie-projeto-PCCooler/blob/master/docs/Hardware/Imagens/cooler.jpg)

- **Ponte H L293:**
  O circuito L293 serve como meio para o controle do ventilador através do arduino. O arduino trabalha com voltagens de até 5,5 volts, incapaz de acionar por si só o ventilador de 12 volts. Assim, a ponte-H funciona como um intermediário na comunicação entre o microcontrolador e o ventilador, já que, esta, suporta voltagens mais altas. 

- **Aquecedor para aquários 12V 5A:**
  O aquecedor, assim como o ventilador, é utilizado para o controle da temperatura, sendo acionado quando esta cai abaixo de determinado valor, selecionado inderetamente pelo usuário. O aquecedor utilizado para o circuito possui 12 volts e 60 watts, podendo esquentar 1 litro de água em até 15 minutos.
  
  ![Alt](https://github.com/begalv/mackenzie-projeto-PCCooler/blob/master/docs/Hardware/Imagens/aquecedor.jpg)

- **Módulo Relé:**
  Como o aquecedor possui voltagem e corrente superior as fornecidas pelo arduino, é utilizado um módulo relé como intermediário entre o arduino e o aquecedor. o Relé é ligado em série com o aquecedor e é capaz de receber sinais elétricos do arduino, quando conectado aos 5 volts do microcontrolador. Quando o sinal elétrico com o arduino é cortado pelo código, uma alavanca eletromecância é acionada ecompleta a ligação em série com o aquecedor, o ligando. 

## Desenho Fritzing

**obs:**
    No circuito desenvolvido pelo fritzing, foi utilizado uma bateria de 9V para representar a fonte de 12v, devido a falta de opção no software. Esta fonte de 12V também alimentará o arduino. Com relação ao ventilador e ao aquecedor, foram utilizados partes simbólicas para representá-los. 

![Alt](https://github.com/begalv/mackenzie-projeto-PCCooler/blob/master/docs/Hardware/Imagens/fritzing.jpg)

## Esquema Eletrônico

![Alt](https://github.com/begalv/mackenzie-projeto-PCCooler/blob/master/docs/Hardware/Imagens/circ.jpg)


