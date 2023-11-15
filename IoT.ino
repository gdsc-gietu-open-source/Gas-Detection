const int MQ9 = A2;
const int MQ3 = A0;
const int Buzzer = 8;
const int LED = 9;
const int BLED = 4;
int value;
int value1;
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(MQ9, INPUT);
  pinMode(MQ3, INPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(BLED, OUTPUT);
  digitalWrite(Buzzer, LOW);
  digitalWrite(LED, LOW);
  //   digitalWrite(BLED,HIGH);
}

void loop()
{
  // put your main code here, to run repeatedly:
  value1 = analogRead(MQ9);
  value = analogRead(MQ3);
  if (value1 > 200)
  {
    float voltage = value1 / 1024.0 * 5.0;                 // Convert the analog value to voltage
    float COConcentration = (voltage - 0.1) / 0.8 * 10000; // Calculate the CO concentration (ppm)
    Serial.println("CO Concentration: ");                  // Print the CO concentration to the serial monitor
    Serial.print(COConcentration);
    Serial.println(" ppm");
    if (COConcentration > 17000)
    {
      Serial.println("CO is HIgh Danger!!!");
      digitalWrite(Buzzer, HIGH);
      digitalWrite(LED, HIGH);
      // digitalWrite(BLED,LOW);
      delay(500);
      digitalWrite(Buzzer, LOW);
      digitalWrite(LED, LOW);
      // digitalWrite(BLED,LOW);
      delay(100);
      digitalWrite(Buzzer, HIGH);
      digitalWrite(LED, HIGH);
      digitalWrite(BLED, LOW);
      delay(500);
      digitalWrite(Buzzer, LOW);
      digitalWrite(LED, LOW);
      digitalWrite(BLED, LOW);
      delay(100);
      digitalWrite(Buzzer, HIGH);
      digitalWrite(LED, HIGH);
      digitalWrite(BLED, LOW);
      delay(500);
      digitalWrite(Buzzer, LOW);
      digitalWrite(LED, LOW);
      digitalWrite(BLED, LOW);
      delay(100);
      digitalWrite(Buzzer, HIGH);
      digitalWrite(LED, HIGH);
      digitalWrite(BLED, LOW);
      delay(500);
      digitalWrite(Buzzer, LOW);
      digitalWrite(LED, LOW);
      digitalWrite(BLED, LOW);
      delay(100);
    }
  }
  else
  {
    Serial.println("CO Concentration is good No problem");
  }
  if (value > 400)
  {

    Serial.println("Alcohol level high Danger!!");
    digitalWrite(Buzzer, HIGH);
    digitalWrite(LED, HIGH);
    // digitalWrite(BLED,LOW);
    delay(500);
    digitalWrite(Buzzer, LOW);
    digitalWrite(LED, LOW);
    // digitalWrite(BLED,LOW);
    delay(100);
    digitalWrite(Buzzer, HIGH);
    digitalWrite(LED, HIGH);
    digitalWrite(BLED, LOW);
    delay(500);
    digitalWrite(Buzzer, LOW);
    digitalWrite(LED, LOW);
    digitalWrite(BLED, LOW);
    delay(100);
    digitalWrite(Buzzer, HIGH);
    digitalWrite(LED, HIGH);
    digitalWrite(BLED, LOW);
    delay(500);
    digitalWrite(Buzzer, LOW);
    digitalWrite(LED, LOW);
    digitalWrite(BLED, LOW);
    delay(100);
    digitalWrite(Buzzer, HIGH);
    digitalWrite(LED, HIGH);
    digitalWrite(BLED, LOW);
    delay(500);
    digitalWrite(Buzzer, LOW);
    digitalWrite(LED, LOW);
    digitalWrite(BLED, LOW);
    delay(100);
  }
  else
  {
    Serial.println("alcohol No problem");
    digitalWrite(Buzzer, LOW);
    digitalWrite(LED, LOW);
    digitalWrite(BLED, HIGH);
  }
  delay(1000);
}