#pragma config(UART_Usage, UART1, uartVEXLCD, baudRate19200, IOPins, None, None)
#pragma config(UART_Usage, UART2, uartNotUsed, baudRate4800, IOPins, None, None)
#pragma config(Sensor, in1,    Catapult_Pot,   sensorPotentiometer)
#pragma config(Sensor, in2,    power,          sensorAnalog)
#pragma config(Sensor, in3,    D_gyro,         sensorGyro)
#pragma config(Sensor, dgtl1,  SONAR_F,        sensorSONAR_cm)
#pragma config(Sensor, dgtl3,  SONAR_B,        sensorSONAR_cm)
#pragma config(Motor,  port1,           Chasis_L1,     tmotorVex393HighSpeed_HBridge, openLoop, reversed, driveLeft)
#pragma config(Motor,  port2,           Chasis_L2,     tmotorVex393HighSpeed_MC29, openLoop, driveLeft)
#pragma config(Motor,  port3,           Chasis_L3,     tmotorVex393HighSpeed_MC29, openLoop, driveLeft)
#pragma config(Motor,  port4,           Ball_Intake_1, tmotorVex393TurboSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           Catapult_1,    tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           Catapult_2,    tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port7,           Ball_Intake_2, tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           Chasis_R3,     tmotorVex393HighSpeed_MC29, openLoop, reversed, driveRight)
#pragma config(Motor,  port9,           Chasis_R2,     tmotorVex393HighSpeed_MC29, openLoop, reversed, driveRight)
#pragma config(Motor,  port10,          Chasis_R1,     tmotorVex393HighSpeed_HBridge, openLoop, driveRight)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

int R_Freq = 50;
int R_Batt = 8628;
int P_Freq = R_Freq * (R_Batt / nImmediateBatteryLevel)
// Initial values for Sensors: in 1 = 854  in 2 = 2288
// Initial values for IMEs: port 1 = 0  port 2 = 0  port 3 = 0

// TIME VOID FOR TIME THEORY
void wait(int temp)
{
	wait1Msec( P_Freq * temp);
}

// BALL INTAKE VOID
void Ball_Intake(int power)
{
	motor[Ball_Intake_1] = power;
	motor[Ball_Intake_2] = power;
}

int Initial_Value = 50;
int Final_Value = 650;
int Error_Margin = 75;
int intake_speed = 0;
int Descorer_Time = 100;
int wait_time = 20;

void Sonar_Chasis_RB(int distance, int speed)
{
	while(abs(SensorValue[SONAR_F]) > distance)
	{
		motor[Chasis_R1]=speed;
		motor[Chasis_R2]=speed;
		motor[Chasis_R3]=speed;
		motor[Chasis_L1]=speed;
		motor[Chasis_L2]=speed;
		motor[Chasis_L3]=speed;
	}
}


void Sonar_Chasis_FB(int distance, int speed)
{
	while(abs(SensorValue[SONAR_F]) < distance)
	{
		motor[Chasis_R1]=speed;
		motor[Chasis_R2]=speed;
		motor[Chasis_R3]=speed;
		motor[Chasis_L1]=speed;
		motor[Chasis_L2]=speed;
		motor[Chasis_L3]=speed;
	}
}

void Sonar_Chasis_RF(int distance, int speed)
{
	while(abs(SensorValue[SONAR_B]) >= distance)
	{
		motor[Chasis_R1]=speed;
		motor[Chasis_R2]=speed;
		motor[Chasis_R3]=speed;
		motor[Chasis_L1]=speed;
		motor[Chasis_L2]=speed;
		motor[Chasis_L3]=speed;
	}
}


void Sonar_Chasis_FF(int distance, int speed)
{
	while(abs(SensorValue[SONAR_B]) <= distance)
	{
		motor[Chasis_R1]=speed;
		motor[Chasis_R2]=speed;
		motor[Chasis_R3]=speed;
		motor[Chasis_L1]=speed;
		motor[Chasis_L2]=speed;
		motor[Chasis_L3]=speed;
	}
}


task LCD(){
	while(true){
		bLCDBacklight = true;
		string mainBattery;
		string expanderBattery;
		sprintf(mainBattery," %0.2f Volts",(float)nImmediateBatteryLevel/1000.0);
		sprintf(expanderBattery," %0.2f Volts",(float)SensorValue[power]/270.0);
		clearLCDLine(0);
		clearLCDLine(1);
		displayLCDString(0,0,mainBattery);
		displayLCDString(1,0,expanderBattery);
		wait1Msec(1000);
	}
}

