from controller import Robot, Keyboard

robot = Robot()
timestep = int(robot.getBasicTimeStep())

keyboard = robot.getKeyboard()
keyboard.enable(timestep)

# find each wheel motor by the name you gave it in the scene tree
fl = robot.getDevice("wheel_fl")
rl = robot.getDevice("wheel_rl")
fr = robot.getDevice("wheel_fr")
rr = robot.getDevice("wheel_rr")

# velocity control mode: position = infinity means "just spin at a set speed"
for motor in (fl, rl, fr, rr):
    motor.setPosition(float('inf'))
    motor.setVelocity(0.0)

SPEED = 10.0  # wheel speed in rad/s

left_speed = 0.0
right_speed = 0.0

while robot.step(timestep) != -1:
    key = keyboard.getKey()  # -1 if no key is pressed

    if key == ord('W'):        # forward
        left_speed = SPEED
        right_speed = SPEED
    elif key == ord('S'):      # backward
        left_speed = -SPEED
        right_speed = -SPEED
    elif key == ord('A'):      # turn left
        left_speed = -SPEED
        right_speed = SPEED
    elif key == ord('D'):      # turn right
        left_speed = SPEED
        right_speed = -SPEED
    elif key == ord(' '):      # brake
        left_speed = 0.0
        right_speed = 0.0

    fl.setVelocity(left_speed)
    rl.setVelocity(left_speed)
    fr.setVelocity(right_speed)
    rr.setVelocity(right_speed)