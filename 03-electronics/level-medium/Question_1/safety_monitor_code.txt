#include "DHT.h"

#define DHTPIN 4
#define DHTTYPE DHT22
#define GAS_PIN 34
#define LED_PIN 26

const int GAS_THRESHOLD = 2000;   // tune this
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  dht.begin();
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  int gas = analogRead(GAS_PIN);

  if (isnan(h) || isnan(t)) {
    Serial.println("DHT read failed");
    delay(2000);
    return;
  }

  bool alert = (gas > GAS_THRESHOLD) && (h > 70);
  digitalWrite(LED_PIN, alert ? HIGH : LOW);

  Serial.printf("Temp: %.1f C | Humidity: %.1f %% | Gas: %d | Status: %s\n",
  t, h, gas, alert ? "ALERT - UNSAFE" : "SAFE");
  delay(2000);
}