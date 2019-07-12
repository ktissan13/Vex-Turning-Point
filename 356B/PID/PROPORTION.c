#pragma config(UART_Usage, UART1, uartVEXLCD, baudRate19200, IOPins, None, None)
#pragma config(Sensor, in1,    Catapult_Pot,   sensorPotentiometer)
#pragma config(Sensor, in2,    power,          sensorAnalog)
#pragma config(Sensor, in3,    D_gyro,         sensorGyro)
#pragma config(Sensor, dgtl1,  SONAR_F,        sensorSONAR_cm)
#pragma config(Sensor, dgtl3,  SONAR_B,        sensorSONAR_cm)
#pragma config(Sensor, dgtl5,  Encod_R,        sensorQuadEncoder)
#pragma config(Sensor, dgtl7,  Encod_L,        sensorQuadEncoder)
#pragma config(Motor,  port1,           Chasis_R1,     tmotorVex393HighSpeed_HBridge, openLoop, driveRight, encoderPort, dgtl5)
#pragma config(Motor,  port2,           Ball_Intake_1, tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port3,           Chasis_R2,     tmotorVex393HighSpeed_MC29, openLoop, driveRight, encoderPort, dgtl5)
#pragma config(Motor,  port4,           Chasis_R3,     tmotorVex393HighSpeed_MC29, openLoop, driveRight, encoderPort, dgtl5)
#pragma config(Motor,  port5,           Catapult_1,    tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port6,           Catapult_2,    tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port7,           Chasis_L3,     tmotorVex393HighSpeed_MC29, openLoop, driveLeft, encoderPort, dgtl7)
#pragma config(Motor,  port8,           Chasis_L2,     tmotorVex393HighSpeed_MC29, openLoop, driveLeft, encoderPort, dgtl7)
#pragma config(Motor,  port9,           Ball_Intake_2, tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port10,          Chasis_L1,     tmotorVex393HighSpeed_HBridge, openLoop, driveLeft, encoderPort, dgtl7)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma DebuggerWindows("Globals")
#pragma DebuggerWindows("Motors")
#pragma platform(VEX)

void moveBase(int speed)
{
	motor[Chasis_R1] = speed;
	motor[Chasis_R2] = speed;
	motor[Chasis_R3] = speed;
	motor[Chasis_L1] = speed;
	motor[Chasis_L2] = speed;
	motor[Chasis_L3] = speed;
}

//TICKS/INCH FORMULA                                                 //TEST THIS OUT
//reading: ticks -- 627.2 ticks/revolution
//1 turn of the wheels -- 4 inch wheels == 627.2*2 ticks
//1 turn of each wheel 4*pi inches
//4*pi inches = 627.2*2 ticks
//ticks/inch = 627.2*2/(4*pi) = 99.82198

//when my error is 30
//the actual error is inches - 30

const int ticksperinch = 99.82198;

int fixTimerValue(float rawSeconds)
{
	int miliseconds;
	miliseconds = rawSeconds*1000;
	if(miliseconds < 250)
	{
		miliseconds = 250;
	}
	return miliseconds;
}

int inchToTicks (float inch)
{
	int ticks;
	ticks = inch*ticksperinch;
	return ticks;
}
void PIDbaseControl(int target, float waitTime)
{
	float Kp = 0.2;

	int error;

	int proportion;

	int finalPower;

	bool timerBool = true;

	SensorValue[Encod_L] = 0;
	SensorValue[Encod_R] = 0;

	clearTimer(T1);

	while(time1[T1]< fixTimerValue(waitTime))
	{
		error = inchToTicks(target) - (SensorValue[Encod_L] + SensorValue[Encod_R]);
		proportion = Kp*error;
		finalPower = proportion; //proportion+derivative+integral
		moveBase(finalPower);
		wait1Msec(40);
		if (error < 30)
		{
			timerBool = false;
		}
		if (timerBool)
		{
			clearTimer(T1);
		}
	}
	moveBase(0);
}

task main()
{
	while(true)
	{
		wait1Msec(20);
	}
}