// This Shoots the ball and reloads the catapult, Just need to call the function
// Req: None
void Catapult_Launch() {
	while(SensorValue[Catapult_Pot] >= Initial_Value){
		motor[Catapult_1]=127;
		motor[Catapult_2]=127;
	}
	while(SensorValue[Catapult_Pot] <= Final_Value - Error_Margin){
		motor[Catapult_1]=127;
		motor[Catapult_2]=127;
	}
	motor[Catapult_1] = -50;
	motor[Catapult_2] = -50;
	wait1Msec(5);
	motor[Catapult_1] = 0;
	motor[Catapult_2] = 0;
}
void Brake(){
	motor[Chasis_L1]=50;
	motor[Chasis_L2]=-50;

	motor[Chasis_R1]=50;
	motor[Chasis_R2]=-50;
	wait1Msec(5);
	motor[Chasis_L1]=0;
	motor[Chasis_L2]=0;

	motor[Chasis_R1]=0;
	motor[Chasis_R2]=0;
}

// This runs both sides of the chasis
// Reg: speed and time
void Chasis(int speed,int time, bool brake){
	motor[Chasis_R1]=speed;
	motor[Chasis_R2]=speed;
	motor[Chasis_R3]=speed;
	motor[Chasis_L1]=speed;
	motor[Chasis_L2]=speed;
	motor[Chasis_L3]=speed;
	wait(time);
	motor[Chasis_R1]=0;
	motor[Chasis_R2]=0;
	motor[Chasis_R3]=0;
	motor[Chasis_L1]=0;
	motor[Chasis_L2]=0;
	motor[Chasis_L3]=0;
	if (brake == true)
	{
		Brake();
	}
}

// This runs only the right side of the chasis
// Req: speed and time
void Chasis_R(int speed,int time, bool brake){
	motor[Chasis_R1]=speed;
	motor[Chasis_R2]=speed;
	motor[Chasis_R3]=speed;
	wait(time);
	motor[Chasis_R1]=0;
	motor[Chasis_R2]=0;
	motor[Chasis_R3]=0;
	motor[Chasis_L1]=0;
	motor[Chasis_L2]=0;
	motor[Chasis_L3]=0;
	if (brake == true)
	{
		Brake();
	}
}

// This runs only the left side of the chasis
// Req: speed and time
void Chasis_L(int speed,int time, bool brake){
	motor[Chasis_L1]=speed;
	motor[Chasis_L2]=speed;
	motor[Chasis_L3]=speed;
	wait(time);
	motor[Chasis_R1]=0;
	motor[Chasis_R2]=0;
	motor[Chasis_R3]=0;
	motor[Chasis_L1]=0;
	motor[Chasis_L2]=0;
	motor[Chasis_L3]=0;
	if (brake == true)
	{
		Brake();
	}
}

// This turns the robot right
// Req: speed and time
void Turn_Right(int speed,int time, bool brake){
	motor[Chasis_L1]=-speed;
	motor[Chasis_L2]=-speed;
	motor[Chasis_L3]=-speed;
	motor[Chasis_R1]=speed;
	motor[Chasis_R2]=speed;
	motor[Chasis_R3]=speed;
	wait(time);
	motor[Chasis_R1]=0;
	motor[Chasis_R2]=0;
	motor[Chasis_R3]=0;
	motor[Chasis_L1]=0;
	motor[Chasis_L2]=0;
	motor[Chasis_L3]=0;
	if (brake == true)
	{
		Brake();
	}
}

// This turns the robot left
// Req: speed and time
void Turn_Left(int speed,int time, bool brake){
	motor[Chasis_L1]=speed;
	motor[Chasis_L2]=speed;
	motor[Chasis_L3]=speed;
	motor[Chasis_R1]=-speed;
	motor[Chasis_R2]=-speed;
	motor[Chasis_R3]=-speed;
	wait(time);
	motor[Chasis_R1]=0;
	motor[Chasis_R2]=0;
	motor[Chasis_R3]=0;
	motor[Chasis_L1]=0;
	motor[Chasis_L2]=0;
	motor[Chasis_L3]=0;
	if (brake == true)
	{
		Brake();
	}
}


// This spins the ball intake
// Change variable intake_speed anytime within code to change speed
// Req: none
task Intake(){
	while(true){
		Ball_Intake(intake_speed);
	}
}

// TURN GYRO
void turn(int degrees10, int speed){
	while(ABS(SensorValue[D_gyro]) < degrees10 - 100){
		motor[Chasis_R1]=speed;
		motor[Chasis_R2]=speed;
		motor[Chasis_R3]=speed;
		motor[Chasis_L1]=-speed;
		motor[Chasis_L2]=-speed;
		motor[Chasis_L3]=-speed;
	}
	motor[Chasis_R1]=0;
	motor[Chasis_R2]=0;
	motor[Chasis_R3]=0;
	motor[Chasis_L1]=0;
	motor[Chasis_L2]=0;
	motor[Chasis_L3]=0;
}

