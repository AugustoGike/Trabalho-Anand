#include <Servo.h>

//Botão--------------------------------------------------------------------
#define BVermelho 6
#define BAzul 5
#define BVerde 4
#define BBranco 3
#define BPreto 2

//Servo---------------------------------------------------------------------
Servo rampa;
Servo tampa;

//Led-----------------------------------------------------------------------
#define vermelho 11
#define verde 12

void setup() {
  tampa.attach(9);
  rampa.attach(8);

  pinMode(BVermelho, INPUT);
  pinMode(BAzul, INPUT);
  pinMode(BVerde, INPUT);
  pinMode(BBranco, INPUT);
  pinMode(BPreto, INPUT);

  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
 
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, HIGH);
  
}

void loop() {

  if (digitalRead(BVermelho) == HIGH){
    digitalWrite(vermelho, HIGH);
    digitalWrite(verde, LOW);
    rampa.write(0);
    delay(500);
    tampa.write(180);
    delay(2000);
    tampa.write(0);
    digitalWrite(vermelho, LOW);
    digitalWrite(verde, HIGH);
    
  }

  if (digitalRead(BAzul) == HIGH){
    digitalWrite(vermelho, HIGH);
    digitalWrite(verde, LOW);
    rampa.write(45);
    delay(500);
    tampa.write(180);
    delay(2000);
    tampa.write(0);
    digitalWrite(vermelho, LOW);
    digitalWrite(verde, HIGH);
  }
  
  if (digitalRead(BVerde) == HIGH){
    digitalWrite(vermelho, HIGH);
    digitalWrite(verde, LOW);
    rampa.write(90);
    delay(500);
    tampa.write(180);
    delay(2000);
    tampa.write(0);
    digitalWrite(vermelho, LOW);
    digitalWrite(verde, HIGH);
  }
  
  if (digitalRead(BBranco) == HIGH){
    digitalWrite(vermelho, HIGH);
    digitalWrite(verde, LOW);
    rampa.write(135);
    delay(500);
    tampa.write(180);
    delay(2000);
    tampa.write(0);
    digitalWrite(vermelho, LOW);
    digitalWrite(verde, HIGH);
  }
  
  if (digitalRead(BPreto) == HIGH){
    digitalWrite(vermelho, HIGH);
    digitalWrite(verde, LOW);
    rampa.write(180);
    delay(500);
    tampa.write(180);
    delay(2000);
    tampa.write(0);
    digitalWrite(vermelho, LOW);
    digitalWrite(verde, HIGH);
    delay(500);
  }
  
}
