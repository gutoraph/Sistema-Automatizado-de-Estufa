# Sistema Automatizado de Controle de Estufas

# Integrantes
Bruno Fidalgo - 31750737 <br />
Gustavo Businhani da Silva - 31725279

# Sobre o projeto
Esse projeto foi desenvolvido através da disciplina de Objetos Inteligentes Conectados da Universidade Presbiteriana Mackenzie, sendo orientado pelo Prof. Dr. Wilian França Costa.<br />
Sistemas de Informação - 5º Semestre/2021

# Uso e Funcionamento
O projeto tem como funcionalidade em automatizar as estufas e deixa-las regadasm, minimizando o esforço humano.

Montamos os componentes de acordo com o circuito eletrônico que está localizado nesse [repositório](https://github.com/gutoraph/Sistema-Automatizado-de-Estufa/blob/525c94e620d57a445c59d9ee975ddc0be01ae192/circuito%20eletronico.png).<br />

Ele começa pelo no sensor de umidade do solo que ficará submerso em um vaso de planta, isso faz com que ele fique captando informações dos valores da umidade do solo, retornando para o Arduino as informações equivalentes. <br />
Este número é interpretado da seguinte maneira:<br />
• Quanto mais próximo de 0, mais úmido o solo está.<br />
• Quanto mais próximo de 700, mais seco o solo está.<br />



# Componentes Utilizados
• Arduino Uno R3 <br />
• Sensor de umidade do solo higrômetro <br />
• Sensor de temperatura DS18B20 <br />
• Sensor de luminosidade LDR <br />
• Protoboard <br />
• Mortor DC 3-6V <br />
• Bateria 9V <br />
• 2 Resistor <br />
• 11 Jumpers Macho-Macho <br />
• 6 Jumpers Macho-Fêmea <br />
• Ponte-H L298N


# Interfaces

O projeto conta com uma interface que foi desenvolvida utilizando a ferramenta Node-Red. <br />
<br />
Fluxo Node-Red<br />
![img](https://github.com/gutoraph/Sistema-Automatizado-de-Estufa/blob/4ca548484e2f5ea0022ecf7c057ad5fc9f9327ed/node-red.jpg)<br /><br />
Nó responsável por receber o valor da umidade do solo.<br />
![img](https://github.com/gutoraph/Sistema-Automatizado-de-Estufa/blob/80f507297fa2e8ff796e8cef2fc91baea44d1ac7/1.jpg)<br /><br />
Entrada do protocolo MQTT<br />
![img](https://github.com/gutoraph/Sistema-Automatizado-de-Estufa/blob/80f507297fa2e8ff796e8cef2fc91baea44d1ac7/2.jpg)<br /><br />
Recebendo informação da umidade através do MQTT <br />
![img](https://github.com/gutoraph/Sistema-Automatizado-de-Estufa/blob/dd084d286a94f77bb9c0c6e56001299d2a3f0fd2/3.jpg)
