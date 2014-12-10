#pragma config(Hubs,  S1, HTMotor,  HTServo,  HTMotor,  none)
#pragma config(Motor,  mtr_S1_C1_1,     motorBelt,     tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C1_2,     motorLift,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_1,     motorRight,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     motorLeft,     tmotorTetrix, openLoop, reversed)
#pragma config(Servo,  srvo_S1_C2_1,    servoDoor,            tServoContinuousRotation)
#pragma config(Servo,  srvo_S1_C2_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c" //Include file for Joystick


task main()
{
	while (true)
	{
		getJoystickSettings(joystick);
		//if(abs(joystick.joy1_y1) > 10)
		//{
			motor[motorLeft] = joystick.joy1_y1+1;
		//}

		//if(abs(joystick.joy1_y2)>10)
		//{
			motor[motorRight] = joystick.joy1_y2+1;
		//}


//Belt Fast
			if (joystick.joy1_TopHat == 0)
			{
				motor [motorBelt] = 20;
			}

			else if (joystick.joy1_TopHat == 4)
			{
				motor [motorBelt] = -20;
			}

			else
			{
				motor [motorBelt] = 0;
			}
//Belt Slow
			if (joystick.joy1_TopHat == 2)
			{
				motor [motorBelt] = 10;
			}

			else if (joystick.joy1_TopHat == 6)
			{
				motor [motorBelt] = -10;
			}

			else
			{
				motor [motorBelt] = 0;//2nd 0 c
			}
		}
}
