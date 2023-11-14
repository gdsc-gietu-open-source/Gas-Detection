const int MQ3=A0;
const int Buzzer=8;
const int LED=9;
const int BLED=4;
int value;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(MQ3,INPUT);
  pinMode(Buzzer,OUTPUT);
  pinMode(LED,OUTPUT);
  pinMode(BLED,OUTPUT);
  digitalWrite(Buzzer,LOW);
  digitalWrite(LED,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  value=analogRead(MQ3);
  if(value>400)
  {
    
    Serial.println("Alcohol level high Danger!!");
    digitalWrite(Buzzer,HIGH);
    digitalWrite(LED,HIGH);
   // digitalWrite(BLED,LOW);
    delay(500);
    digitalWrite(Buzzer,LOW);
    digitalWrite(LED,LOW);
   // digitalWrite(BLED,LOW);
    delay(100);
        digitalWrite(Buzzer,HIGH);
    digitalWrite(LED,HIGH);
    digitalWrite(BLED,LOW);
    delay(500);
    digitalWrite(Buzzer,LOW);
    digitalWrite(LED,LOW);
    digitalWrite(BLED,LOW);
    delay(100);
        digitalWrite(Buzzer,HIGH);
    digitalWrite(LED,HIGH);
    digitalWrite(BLED,LOW);
    delay(500);
    digitalWrite(Buzzer,LOW);
    digitalWrite(LED,LOW);
  digitalWrite(BLED,LOW);
    delay(100);    digitalWrite(Buzzer,HIGH);
    digitalWrite(LED,HIGH);
   digitalWrite(BLED,LOW);
    delay(500);
    digitalWrite(Buzzer,LOW);
    digitalWrite(LED,LOW);
  digitalWrite(BLED,LOW);
    delay(100);
  }
  else
  {
    Serial.println("alcohol No problem");
    digitalWrite(Buzzer,LOW);
    digitalWrite(LED,LOW);
    digitalWrite(BLED,HIGH);
  }
  delay(1000);
}

 

