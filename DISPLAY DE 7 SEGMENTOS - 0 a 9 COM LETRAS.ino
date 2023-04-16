//define os pinos de cada seguimento do display

const int a=2;
const int b=3;
const int c=4;
const int d=5;
const int e=6;
const int f=7;
const int g=8;

void setup (){
  // define os pinos no seguimento como saida
  pinMode (a, OUTPUT);
  pinMode (b, OUTPUT);
  pinMode (c, OUTPUT);
  pinMode (d, OUTPUT);
  pinMode (e, OUTPUT);
  pinMode (f, OUTPUT);
  pinMode (g, OUTPUT);
}

void loop () {
  //NUMERO1
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
delay(1000);
  
  digitalWrite(b, LOW);
  digitalWrite(c,LOW);

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
  
  //NUMERO7
  digitalWrite (a,HIGH);
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (b,LOW);
  digitalWrite (c,LOW);
  
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
  
  //NUMERO0
  digitalWrite (a,HIGH);
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (f,HIGH);
  digitalWrite (e,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (b,LOW);
  digitalWrite (c,LOW);
  digitalWrite (d,LOW);
  digitalWrite (f,LOW);
  digitalWrite (e,LOW);
  
  //letra A
  digitalWrite (a,HIGH);
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (g,HIGH);
  digitalWrite (f,HIGH);
  digitalWrite (e,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (b,LOW);
  digitalWrite (c,LOW);
  digitalWrite (g,LOW);
  digitalWrite (f,LOW);
  digitalWrite (e,LOW);
  
  //letra b
  digitalWrite (c,HIGH);
  digitalWrite (g,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (f,HIGH);
  digitalWrite (e,HIGH);
  delay(1000);
  
  digitalWrite (c,LOW);
  digitalWrite (g,LOW);
  digitalWrite (d,LOW);
  digitalWrite (f,LOW);
  digitalWrite (e,LOW);
  
  //letra C
  digitalWrite (a,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (e,HIGH);
  digitalWrite (f,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (d,LOW);
  digitalWrite (e,LOW);
  digitalWrite (f,LOW);
  
  //letra D
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (e,HIGH);
  digitalWrite (g,HIGH);
  delay(1000);
  
  digitalWrite (b,LOW);
  digitalWrite (c,LOW);
  digitalWrite (d,LOW);
  digitalWrite (e,LOW);
  digitalWrite (g,LOW);
  
  //letra E
  digitalWrite (a,HIGH);
  digitalWrite (d,HIGH);
  digitalWrite (e,HIGH);
  digitalWrite (f,HIGH);
  digitalWrite (g,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (d,LOW);
  digitalWrite (e,LOW);
  digitalWrite (f,LOW);
  digitalWrite (g,LOW);
  
  //letra F
  digitalWrite (a,HIGH);
  digitalWrite (e,HIGH);
  digitalWrite (f,HIGH);
  digitalWrite (g,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (e,LOW);
  digitalWrite (f,LOW);
  digitalWrite (g,LOW);
  
  //letra H
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (e,HIGH);
  digitalWrite (f,HIGH);
  digitalWrite (g,HIGH);
  delay(1000);
  
  digitalWrite (b,LOW);
  digitalWrite (c,LOW);
  digitalWrite (e,LOW);
  digitalWrite (f,LOW);
  digitalWrite (g,LOW);
  
  //letra I
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
delay(1000);
  
  digitalWrite(b, LOW);
  digitalWrite(c,LOW);
  
  //letra J
  digitalWrite (b,HIGH);
  digitalWrite (c,HIGH);
  digitalWrite (d,HIGH);
  delay(1000);
  
  digitalWrite (b,LOW);
  digitalWrite (c,LOW);
  digitalWrite (d,LOW);
  
  //letra L
  digitalWrite (e,HIGH);
  digitalWrite (f,HIGH);
  digitalWrite (d,HIGH);
  delay(1000);
  
  digitalWrite (e,LOW);
  digitalWrite (f,LOW);
  digitalWrite (d,LOW);
  
  //letra n
  digitalWrite (c,HIGH);
  digitalWrite (e,HIGH);
  digitalWrite (g,HIGH);
  delay(1000);
  
  digitalWrite (c,LOW);
  digitalWrite (e,LOW);
  digitalWrite (g,LOW);
  
  //letra O
  digitalWrite (c,HIGH);
  digitalWrite (e,HIGH);
  digitalWrite (g,HIGH);
  digitalWrite (d,HIGH);
  delay(1000);
  
  digitalWrite (c,LOW);
  digitalWrite (e,LOW);
  digitalWrite (g,LOW);
  digitalWrite (d,LOW);
  
  //letra P
  digitalWrite (a,HIGH);
  digitalWrite (b,HIGH);
  digitalWrite (e,HIGH);
  digitalWrite (f,HIGH);
  digitalWrite (g,HIGH);
  delay(1000);
  
  digitalWrite (a,LOW);
  digitalWrite (b,LOW);
  digitalWrite (e,LOW);
  digitalWrite (f,LOW);
  digitalWrite (g,LOW);
  
  //letra S
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
}