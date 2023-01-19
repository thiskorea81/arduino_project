int red=11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(red, OUTPUT);
}
int touchN=0;

void loop() {
  //** put your main code here, to run repeatedly:
  //** read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  //** Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  // float voltage = sensorValue * (5.0 / 1023.0);
  //** print out the value you read:
  // Serial.println(voltage);
  //** Convert to the digital value(0 - 255)
  int digitalValue = (int)sensorValue * (255.0 / 1023.0);
  Serial.println(digitalValue);
  if (digitalValue>250){
    Serial.println("dark");
    digitalWrite(red, HIGH);
    touchN++;
  }
  else{
    Serial.println("bright");
    digitalWrite(red, LOW);
  }
  // analogWrite(red, digitalValue);
  Serial.println(touchN);
  delay(1000);  
}
