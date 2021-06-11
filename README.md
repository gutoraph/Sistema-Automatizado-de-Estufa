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
