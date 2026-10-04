# Question 3 : Automatic Street Light Control System

## What the question demands :-
- Design and simulate an automatic street light system using an Arduino in Tinkercad
- Use an LDR (light dependent resistor) to sense the surrounding light
- Turn the street lights (LEDs) ON when it is dark
- Turn them OFF when there is enough light
## Approach :-
- Three LEDs are connected to digital pins 8, 9 and 10 and set as outputs in setup(). The LDR is read on analog pin A0.
- 'DARK_LEVEL' is the threshold, set to 300. A reading below 300 is treated as dark, and a reading of 300 or more is treated as bright.
- 'setStreetLights(bool on)' is a helper function that sets all three LEDs to the same state at once. Passing 'true' turns them all on, and 'false' turns them all off. Using one function keeps the three LEDs switching together.
- In 'loop()', the code reads the light level with 'analogRead' and stores it in 'lightValue'.
  - If 'lightValue' is below 'DARK_LEVEL', it calls 'setStreetLights(true)', so the street lights turn on.
  - Otherwise, it calls 'setStreetLights(false)', so they turn off.
- 'delay(1000)' makes the loop repeat once per second.

## Circuit Explanation :-
  The Arduino can only measure voltage, not resistance. So the LDR is paired with a fixed 10 kΩ resistor to form a voltage divider, and the voltage at the junction goes to pin A0.
  The LEDs are connected to pins 8, 9 and 10, each through a 220Ω resistor, because the resistor limits the current so the LED doesn't draw too much and burn out.
  With the wiring, a dark reading is lower than a bright one, which is why the code checks lightValue < DARK_LEVEL.

## Tinkercad Link :-
   https://www.tinkercad.com/things/fVXdTdi4D30/editel?returnTo=%2Fdashboard
