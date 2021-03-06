// Created by Christopher Su
// Catalyst Robotics 2012-2013 Season

#pragma config(Hubs,  S1, HTMotor,  none,     none,     none)
#pragma config(Hubs,  S2, HTMotor,  none,     none,     none)
#pragma config(Sensor, S3,     touch1,         sensorTouch)
#pragma config(Motor,  motorA,          nxtMotorA,     tmotorNXT, openLoop)
#pragma config(Motor,  motorB,          nxtMotorB,     tmotorNXT, openLoop)
#pragma config(Motor,  motorC,          nxtMotorB,     tmotorNXT, openLoop)
#pragma config(Motor,  mtr_S1_C1_1,     motor11,       tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motor12,       tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S2_C1_1,     motor21,       tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C1_2,     motor22,       tmotorTetrix, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

short weap = 0;

task main()
{
	while(true) {
		short weap = SensorValue[S3];
		nxtDisplayCenteredTextLine(3, "%d", weap);
		wait10Msec(10);
		eraseDisplay();
	}
}
