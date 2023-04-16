// C++ code
//

#define ledPin1 11
#define ledPin2 10
#define ledPin3 9

const int a=2;
const int b=3;
const int c=4;
const int d=5;
const int e=6;
const int f=7;
const int g=8;

void setup()
{
  pinMode (a, OUTPUT);
  pinMode (b, OUTPUT);
  pinMode (c, OUTPUT);
  pinMode (d, OUTPUT);
  pinMode (e, OUTPUT);
  pinMode (f, OUTPUT);
  pinMode (g, OUTPUT);
  pinMode (ledPin1, OUTPUT);
  pinMode (ledPin2, OUTPUT);
  pinMode (ledPin3, OUTPUT);
}

void loop()
{
  digitalWrite (ledPin1, HIGH);
  
  //NUMERO9
  digitalWrite (a,HIGH);
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (f,HIGH);
  digitalWrite (g,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (b,LOW);
  digitalWrite (c,LOW);
  digitalWrite (d,LOW);
  digitalWrite (f,LOW);
  digitalWrite (g,LOW);
  
  //NUMERO8
  digitalWrite (a,HIGH);
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (e,HIGH);
  digitalWrite (f,HIGH);
  digitalWrite (g,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (b,LOW);
  digitalWrite (c,LOW);
  digitalWrite (d,LOW);
  digitalWrite (e,LOW);
  digitalWrite (f,LOW);
  digitalWrite (g,LOW);
  
    //NUMERO7
  digitalWrite (a,HIGH);
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (b,LOW);
  digitalWrite (c,LOW);
  
   //NUMERO6
  digitalWrite (a,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (e,HIGH);
  digitalWrite (f,HIGH);
  digitalWrite (g,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (c,LOW);
  digitalWrite (d,LOW);
  digitalWrite (e,LOW);
  digitalWrite (f,LOW);
  digitalWrite (g,LOW);
  
    //NUMERO5
  digitalWrite (a,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (f,HIGH);
  digitalWrite (g,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (c,LOW);
  digitalWrite (d,LOW);
  digitalWrite (f,LOW);
  digitalWrite (g,LOW);
  
    //NUMERO4
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (g,HIGH);
  digitalWrite (f,HIGH);
  delay(1000);
  
  digitalWrite (b,LOW);
  digitalWrite (c,LOW);
  digitalWrite (g,LOW);
  digitalWrite (f,LOW);
  
    //NUMERO3
  digitalWrite (a,HIGH);
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (g,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (b,LOW);
  digitalWrite (c,LOW);
  digitalWrite (d,LOW);
  digitalWrite (g,LOW);
  
    //NUMERO2  
  digitalWrite (a,HIGH);
  digitalWrite (b,HIGH);
  digitalWrite (g,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (e,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (b,LOW);
  digitalWrite (g,LOW);
  digitalWrite (d,LOW);
  digitalWrite (e,LOW);
  
    //NUMERO1
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
	delay(1000);
  
  digitalWrite(b, LOW);
  digitalWrite(c,LOW);
  
  digitalWrite(ledPin1, LOW);
  delay(1000);
  
  
  //Led amarelo
  digitalWrite(ledPin2, HIGH);
  delay(1000);
  digitalWrite (ledPin2, LOW);
  
  //Led verde
  digitalWrite (ledPin3, HIGH);
   
  //NUMERO9
  digitalWrite (a,HIGH);
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (f,HIGH);
  digitalWrite (g,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (b,LOW);
  digitalWrite (c,LOW);
  digitalWrite (d,LOW);
  digitalWrite (f,LOW);
  digitalWrite (g,LOW);
  
  //NUMERO8
  digitalWrite (a,HIGH);
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (e,HIGH);
  digitalWrite (f,HIGH);
  digitalWrite (g,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (b,LOW);
  digitalWrite (c,LOW);
  digitalWrite (d,LOW);
  digitalWrite (e,LOW);
  digitalWrite (f,LOW);
  digitalWrite (g,LOW);
  
    //NUMERO7
  digitalWrite (a,HIGH);
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (b,LOW);
  digitalWrite (c,LOW);
  
   //NUMERO6
  digitalWrite (a,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (e,HIGH);
  digitalWrite (f,HIGH);
  digitalWrite (g,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (c,LOW);
  digitalWrite (d,LOW);
  digitalWrite (e,LOW);
  digitalWrite (f,LOW);
  digitalWrite (g,LOW);
  
    //NUMERO5
  digitalWrite (a,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (f,HIGH);
  digitalWrite (g,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (c,LOW);
  digitalWrite (d,LOW);
  digitalWrite (f,LOW);
  digitalWrite (g,LOW);
  
    //NUMERO4
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (g,HIGH);
  digitalWrite (f,HIGH);
  delay(1000);
  
  digitalWrite (b,LOW);
  digitalWrite (c,LOW);
  digitalWrite (g,LOW);
  digitalWrite (f,LOW);
  
    //NUMERO3
  digitalWrite (a,HIGH);
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (g,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (b,LOW);
  digitalWrite (c,LOW);
  digitalWrite (d,LOW);
  digitalWrite (g,LOW);
  
    //NUMERO2  
  digitalWrite (a,HIGH);
  digitalWrite (b,HIGH);
  digitalWrite (g,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (e,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (b,LOW);
  digitalWrite (g,LOW);
  digitalWrite (d,LOW);
  digitalWrite (e,LOW);
  
    //NUMERO1
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
	delay(1000);
  
  digitalWrite(b, LOW);
  digitalWrite(c,LOW);
  
  digitalWrite(ledPin3, LOW);
  delay(1000);
}