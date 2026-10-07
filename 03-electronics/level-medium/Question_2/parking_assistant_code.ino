#define TRIG 5
#define ECHO 18
#define LDR_PIN 35
#define LED_PIN 25
unsigned long lastBlink = 0;
bool ledState = false;

float getDistance() {
  digitalWrite(TRIG, LOW);  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH); delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  long duration = pulseIn(ECHO, HIGH, 30000);
  if (duration == 0) return 999;
  return duration * 0.034 / 2;
}

void setup() {
  Serial.begin(115200);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  ledcAttach(LED_PIN, 5000, 8);
}

void loop() {
  float dist = getDistance();
  int ldr = analogRead(LDR_PIN);
  int brightness = constrain(map(ldr, 0, 4095, 255, 30), 30, 255);
  String status;

  if (dist < 10) {
    ledcWrite(LED_PIN, brightness);
    status = "SOLID ON";
  } else if (dist < 20) {
    if (millis() - lastBlink > 150) {
      ledState = !ledState;
      lastBlink = millis();
    }
    ledcWrite(LED_PIN, ledState ? brightness : 0);
    status = "BLINKING FAST";
  } else {
    ledcWrite(LED_PIN, 0);
    status = "OFF";
  }

  Serial.printf("Distance: %.1f cm | Light: %d | LED: %s\n", dist, ldr, status.c_str());
  delay(50);
}