const int SENSOR_PIN = A0;
const int FAN_LED = 8;
const int HIGH_TEMP = 40;
const int LOW_TEMP = 25;

float readTemperature() {
  int reading = analogRead(SENSOR_PIN);
  float voltage = reading * 5.0 / 1024.0;
  return (voltage - 0.5) * 100.0;   // TMP36 formula
}

void setup() {
  Serial.begin(9600);
  pinMode(FAN_LED, OUTPUT);
  Serial.println("Temperature Monitoring System Started");
}

void loop() {
  float temp = readTemperature();

  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.print(" C -> ");

  if (temp > HIGH_TEMP) {
    Serial.println("Fan ON");
    digitalWrite(FAN_LED, HIGH);
  }
  else if (temp < LOW_TEMP) {
    Serial.println("Fan OFF");
    digitalWrite(FAN_LED, LOW);
  }
  else {
    Serial.println("Fan in Standby");
    digitalWrite(FAN_LED, LOW);
  }
  delay(1000);
}