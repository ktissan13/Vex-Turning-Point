#pragma config(Sensor, in2,    gyro,           sensorGyro)
#pragma config(Sensor, in4,    potentiometer_lift, sensorPotentiometer)
#pragma config(Sensor, dgtl2,  left_chassis_encoder, sensorQuadEncoder)
#pragma config(Sensor, dgtl6,  right_chassis_encoder, sensorQuadEncoder)
#pragma config(Motor,  port1,           R_Lift,        tmotorVex393HighSpeed_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           ycable2DriveR, tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port3,           R_Shooter,     tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port4,           C_F_Left,      tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port5,           Claw,          tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port6,           Intake,        tmotorVex393TurboSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           C_F_Right,     tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port8,           L_Shooter,     tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port9,           ycable1DriveL, tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          L_Lift,        tmotorVex393HighSpeed_HBridge, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

	int R_Freq = 50;
	int R_Batt = 8628;
	int P_Freq = R_Freq * (R_Batt / nImmediateBatteryLevel)
	// Initial values for Sensors: in 1 = 854  in 2 = 2288
	// Initial values for IMEs: port 1 = 0  port 2 = 0  port 3 = 0

	void wait(int temp)
	{
		wait1Msec( P_Freq * temp);
	}

// Aman Patel
// 356B
// Turning Point
// November 25 2018
// Just Driver Control Program


//drive void
int drive = 0;

// chassis void
void driveL(int speed)
{
motor[C_F_Left] = speed;
motor[ycable1DriveL] = speed;
}

// Right Drive Void
void driveR(int speed)
{
motor[C_F_Right] = speed;
motor[ycable2DriveR] = speed;
}

// Lift Void
void lift(int speed)
{
motor[R_Lift] = speed;
motor[L_Lift] = speed;
}

// Claw Void
void flipper(int speed)
{
motor[Claw] = speed;
}

// Intake void
void _intake(int speed)
{
motor[Intake] = speed;
}

// Shooter void
void shooter(int speed)
{
motor[R_Shooter] = speed;
motor[L_Shooter] = speed;
}

task main()
{
	// DRIVE BACK
	driveL(-100);
  driveR(100);
  wait(18);
  // BRAKE
  driveL(0);
  driveR(0);
  // INTAKE BALL
  _intake(127);
  wait(23);
  _intake(0);
  // TURN TO PLATFORM
  driveL(100);
  driveR(100);
  wait(12);
  // GET ON PLATFORM
  driveL(-100);
  driveR(100);
  wait(36);
  // BRAKE
  driveL(0);
  driveR(0);



}
