# Question 2 : Smart Parking Assistant

## What the question demands :-
- Use an ultrasonic sensor to measure the distance to obstacles.
- Use an LDR sensor to adjust the brightness of the indicator LED based on the environment.
- If distance < 20 cm, blink the LED fast.
- If distance < 10 cm, turn the LED solid ON.
- Display the distance and LED status on the Serial Monitor.

## How it works :-
The ESP32 keeps measuring the distance and the light level.

1. Setup: The code starts the Serial Monitor, sets TRIG as an output and ECHO as an input, and sets up PWM on the LED pin so its brightness can be changed.
2. Measure distance: The `getDistance()` function sends a pulse from TRIG, times the echo on ECHO, and converts the time into centimetres.
3. Read light: The LDR value is read and converted into an LED brightness.
4. Decide:
   - Distance < 10 cm: the LED stays solid ON.
   - Distance < 20 cm: the LED blinks fast (switches every 150 ms).
   - Otherwise: the LED is OFF.
5. Print: The distance, light level and LED status are shown on the Serial Monitor every 0.5 seconds.

## Wokwi Link :-
https://wokwi.com/projects/477235421875467265
