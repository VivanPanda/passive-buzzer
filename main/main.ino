int buzzerPin = 7;
int potPin = A7;
int readVal;
float delayTime;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(potPin);
  delayTime = ((9940./1023.) * readVal) + 60;
  Serial.println(delayTime);
  digitalWrite(buzzerPin, HIGH);
  delayMicroseconds(delayTime);
  digitalWrite(buzzerPin, LOW);
  delayMicroseconds(delayTime);
}
