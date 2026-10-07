# Question 1 : Air Quality Safety Monitor

## What the question demands
- Use an MQ-135 gas sensor to detect harmful gases.
- Use a DHT11 sensor to measure temperature and humidity.
- If the gas level is above the threshold and humidity is above 70%, turn on a simulated buzzer (LED).
- Show the readings and alert status on the Serial Monitor.
- Upload a video explaining the circuit and its operation.

Components used:
- ESP32 board
- MQ-135 gas sensor
- DHT22 temperature and humidity sensor (used in place of the DHT11, since Wokwi only provides the DHT22 and it works the same way)
- Red LED (acts as the buzzer)
- 220Ω resistor



## How it works
The ESP32 checks the sensors every 2 seconds.
1. Setup: The code starts the Serial Monitor, sets the LED pin as an output, and starts the DHT22 sensor.
2. Read: It reads the humidity and temperature from the DHT22, and the gas value from the gas sensor.
3. Check: If the DHT22 gives a bad reading, it prints an error and tries again.
4. Decide: If the gas value is above 2000 **and** humidity is above 70%, the alert turns on.
5. LED: On alert, the LED turns ON. Otherwise it stays OFF.
6. Print: The temperature, humidity, gas value and status (SAFE or ALERT - UNSAFE) are shown on the Serial Monitor.
7. Wait: It pauses for 2 seconds and repeats.





## Wokwi link
https://wokwi.com/projects/477192311413873665

## Explanation video
