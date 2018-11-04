# Circuitos Elétricos e Eletrônicos 2 sem. 2018

## Turma 1G
## Projeto: Controlador de temperatura para um aquário
## Integrantes do grupo:

Bernardo Galvão (41827368),
João Araujo (41817257)

## Descrição resumida do projeto

O projeto consiste na elaboração física e lógica de um controlador de temperatura em um aquário de peixes.
Será possível, através de botões para a entrada do usuário e um display LCD para a saída, escolher a temperatura ideal do o aquário, 
que será determinada por um ventilador cooler e um aquecedor de aquários, controlados por um arduino. 
Existirão três estados de temperatura para o aquário: Frio, onde o aquecedor ligará e o LED piscará azul; Ideal, onde o arduino apenas
monitora a temperatura e o LED piscará verde; Médio-quente, onde o cooler trabalhará a meia potência e o LED piscará amarelo; e Quente onde o cooler trabalhará a sua potência máxima e o LED piscará vermelho. 
O projeto visa ajudar pesquisas científicas que envolvam o controle de temperatura em aquários para a extração de dados sobre peixes.
Dados estes utilizados para a agricultura, como a aquaponia, e diversas outras áreas do conhecimento. 

Hardwares utilizados:
- Arduino Uno;
- Módulo Relé;
- LED RGB;
- Ventilador Cooler 12V;
- Termistor DS18B20 (aprova d'áqua);
- Botões de entrada;
- Display LCD;
- Módulo i2c (para diminuir o número de portas usadas pelo Display LCD);
- Ponte H L293;
- Resistores;
- Aquecedor para aquários 12V;

_______________________________________
Obs:

`src/` deve conter os códigos desenvolvidos

`doc/` documentação do projeto
