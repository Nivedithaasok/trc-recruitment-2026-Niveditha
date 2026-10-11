#Task 1A: Robot Model with Keyboard Control (Webots)

What the question demands :-

Create a robot in Webots with a body of 0.3 x 0.15 x 0.05 m (l x b x h)
Wheels of height 0.03 m and radius 0.05 m
Control the robot from the keyboard: W forward, A left, S backward, D right, Space bar for brake

Approach :-

Robot model: The body is a Box node sized 0.3 x 0.15 x 0.05. The wheels are Cylinder nodes with height 0.03 and radius 0.05, each attached to the body with a HingeJoint and a RotationalMotor. The motors are named (for example left_motor and right_motor) so the controller can find them.
Controller setup: The controller gets the motors with robot.getDevice(). Each motor’s position is set to float('inf'), so it runs in velocity mode instead of going to a fixed angle. Then keyboard.enable(timestep) lets the program read key presses.
Main loop: On every simulation step, keyboard.getKey() reads the key currently pressed, and the wheel speeds are set to match:
W: both wheels forward at the same speed, so the robot moves straight ahead
S: both wheels backward at the same speed
A: the left wheel slows or reverses while the right wheel moves forward, so the robot turns left
D: the right wheel slows or reverses while the left wheel moves forward, so the robot turns right
Space: both wheel speeds are set to 0, which stops the robot (brake)
No key pressed: the speeds are set to 0, so the robot stops when you let go
The loop repeats until the simulation ends, so the robot responds to the keyboard in real time.
