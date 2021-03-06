#pragma config(Hubs,  S1, HTMotor,  none,     none,     none)
#pragma config(Hubs,  S2, HTMotor,  none,     none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     ,               sensorI2CMuxController)
#pragma config(Motor,  motorA,          nxtMotorA,     tmotorNormal, PIDControl, reversed, encoder)
#pragma config(Motor,  mtr_S1_C1_1,     motorRight,    tmotorNormal, openLoop, encoder)
#pragma config(Motor,  mtr_S1_C1_2,     motorLeft,     tmotorNormal, openLoop, reversed, encoder)
#pragma config(Motor,  mtr_S2_C1_1,     motorF,        tmotorNormal, openLoop, encoder)
#pragma config(Motor,  mtr_S2_C1_2,     motorG,        tmotorNone, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*/

#include "JoystickDriver.c"
#include "EpicBM.c"

task main()
{
	TakeOnMe();
	/*
  while(1 == 1)
  {
    getJoystickSettings(joystick);
    motor[motorRight] = joystick.joy1_y1;
    motor[motorLeft] = joystick.joy1_y2;
  } */
}
