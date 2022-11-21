int led1 = 2; // usamos un pin de salida al LED
int led2 = 3; // usamos un pin de salida al LED

int estado = 0; // Variable lectrura dato serial

void setup()
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);  //Declara pin de Salida
  digitalWrite(led1, LOW); //Normalmente Apagado
  pinMode(led2, OUTPUT);
  digitalWrite(led2, LOW); //Normalmente Apagado
}

void loop()
{
  if( Serial.available()>0)
  {
    estado = Serial.read();
  }
  switch( estado)
  {
    case 'a':
    digitalWrite(led1, HIGH);
    break;
    case 'b':
    digitalWrite(led1, LOW);
    break;
    
    case 'c':
    digitalWrite(led2, HIGH);
    break;
    case 'd':
    digitalWrite(led2, LOW);
    break;
  }
}
