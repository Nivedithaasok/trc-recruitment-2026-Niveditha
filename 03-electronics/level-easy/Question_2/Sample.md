# Question 2 : Temperature Monitoring System

## What the Question Demands :-
- Simulate a temperature monitoring system in Tinkercad, using a temperature sensor
- Continuously display the current temperature in the Serial Monitor
- Above 40 °C: print "Fan ON"
- Below 25 °C: print "Fan OFF"
- Between 25 °C and 40 °C: print "Fan in Standby"

## Approach :-
- 'SENSOR_PIN' is the analog pin (A0) that the TMP36 output is connected to. The sensor converts temperature into a voltage, and the Arduino converts that voltage into a number, which the code uses to decide the fan state.
- 'HIGH_TEMP' (40) and 'LOW_TEMP' (25) are the threshold values, stored as named constants.
- 'analogRead(SENSOR_PIN)' reads the voltage from the sensor and returns a value from 0 to 1023. The LED pin is set as an output using 'pinMode'.
- The 'readTemperature()' function uses the TMP36 formula to convert the number to a voltage, and then the voltage to a temperature in °C.

  Threshold logic (inside loop())
  - The code first calls 'readTemperature()'.
  - If the temperature is above 'HIGH_TEMP' (40 °C), it prints "Fan ON" and sets the LED HIGH, so it glows.
  - Else, if the temperature is below 'LOW_TEMP' (25 °C), it prints "Fan OFF" and sets the LED to LOW.
  - Otherwise, the temperature is between 25 °C and 40 °C, so it prints "Fan in Standby" and sets the LED to LOW.
  - 'delay(1000)' makes the loop repeat once per second.

## Tinkercad Link :-
   https://www.tinkercad.com/things/bp5mEz8zkOs/editel?returnTo=%2Fdashboard

   
