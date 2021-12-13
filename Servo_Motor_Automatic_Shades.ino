int one=2;
int two=3;
int three=4;
int four=8;
int five=9;
int six=10;
int seven=11;

void setup() {
  pinMode(one,OUTPUT);
  pinMode(two,OUTPUT);
  pinMode(three,OUTPUT);
  pinMode(four,OUTPUT);
  pinMode(five,OUTPUT);
  pinMode(six,OUTPUT);
  pinMode(seven,OUTPUT);

  delay(2000);
}

void loop() {
  digitalWrite(seven,HIGH);
  delay(2000);
  digitalWrite(seven,LOW);
  delay(2000);
  digitalWrite(three,HIGH);
  digitalWrite(four,HIGH);
  delay(2000);
  digitalWrite(three,LOW);
  digitalWrite(four,LOW);
  delay(2000);
  digitalWrite(three,HIGH);
  digitalWrite(four,HIGH);
  digitalWrite(seven,HIGH);
  delay(2000);
  digitalWrite(three,LOW);
  digitalWrite(four,LOW);
  digitalWrite(seven,LOW);
  delay(2000);
  digitalWrite(three,HIGH);
  digitalWrite(four,HIGH);
  digitalWrite(one,HIGH);
  digitalWrite(six,HIGH);
  delay(2000);
  digitalWrite(three,LOW);
  digitalWrite(four,LOW);
  digitalWrite(one,LOW);
  digitalWrite(six,LOW);
  delay(2000);
  digitalWrite(three,HIGH);
  digitalWrite(four,HIGH);
  digitalWrite(one,HIGH);
  digitalWrite(six,HIGH);
  digitalWrite(seven,HIGH);
  delay(2000);
   digitalWrite(three,LOW);
  digitalWrite(four,LOW);
  digitalWrite(one,LOW);
  digitalWrite(six,LOW);
  digitalWrite(seven,LOW);
  delay(2000);
   digitalWrite(three,HIGH);
  digitalWrite(four,HIGH);
  digitalWrite(one,HIGH);
  digitalWrite(six,HIGH);
  digitalWrite(five,HIGH);
  digitalWrite(two,HIGH);
  delay(2000);




}
