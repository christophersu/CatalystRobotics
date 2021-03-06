#pragma config(Hubs,  S1, MSServo,  none,     none,     none)
#pragma config(Servo,  srvo_S1_C1_1,    servo1,               tServoStandard)
#pragma config(Servo,  srvo_S1_C1_2,    servo2,               tServoStandard)
#pragma config(Servo,  srvo_S1_C1_3,    servo3,               tServoStandard)
#pragma config(Servo,  srvo_S1_C1_4,    servo4,               tServoStandard)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"  //le joystick things
/*
void TeleOp() //le teleop method
{
	getJoystickSettings(joystick);  //get updates from joystick

	if ( abs(joystick.joy1_y2) > 15 )
    motor[motorR] = -joystick.joy1_y2*0.5;
  if ( abs(joystick.joy1_y1) > 15 )
    motor[motorL] = -joystick.joy1_y1*0.5;

  if(joy2Btn(5) == 1)
  {
	  if ( abs(joystick.joy2_y2) > 15 )
	    motor[motorScsR] = -joystick.joy2_y2;
	  if ( abs(joystick.joy2_y1) > 15 )
	    motor[motorScsL] = -joystick.joy2_y1;
  }
  else
  {
	  if ( abs(joystick.joy2_y2) > 15 )
	    motor[motorScsR] = -joystick.joy2_y2*0.4;
	  if ( abs(joystick.joy2_y1) > 15 )
	    motor[motorScsL] = -joystick.joy2_y1*0.4;
  }

}
*/
task main()
{
    while(true)
  {
    servoChangeRate[servo1] = 2;          // Slow the Servo Change Rate down to only 'delta' positions per update.

    if(ServoValue[servo1] < 128)              // If servo1 is closer to 0 (than 255):
    {
      while(ServoValue[servo1] < 255)               // While the ServoValue of servo1 is less than 255:
      {
        servo[servo1] = 255;                              // Move servo1 to position to 255.
      }
    }

    wait1Msec(1000);                          // Wait 1 second.

    if(ServoValue[servo1] >= 128)             // If servo1 is closer to 255 (than 0):
    {
      while(ServoValue[servo1] > 0)                 // While the ServoValue of servo1 is greater than 0:
      {
        servo[servo1] = 0;                                // Move servo1 to position to 0.
      }
    }

    wait1Msec(1000);                          // Wait 1 second.
  }
}
