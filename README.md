# Sistema Automatizado de Controle de Estufas

# Integrantes
Bruno Fidalgo - 31750737 <br />
Gustavo Businhani da Silva - 31725279

# Sobre o projeto
Esse projeto foi desenvolvido através da disciplina de Objetos Inteligentes Conectados da Universidade Presbiteriana Mackenzie, sendo orientado pelo Prof. Dr. Wilian França Costa.<br />
Sistemas de Informação - 5º Semestre/2021

# Documentação do projeto
[Documento]

# Uso e Funcionamento
O projeto tem como funcionalidade automatizar estufas deixando o solo irrigado, minimizando o esforço manual.

Montamos os componentes de acordo com o circuito eletrônico que está localizado nesse [repositório](https://github.com/gutoraph/Sistema-Automatizado-de-Estufa/blob/525c94e620d57a445c59d9ee975ddc0be01ae192/circuito%20eletronico.png).<br />

Ele começa pelo no sensor de umidade do solo que ficará submerso em um vaso de planta, isso faz com que ele fique captando informações dos valores da umidade do solo e retornando para o Arduino as informações equivalentes. <br />
Este número é interpretado da seguinte maneira:<br />
* Quanto mais próximo de 0, mais úmido o solo está.<br />
* Quanto mais próximo de 700, mais seco o solo está.<br />

O sensor de luminosidade LDR faz a medição de luz no ambiente para saber se a luminosidade está de acordo ou não. <br />
Considerar: <br />
* Quanto mais próximo de 0, mais escuro. <br />
* Quanto mais longe de 0, mais claro.<br />

O sensor de temperatura DS18B20 fará a leitura de temperatura do ambiente em graus celsius. <br />

Uma bateria de 9 volts, alimenta o módulo ponte-h que faz o controle do motor descer, o motor é ativado assim que a temperatura do solo for medida maior que 700, simulando a irrigação do solo.<br />

Para mais informações assista o video no [YouTube]


# Hardware
* Arduino Uno R3 <br />
* Sensor de umidade do solo higrômetro <br />
* Sensor de temperatura DS18B20 <br />
* Sensor de luminosidade LDR <br />
* Protoboard <br />
* Mortor DC 3-6V <br />
* Bateria 9V <br />
* 2 Resistor <br />
* 11 Jumpers Macho-Macho <br />
* 6 Jumpers Macho-Fêmea <br />
* Ponte-H L298N

# Software
O código no qual o nosso projeto foi desenvolvido é o [Estufa](https://github.com/gutoraph/Sistema-Automatizado-de-Estufa/blob/71020fbaea6329f9075c9f95d6ce611e7637a39e/Estufa.ino)
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
![img](https://github.com/gutoraph/Sistema-Automatizado-de-Estufa/blob/dd084d286a94f77bb9c0c6e56001299d2a3f0fd2/3.jpg)<br /><br />
Função javascript que recebe o valor da umidade através do MQTT e verifica se a umidade é maior que 700.<br />
![img](https://github.com/gutoraph/Sistema-Automatizado-de-Estufa/blob/a0396725973eeaeb9dfab5ff2bb22202f334b037/4.jpg)<br /><br />
Função para mostrar as notificações no painel de debug<br />
![img](https://github.com/gutoraph/Sistema-Automatizado-de-Estufa/blob/eab2f75748a2954c59f8f365414a961a30a1c6dd/5.jpg)<br />

# Fluxograma e Diagrama eletrônico
[Fluxograma](https://github.com/gutoraph/Sistema-Automatizado-de-Estufa/blob/eab2f75748a2954c59f8f365414a961a30a1c6dd/fluxograma.png)<br />
[Circuito eltrônico](https://github.com/gutoraph/Sistema-Automatizado-de-Estufa/blob/eab2f75748a2954c59f8f365414a961a30a1c6dd/circuito%20eletronico.png)
