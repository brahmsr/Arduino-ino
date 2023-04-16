#define ledPin1 13
#define ledPin2 12
#define ledPin3 11
#define ledPin4 10
#define ledPin5 9
#define ledPin6 8
#define ledPin7 7
#define ledPin8 6
#define ledPin9 5
#define ledPin10 4
#define ledPin11 3
#define ledPin12 2
#define ledPin13 1



void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin3, OUTPUT);
    pinMode(ledPin4, OUTPUT);
    pinMode(ledPin5, OUTPUT);
    pinMode(ledPin6, OUTPUT);
    pinMode(ledPin7, OUTPUT);
    pinMode(ledPin8, OUTPUT);
    pinMode(ledPin9, OUTPUT);
    pinMode(ledPin10, OUTPUT);
    pinMode(ledPin11, OUTPUT);
    pinMode(ledPin12, OUTPUT);
    pinMode(ledPin13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


  
  //segunda fileira
  
  digitalWrite(ledPin12, HIGH);
delay(1000);

  
  digitalWrite(ledPin11, HIGH);
delay(1000);

  
  digitalWrite(ledPin10, HIGH);
delay(1000);

  
  digitalWrite(ledPin9, HIGH);
delay(1000);

      
      digitalWrite(ledPin8, HIGH);
delay(1000);

      
      digitalWrite(ledPin7, HIGH);
delay(1000);
  
  digitalWrite (ledPin7, LOW);
  digitalWrite (ledPin8, LOW);
  digitalWrite (ledPin9, LOW);
  digitalWrite (ledPin10, LOW);
  digitalWrite (ledPin11, LOW);
  digitalWrite (ledPin12, LOW);
  

  
  // amarelo
  digitalWrite(ledPin13, HIGH);
  delay(1000);
  digitalWrite(ledPin13, LOW);
  delay(1000);
  

   
  //primeira fileira
  
      digitalWrite(ledPin6, HIGH);
delay(1000);

      
      digitalWrite(ledPin5, HIGH);
delay(1000);

      
      digitalWrite(ledPin4, HIGH);
delay(1000);

      
      digitalWrite(ledPin3, HIGH);
delay(1000);

  digitalWrite(ledPin2, HIGH);
delay(1000);
  
  digitalWrite(ledPin1, HIGH);
delay(1000);
  
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3,LOW);
  digitalWrite(ledPin4,LOW);
  digitalWrite(ledPin5,LOW);
  digitalWrite(ledPin6,LOW);
  
    // amarelo
  digitalWrite(ledPin13, HIGH);
  delay(1000);
  digitalWrite(ledPin13, LOW);
  delay(1000);

}