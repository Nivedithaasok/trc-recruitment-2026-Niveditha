#Question 1 : Traffic Signal Controller with Serial Output

## What the question demands :-
- Simulate a traffic signal on an Arduino, with no LEDs
- Show the light state as text in the Serial Monitor
- Cycle in this order: Red, Green, Yellow, then back to Red
- Timings: Red 10s, Green 7s, Yellow 3s

## Approach :-
- setup() runs once when the Arduino starts. Serial.begin(9600) opens the connection to the Serial Monitor at a speed of 9600, so the board can send text to the users screen.
- loop() runs over and over forever. Inside it, the three states are written in order:
      ~ Print the red message, then wait 10 seconds (delay(10000))
      ~ Print the green message, then wait 7 seconds (delay(7000))
      ~ Print the yellow message, then wait 3 seconds (delay(3000))
- When the last delay finishes, loop() starts again from the top, so the sequence goes Red, Green, Yellow, Red, and so on.

## Code :-

## Output :-


## Tinkercad_link :-


## Explanation_video :-
