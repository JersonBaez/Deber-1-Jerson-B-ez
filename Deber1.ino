/*
 * Deber 1
 * Jerson Baez
 * Realizar un programa que accione mediante 4 switchs a un juego de luces diferente. Es decir.
 * Juego #1
 * Se usan 6 leds, de los cuales se encienden los pares por 10 ocasiones
 * Juego #2
 * Se usan 6 leds, de los cuales se encienden los impartes por 10 ocasiones
 * Juego #3
 * Se encienden secuencialmente cada uno ellos (flexible a su criterio)
 * Juego #4
 * Su propio diseño de juego. 
 */
 const int led1=8;
 const int led2=9;
 const int led3=10;
 const int led4=11;
 const int led5=12;
 const int led6=13;
const int sw1=4;
const int sw2=5;
const int sw3=6;
const int sw4=7;

int i;
int j;
int k;
 
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  pinMode(sw3,INPUT);
  pinMode(sw4,INPUT); 

}

void loop() {
    if(digitalRead(sw1)==HIGH && digitalRead(sw2)==LOW && digitalRead(sw3)==LOW && digitalRead(sw4)==LOW){
      for(i=0;i<10;i++){
      digitalWrite(led2,HIGH);
      digitalWrite(led4,HIGH);;
      digitalWrite(led6,HIGH);
      delay(500);
      digitalWrite(led2,LOW);
      digitalWrite(led4,LOW);;
      digitalWrite(led6,LOW);
      delay(500);
      }
  }
  else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }
    if(digitalRead(sw1)==LOW && digitalRead(sw2)==HIGH && digitalRead(sw3)==LOW && digitalRead(sw4)==LOW){
      for(j=0;j<10;j++){
      digitalWrite(led1,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led5,HIGH);
      delay(500);
      digitalWrite(led1,LOW);
      digitalWrite(led3,LOW);;
      digitalWrite(led5,LOW);
      delay(500);
      }
  }
  else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);  
  }
  if(digitalRead(sw1)==LOW && digitalRead(sw2)==LOW && digitalRead(sw3)==HIGH && digitalRead(sw4)==LOW){
      digitalWrite(led1,HIGH);
      delay(500);
      digitalWrite(led1,LOW);
      delay(500);
      digitalWrite(led2,HIGH);
      delay(500);
      digitalWrite(led2,LOW);
      delay(500);
      digitalWrite(led3,HIGH);
      delay(500);
      digitalWrite(led3,LOW);
      delay(500);
      digitalWrite(led4,HIGH);
      delay(500);
      digitalWrite(led4,LOW);
      delay(500);
      digitalWrite(led5,HIGH);
      delay(500);
      digitalWrite(led5,LOW);
      delay(500);
      digitalWrite(led6,HIGH);
      delay(500);
      digitalWrite(led6,LOW);
      delay(500); 
  }
    else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);  
  }

  if(digitalRead(sw1)==LOW && digitalRead(sw2)==LOW && digitalRead(sw3)==LOW && digitalRead(sw4)==HIGH){
    for(i=0;i<10;i++){
      digitalWrite(led2,HIGH);
      digitalWrite(led4,HIGH);;
      digitalWrite(led6,HIGH);
      delay(500);
      digitalWrite(led2,LOW);
      digitalWrite(led4,LOW);;
      digitalWrite(led6,LOW);
      delay(500);
      digitalWrite(led1,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led5,HIGH);
      delay(500);
      digitalWrite(led1,LOW);
      digitalWrite(led3,LOW);;
      digitalWrite(led5,LOW);
      delay(500);
      }
  }
  else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);  
  }
}
