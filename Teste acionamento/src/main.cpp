#include <Arduino.h>
#define Botao 34
#define Squib  26
#define buzzer 32

void setup() {
  pinMode(Botao, INPUT_PULLUP);
  pinMode(Squib, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(115200);

}

void loop() {
if (!digitalRead(Botao)) 
{
  digitalWrite(Squib, HIGH); 
  digitalWrite(buzzer, HIGH); // Estado Buzzer
  Serial.println("Botao Pressionado");
}
else {
  digitalWrite(buzzer, LOW);
  // Estado Buzzer
}delay(100);
}


