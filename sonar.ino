#define ECHOPIN 10
#define TRIGPIN 9
void setup() {
  Serial.begin(9600);
  pinMode(ECHOPIN, INPUT);
  pinMode(TRIGPIN, OUTPUT);
} m

void loop() {
  digitalWrite(TRIGPIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGPIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGPIN, LOW);

  //Distance Calculation
  float distance = pulseIn(ECHOPIN, HIGH);
  distance = distance+10;
  Serial.print(distance);
  Serial.println(" cm");
  
}
