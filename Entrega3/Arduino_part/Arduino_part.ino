#include <SoftwareSerial.h>


int light = 7; // usamos un pin de salida al LED o light
void setup() {
  pinMode(light, OUTPUT);
  digitalWrite(light, LOW); //Normalmente Apagado
  Serial.begin(9600);

}

void loop() {

  if (Serial.available() > 0) {

    String str = Serial.readStringUntil('#');

    if (str == "Light-on") {
      digitalWrite(light, HIGH);
      Serial.println("Light is on");
    }
    else if (str == "Light-off") {
      digitalWrite(light, LOW);
      Serial.println("Light is off");

    }
  }
}