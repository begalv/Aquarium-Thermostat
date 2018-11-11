# Protocolos e Interface

## Protocolos/Interfaces de Comunicação

- **One Wire**: 
  O protocolo One Wire foi utilizado no projeto para estabelecer a comunicação entre o sensor de temperatura DS18B20 e o arduino. Desenvolvido pela Dallas Semiconductors, o protocolo permite a comunicação entre um dispositivo mestre, na maioria dos casos o microcontrolador, e um ou mais dispositivos escravos, utilizando apenas um cabo de barramento para os dados. Isto significa que é necessário apenas uma porta do arduino para a conexão entre diversos dispositivos que utilizem o protocolo, de maneira a controlar cada um dos dispositivos individualmente através do mesmo pino do microcontrolador, já que cada dispositivo possui um endereço próprio dentro do protocolo. No trabalho em questão, foi utilizado o arduino uno como dispositivo mestre e apenas um dispositivo escravo, o sensor de temperatura. 
  
- **I2C:**
  O protocolo I2C foi utilizado no projeto para estabelecer a comunicação entre o display LCD e o arduino. Semelhante ao protocolo One Wire, o protocolo I2C foi desenvolvido pela Philips Semiconductors e consegue estabelecer a comunicação entre diversos dipositivos utilizando apenas dois cabos, o SDA (Serial Data) e o SCL (Serial Clock). O protocolo também utiliza a dinâmica de conexão mestre-escravos, porém os dispositivos no circuito alteram de estado de acordo com a necessidade da comunicação, e, portanto, ambos os barramentos são bidirecionais. Cada um dos dispositivos têm um endereço fixo dentro do protocolo e estabelecem a comunicação com as portas A5 (SDA) e A4 (SCL) do arduino. Ambos os cabos do barramento são mantidos em nível alto quando não há comunicação entre os dispositivos, portanto é necessário a utilização de resistores pull up entre cada cabo e o VCC da comunicação. No projeto em questão, os resistores já se encontram embutidos no módulo I2C próprio para o display LCD. 
  

## Interfaces com o Usuário
  
  Foi desenvolvido para o circuito uma simples interface com o usuário através do sistema escrito em *C++*. A interface utiliza um display LCD 16x2 e dois botões de entrada. Através do display o usuário consegue visualizar dois menus existentes no sistema, um que imprime a temperatura atual do aquário e outro que mostra a temperatura ideal selecionada pelo usuário. Apertantado os dois botões ao mesmo tempo o usuário consegue passar de um menu para o outro, e no segundo menu, apertando o botão da direita, consegue elevar a temperatura ideal e, da esquerda, diminuir. A temperatura ideal padrão é de 25 graus célsius, sendo a ideal para a maioria dos peixes. Ao elevar ou diminuir esta temperatura, é também alterado para mais ou para menos as temperaturas máxima, miníma e média, que determinam os pontos de frio, morno e quente do aquário. 
  