// TURN GYRO
void turn_other(int degrees10, int speed){
	while(ABS(SensorValue[D_gyro]) > degrees10 - 100){
		motor[Chasis_R1]=speed;
		motor[Chasis_R2]=speed;
		motor[Chasis_R3]=speed;
		motor[Chasis_L1]=-speed;
		motor[Chasis_L2]=-speed;
		motor[Chasis_L3]=-speed;
	}
	motor[Chasis_R1]=0;
	motor[Chasis_R2]=0;
	motor[Chasis_R3]=0;
	motor[Chasis_L1]=0;
	motor[Chasis_L2]=0;
	motor[Chasis_L3]=0;
}


// This code is for the VEX cortex platform
#pragma platform(VEX2)

// Select Download method as "competition"
#pragma competitionControl(Competition)

//Main competition background code...do not modify!
#include "Vex_Competition_Includes.c"

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the cortex has been powered on and    */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/
task Catapult(){
	while(true){
		if (vexRT(Btn5UXmtr2)==1){
			while(SensorValue[Catapult_Pot] >= Initial_Value){
				motor[Catapult_1]=127;
				motor[Catapult_2]=127;
			}
			while(SensorValue[Catapult_Pot] <= Final_Value - Error_Margin){
				motor[Catapult_1]=127;
				motor[Catapult_2]=127;
			}
			motor[Catapult_1] = -50;
			motor[Catapult_2] = -50;
			wait1Msec(5);
			motor[Catapult_1] = 0;
			motor[Catapult_2] = 0;
		}
		else if (vexRT(Btn5DXmtr2)==1){
			motor[Catapult_1]=127;
			motor[Catapult_2]=127;
		}
		else{
			motor[Catapult_1] = 0;
			motor[Catapult_2] = 0;
		}
	}
}
void pre_auton()
{
	startTask (LCD);
}


/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

task usercontrol()
{
	startTask(Catapult);
	// sk (LCD);
	while (true)
	{
		if (vexRT(Btn6D)==1){
			//BRAKE
			//main controller
			motor[Chasis_L1]=50;
			motor[Chasis_L2]=-50;

			motor[Chasis_R1]=50;
			motor[Chasis_R2]=-50;
		}
		else if (vexRT(Btn6U)==1){
			//Opposite drive
			//main controller
			motor[Chasis_L1]=-vexRT(Ch2);
			motor[Chasis_L2]=-vexRT(Ch2);
			motor[Chasis_L3]=-vexRT(Ch2);

			motor[Chasis_R1]=-vexRT(Ch3);
			motor[Chasis_R2]=-vexRT(Ch3);
			motor[Chasis_R3]=-vexRT(Ch3);
		}
		else{
			//Normal Chasis drive
			//main controller
			motor[Chasis_L1]=vexRT(Ch3);
			motor[Chasis_L2]=vexRT(Ch3);
			motor[Chasis_L3]=vexRT(Ch3);

			motor[Chasis_R1]=vexRT(Ch2);
			motor[Chasis_R2]=vexRT(Ch2);
			motor[Chasis_R3]=vexRT(Ch2);
		}


		//INTAKE DRIVE
		//Move to partner eventually
		if (SensorValue(Catapult_Pot ) > Final_Value-200){
			Ball_Intake((127*vexRT(Btn6UXmtr2)) + (-127*vexRT(Btn6DXmtr2)));
		}
		else{
			Ball_Intake(0);
		}

}}

task autonomous()
{
	startTask (Intake);
	// startTask (LCD);
	//Start writing auton code from here on....

	SensorValue[D_gyro] = 0;

	// RUN INTAKE
	intake_speed = 127;
	Sonar_Chasis_FB(115, 75);

	// BRAKE
	Chasis(0, 5, false);

	// GO BACK TO TILE

	Sonar_Chasis_RB(15, -100);

	// BRAKE
	Chasis(0, 2, false);

	// BACKUP
	Chasis(100, 1, false);

	Sonar_Chasis_FB(3.4,100);

	SensorValue[D_gyro] = 0;

	// TURN TO FLAGS
	turn(950, -35);

	// STOP INTAKE
	intake_speed = 0;

	Sonar_Chasis_RB(5, -50);

	// BRAKE
	Chasis(0, 2, false);

	Sonar_Chasis_FB(73, 70);

	Chasis(0, 20, false);

	Catapult_Launch();

	Chasis(0, 20, false);



	Sonar_Chasis_RF(90, 70);


	SensorValue[D_gyro] = 0;

	// TURN TO FLAGS
	turn(900, -35);

	Chasis(80, 12, false);

	Chasis(-127, 56, true);

	// gChasis(-127, 32.5, true);

	Chasis(0, 25, true);


}
