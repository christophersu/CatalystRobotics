// Created by Christopher Su
// Catalyst Robotics 2012-2013 Season

#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTServo,  HTMotor)
#pragma config(Hubs,  S2, HTMotor,  none,     none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     ,               sensorI2CMuxController)
#pragma config(Motor,  motorA,          nxtMotorA,     tmotorNXT, openLoop)
#pragma config(Motor,  motorB,          nxtMotorB,     tmotorNXT, openLoop)
#pragma config(Motor,  motorC,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  mtr_S1_C1_1,     motorTEMP1,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motorTEMP2,    tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C2_1,     motorScsL,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     motorG,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C4_1,     motorArmL,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C4_2,     motorArmR,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C1_1,     motorL,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C1_2,     motorR,        tmotorTetrix, openLoop, reversed)
#pragma config(Servo,  srvo_S1_C3_1,    servo1,               tServoContinuousRotation)
#pragma config(Servo,  srvo_S1_C3_2,    servo2,               tServoStandard)
#pragma config(Servo,  srvo_S1_C3_3,    servo3,               tServoStandard)
#pragma config(Servo,  srvo_S1_C3_4,    servo4,               tServoStandard)
#pragma config(Servo,  srvo_S1_C3_5,    servo5,               tServoContinuousRotation)
#pragma config(Servo,  srvo_S1_C3_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"  //le joystick things
//#include "EpicBM.c" //le epic bm
short caseyIsTall = 5; //value which is used to do stuff
short alexLikesMenRoof = 24;
short alexLikesMenFloor = 230;

void TeleOp() //le teleop method
// @(^~^)@ DANA'S MONKEY...oh i'm a gummibear yes i'm a gummibear oh yes i'm a funny yummy chummy crummy gummibear oh ahhh
{
	getJoystickSettings(joystick);  //get updates from joystick

	//wheels
	if ( abs(joystick.joy1_y2) > 15 )
    motor[motorR] = -joystick.joy1_y2*0.5;
  else
    motor[motorR] = 0;

  if ( abs(joystick.joy1_y1) > 15 )
    motor[motorL] = -joystick.joy1_y1*0.5;
  else
    motor[motorL] = 0;
/*
	//arms
	if(joy2Btn7() == 1) //if(joystick.joy2_TopHat == 0)
    motor[motorArmR] = 25;
  else if(joy2Btn() == 5) //else if(joystick.joy2_TopHat == 4)
    motor[motorArmR] = -25;
  else
    motor[motorArmR] = 0;

  //dana fixed this:
	if(joy2Btn() == 8) //if(joystick.joy2_TopHat == 2)
    motor[motorArmL] = 35;
  else if(joy2Btn() == 6) //else if(joystick.joy2_TopHat == 6)
    motor[motorArmL] = -35;
  else
    motor[motorArmL] = 0;
/*
  //scissors
  if ( abs(joystick.joy2_y1) > 15 )
    motor[motorScsL] = joystick.joy2_y1*0.4;
  else
    motor[motorScsL] = 0;

  //left right servos
  if(joystick.joy2_TopHat == 2)
    servo[servo3] = ServoValue[servo3] - caseyIsTall;
  else if(joystick.joy2_TopHat == 6)
    servo[servo3] = ServoValue[servo3] + caseyIsTall;

  if(joy2Btn(1) == 1)
    servo[servo4] = ServoValue[servo4] + caseyIsTall;
  else if(joy2Btn(3) == 1)
    servo[servo4] = ServoValue[servo4] - caseyIsTall;
*/
  //spinning servos
 /*
  if(joystick.joy2_TopHat == 4)
    servo[servo5] = ServoValue[servo5] + caseyIsTall;
  else if(joystick.joy2_TopHat == 0)
    servo[servo5] = ServoValue[servo5] - caseyIsTall;

  if(joy2Btn(2) == 1)
    servo[servo6] = ServoValue[servo6] - caseyIsTall;
  else if(joy2Btn(4) == 1)
    servo[servo6] = ServoValue[servo6] + caseyIsTall;
 */
/*
 //spinning servos continuous
  if(joystick.joy2_TopHat == 4)
    servo[servo5] = alexLikesMenRoof;
  else if(joystick.joy2_TopHat == 0)
    servo[servo5] = alexLikesMenFloor;
  else
    servo[servo5] = 127;
  */
/*
  if (joy2Btn() == 2)
    servo[servo1] = alexLikesMenFloor;
  else if (joy2Btn() == 4)
    servo[servo1] = alexLikesMenRoof;
  else
    servo[servo1] = 127;
*/
  //lego motor servos
  if(joy1Btn(1) == 1)
    motor[nxtMotorA] = 100;
  else if(joy1Btn(3) == 1)
    motor[nxtMotorA] = -100;
  else
    motor[nxtMotorA] = 0;

  if ( abs(joystick.joy1_y1) > 15 )
    motor[nxtMotorA] = joystick.joy1_y1*0.8;
  else
    motor[nxtMotorA] = 0;
}

task main()
{
  //Argentina();
  while (true)
  {
    TeleOp();
  }
}
