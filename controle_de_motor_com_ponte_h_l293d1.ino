// C++ code
//
/*
Este projeto demonstra a atuação de dois motores
utilizando a ponte H L293D.
*/
const int motor1_left1 = 12;
const int motor1_left2 = 11;
const int motor2_right1 = 10;
const int motor2_right2 = 9;

void setup()
{
  pinMode(motor1_left1, OUTPUT);
  pinMode(motor1_left2, OUTPUT);
  pinMode(motor2_right1, OUTPUT);
  pinMode(motor2_right2, OUTPUT);
}
void loop()
{
  frente();
  delay(1000);
  tras();
  delay(1000);
}
void frente(){//Frente
  digitalWrite(motor1_left1, HIGH);
  digitalWrite(motor1_left2, LOW);
  digitalWrite(motor2_right1, HIGH);
  digitalWrite(motor2_right2, LOW);
}
void tras(){//Tras
  digitalWrite(motor1_left2, HIGH);
  digitalWrite(motor1_left1, LOW);
  digitalWrite(motor2_right2, HIGH);
  digitalWrite(motor2_right1, LOW);
}