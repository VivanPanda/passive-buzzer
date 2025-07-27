int buzzerPin = 7;
int potPin = A7;
int readVal;
int delayTime;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(potPin);
  Serial.println(readVal);
  delay(500);
}
