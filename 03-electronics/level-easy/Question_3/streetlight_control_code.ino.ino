const int LDR_PIN = A0;
const int LED1 = 8;
const int LED2 = 9;
const int LED3 = 10;

const int DARK_LEVEL = 300;   // below this = dark

void setStreetLights(bool on) {
  digitalWrite(LED1, on);
  digitalWrite(LED2, on);
  digitalWrite(LED3, on);
}

void setup() {
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  Serial.println("Automatic Street Light System Started");
}

void loop() {
  int lightValue = analogRead(LDR_PIN);

  Serial.print("Light Level: ");
  Serial.print(lightValue);

  if (lightValue < DARK_LEVEL) {
    setStreetLights(true);
    Serial.println("Dark: Street Lights ON");
  }
  else {
    setStreetLights(false);
    Serial.println("Bright: Street Lights OFF");
  }

  delay(1000);
}