// Created by Christopher Su
// Catalyst Robotics 2012-2013 Season

#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     GYRO,           sensorI2CHiTechnicGyro)
#pragma config(Sensor, S3,     touchMuxer,     sensorHiTechnicTouchMux)
#pragma config(Sensor, S4,     IRseeker,       sensorHiTechnicIRSeeker1200)
#pragma config(Motor,  mtr_S1_C1_1,     motor12,       tmotorTetrix, PIDControl, reversed, encoder)
#pragma config(Motor,  mtr_S1_C1_2,     motor11,       tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_1,     motor21,       tmotorTetrix, PIDControl, reversed, encoder)
#pragma config(Motor,  mtr_S1_C2_2,     motor22,       tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_1,     motorArm,      tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C3_2,     motorLED,      tmotorTetrix, openLoop)
#pragma config(Motor,  motorA,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  motorB,           ,             tmotorNXT, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//


#include "JoystickDriver.c"
#include "../Headers/CSEnumerated.h"
#include "../Headers/CSMethods.h"


task main()
{
	while (true) {
		if (((Happy(CONTROLLER_A, JOYSTICK_L, AXIS_Y) > JOYSTICK_UPPER_THRESHOLD) || (Happy(CONTROLLER_A, JOYSTICK_L, AXIS_Y) < JOYSTICK_LOWER_THRESHOLD))) {
			MotorF(motorA, Happy(CONTROLLER_A, JOYSTICK_L, AXIS_Y));
		}
		else if (!Button(CONTROLLER_A, 5) && !Button(CONTROLLER_A, 6) && (Hat(CONTROLLER_A) == HAT_NONE)) {
			MotorS(motorA);
		}

		if ((Happy(CONTROLLER_A, JOYSTICK_R, AXIS_Y) > JOYSTICK_UPPER_THRESHOLD) || (Happy(CONTROLLER_A, JOYSTICK_R, AXIS_Y) < JOYSTICK_LOWER_THRESHOLD)) {
			MotorF(motorB, Happy(CONTROLLER_A, JOYSTICK_R, AXIS_Y));
		}
		else if (!Button(CONTROLLER_A, 5) && !Button(CONTROLLER_A, 6) && (Hat(CONTROLLER_A) == HAT_NONE)) {
			MotorS(motorB);
		}
	}
}
