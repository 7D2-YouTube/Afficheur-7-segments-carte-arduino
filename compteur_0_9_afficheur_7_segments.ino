int ledPinA = 9;
int ledPinB = 8;
int ledPinC = 7;
int ledPinD = 6;
int ledPinE = 5;
int ledPinF = 4;
int ledPinG = 3;
int ledPinDP = 2;

void afficherPoint()
{
  digitalWrite(ledPinA, LOW);
  digitalWrite(ledPinB, LOW);
  digitalWrite(ledPinC, LOW);
  digitalWrite(ledPinD, LOW);
  digitalWrite(ledPinE, LOW);
  digitalWrite(ledPinF, LOW);
  digitalWrite(ledPinG, LOW);
  digitalWrite(ledPinDP, HIGH);
}

void afficher0()
{
  digitalWrite(ledPinA, HIGH);
  digitalWrite(ledPinB, HIGH);
  digitalWrite(ledPinC, HIGH);
  digitalWrite(ledPinD, HIGH);
  digitalWrite(ledPinE, HIGH);
  digitalWrite(ledPinF, HIGH);
  digitalWrite(ledPinG, LOW);
  digitalWrite(ledPinDP, LOW);
}

void afficher1()
{
  digitalWrite(ledPinA, LOW);
  digitalWrite(ledPinB, HIGH);
  digitalWrite(ledPinC, HIGH);
  digitalWrite(ledPinD, LOW);
  digitalWrite(ledPinE, LOW);
  digitalWrite(ledPinF, LOW);
  digitalWrite(ledPinG, LOW);
  digitalWrite(ledPinDP, LOW);
}

void afficher2()
{
  digitalWrite(ledPinA, HIGH);
  digitalWrite(ledPinB, HIGH);
  digitalWrite(ledPinC, LOW);
  digitalWrite(ledPinD, HIGH);
  digitalWrite(ledPinE, HIGH);
  digitalWrite(ledPinF, LOW);
  digitalWrite(ledPinG, HIGH);
  digitalWrite(ledPinDP, LOW);
}

void afficher3()
{
  digitalWrite(ledPinA, HIGH);
  digitalWrite(ledPinB, HIGH);
  digitalWrite(ledPinC, HIGH);
  digitalWrite(ledPinD, HIGH);
  digitalWrite(ledPinE, LOW);
  digitalWrite(ledPinF, LOW);
  digitalWrite(ledPinG, HIGH);
  digitalWrite(ledPinDP, LOW);
}

void afficher4()
{
  digitalWrite(ledPinA, LOW);
  digitalWrite(ledPinB, HIGH);
  digitalWrite(ledPinC, HIGH);
  digitalWrite(ledPinD, LOW);
  digitalWrite(ledPinE, LOW);
  digitalWrite(ledPinF, HIGH);
  digitalWrite(ledPinG, HIGH);
  digitalWrite(ledPinDP, LOW);
}

void afficher5()
{
  digitalWrite(ledPinA, HIGH);
  digitalWrite(ledPinB, LOW);
  digitalWrite(ledPinC, HIGH);
  digitalWrite(ledPinD, HIGH);
  digitalWrite(ledPinE, LOW);
  digitalWrite(ledPinF, HIGH);
  digitalWrite(ledPinG, HIGH);
  digitalWrite(ledPinDP, LOW);
}

void afficher6()
{
  digitalWrite(ledPinA, HIGH);
  digitalWrite(ledPinB, LOW);
  digitalWrite(ledPinC, HIGH);
  digitalWrite(ledPinD, HIGH);
  digitalWrite(ledPinE, HIGH);
  digitalWrite(ledPinF, HIGH);
  digitalWrite(ledPinG, HIGH);
  digitalWrite(ledPinDP, LOW);
}

void afficher7()
{
  digitalWrite(ledPinA, HIGH);
  digitalWrite(ledPinB, HIGH);
  digitalWrite(ledPinC, HIGH);
  digitalWrite(ledPinD, LOW);
  digitalWrite(ledPinE, LOW);
  digitalWrite(ledPinF, LOW);
  digitalWrite(ledPinG, LOW);
  digitalWrite(ledPinDP, LOW);
}

void afficher8()
{
  digitalWrite(ledPinA, HIGH);
  digitalWrite(ledPinB, HIGH);
  digitalWrite(ledPinC, HIGH);
  digitalWrite(ledPinD, HIGH);
  digitalWrite(ledPinE, HIGH);
  digitalWrite(ledPinF, HIGH);
  digitalWrite(ledPinG, HIGH);
  digitalWrite(ledPinDP, LOW);
}

void afficher9()
{
  digitalWrite(ledPinA, HIGH);
  digitalWrite(ledPinB, HIGH);
  digitalWrite(ledPinC, HIGH);
  digitalWrite(ledPinD, HIGH);
  digitalWrite(ledPinE, LOW);
  digitalWrite(ledPinF, HIGH);
  digitalWrite(ledPinG, HIGH);
  digitalWrite(ledPinDP, LOW);
}


void setup() {
pinMode(ledPinA, OUTPUT);
pinMode(ledPinB, OUTPUT);
pinMode(ledPinC, OUTPUT);
pinMode(ledPinD, OUTPUT);
pinMode(ledPinE, OUTPUT);
pinMode(ledPinF, OUTPUT);
pinMode(ledPinG, OUTPUT);
pinMode(ledPinDP, OUTPUT);

}

void loop() {
afficherPoint();
delay(1000);  
afficher0();
delay(1000);
afficher1();
delay(1000);
afficher2();
delay(1000);
afficher3();
delay(1000);
afficher4();
delay(1000);
afficher5();
delay(1000);
afficher6();
delay(1000);
afficher7();
delay(1000);
afficher8();
delay(1000);
afficher9();
delay(1000);
}
