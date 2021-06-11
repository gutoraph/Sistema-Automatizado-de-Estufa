//Motor
#define pinMot1A 3
#define pinMot1B 5


//Sensor de temperatura
#include <OneWire.h>
#include <DallasTemperature.h>
OneWire onewire(4);
DallasTemperature sensor(&onewire);
float temperatura;

//LDR
#define ldr A0
int vldr=0; //valor de leitura na porta analógica

//Sensor de úmidade do solo
#define pinSensorA A5

void setup() {
  pinMode(ldr,INPUT); 
  pinMode(pinMot1A,OUTPUT);
  pinMode(pinMot1B,OUTPUT);
  Serial.begin(9600);
  sensor.begin();

}

void loop() {
  //TEMPERATURA
  sensor.requestTemperatures();
  temperatura = sensor.getTempCByIndex(0);
  Serial.print("Temperatura: ");
  Serial.println(temperatura);

  //LDR
  vldr=analogRead(ldr);
  Serial.print("Luminosidade: ");
  Serial.println(vldr);

  //Sensor de umidade do solo
  Serial.print("Umidade do solo: ");
  Serial.print(analogRead(pinSensorA)); 
  Serial.print("  ");

  Serial.print("Estado: ");
  if (analogRead(pinSensorA) > 700) {
     Serial.println("Ligando irrigação");
     digitalWrite(pinMot1A,HIGH);
     delay(2000);
     digitalWrite(pinMot1A,LOW);
  } else {
    Serial.println("Solo úmido.");
    digitalWrite(pinMot1A,LOW);
  }
  delay(10000);
}
