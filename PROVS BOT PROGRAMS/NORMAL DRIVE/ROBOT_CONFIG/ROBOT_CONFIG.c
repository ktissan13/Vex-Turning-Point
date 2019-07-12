#pragma config(UART_Usage, UART1, uartVEXLCD, baudRate19200, IOPins, None, None)
#pragma config(Sensor, in2,    power,          sensorAnalog)
#pragma config(Sensor, in3,    D_gyro,         sensorGyro)
#pragma config(Sensor, in4,    Catapult_Pot,   sensorPotentiometer)
#pragma config(Sensor, dgtl1,  SONAR_F,        sensorSONAR_cm)
#pragma config(Sensor, dgtl3,  SONAR_B,        sensorSONAR_cm)
#pragma config(Sensor, dgtl5,  Encod_R,        sensorQuadEncoder)
#pragma config(Sensor, dgtl7,  Encod_L,        sensorQuadEncoder)
#pragma config(Motor,  port1,           Chasis_R1,     tmotorVex393HighSpeed_HBridge, openLoop, reversed, driveRight, encoderPort, dgtl5)
#pragma config(Motor,  port2,           Ball_Intake_1, tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           Chasis_R2,     tmotorVex393HighSpeed_MC29, openLoop, driveRight, encoderPort, dgtl5)
#pragma config(Motor,  port4,           Chasis_R3,     tmotorVex393HighSpeed_MC29, openLoop, reversed, driveRight, encoderPort, dgtl5)
#pragma config(Motor,  port5,           Catapult_1,    tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port6,           Catapult_2,    tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           Chasis_L3,     tmotorVex393HighSpeed_MC29, openLoop, driveLeft, encoderPort, dgtl7)
#pragma config(Motor,  port8,           Chasis_L2,     tmotorVex393HighSpeed_MC29, openLoop, driveLeft, encoderPort, dgtl7)
#pragma config(Motor,  port9,           Ball_Intake_2, tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port10,          Chasis_L1,     tmotorVex393HighSpeed_HBridge, openLoop, reversed, driveLeft, encoderPort, dgtl7)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//