#pragma config(UART_Usage, UART1, uartVEXLCD, baudRate19200, IOPins, None, None)
#pragma config(UART_Usage, UART2, uartNotUsed, baudRate4800, IOPins, None, None)
#pragma config(Sensor, in1,    Catapult_Pot,   sensorPotentiometer)
#pragma config(Sensor, in2,    power,          sensorAnalog)
#pragma config(Motor,  port1,           Chasis_L1,     tmotorVex393HighSpeed_HBridge, openLoop, reversed, driveLeft, encoderPort, dgtl3)
#pragma config(Motor,  port2,           Chasis_L2,     tmotorVex393HighSpeed_MC29, openLoop, driveLeft, encoderPort, dgtl3)
#pragma config(Motor,  port3,           Chasis_L3,     tmotorVex393HighSpeed_MC29, openLoop, driveLeft, encoderPort, dgtl3)
#pragma config(Motor,  port4,           Ball_Intake,   tmotorVex393TurboSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           Catapult_1,    tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           Catapult_2,    tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port7,           Descorer,      tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port8,           Chasis_R3,     tmotorVex393HighSpeed_MC29, openLoop, reversed, driveRight)
#pragma config(Motor,  port9,           Chasis_R2,     tmotorVex393HighSpeed_MC29, openLoop, reversed, driveRight)
#pragma config(Motor,  port10,          Chasis_R1,     tmotorVex393HighSpeed_HBridge, openLoop, driveRight)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
// Sensor(s) detected, nice!
// Integeated Encoder Module(s) detected, sweet!
// Begin recording in:  3 . . . . 2 . . . . 1 . . . .
// BEGIN AUTONOMOUS RECORDING
/*<<<<---- START COPY ----------------------------------------------------------------------*/
int R_Freq = 50;
int R_Batt = 8628;
int P_Freq = R_Freq * (R_Batt / nImmediateBatteryLevel)
// Initial values for Sensors: in 1 = 854  in 2 = 2288
// Initial values for IMEs: port 1 = 0  port 2 = 0  port 3 = 0

// 50  Sensors: in 2 = 2144  IMEs: no change
motor[ port4 ] = 127;
wait1Msec( P_Freq * 13 );		// wait 650

// 700  Sensors: in 2 = 2236  IMEs: no change
motor[ port1 ] = 127;
motor[ port2 ] = 127;
motor[ port3 ] = 127;
motor[ port8 ] = 127;
motor[ port9 ] = 127;
motor[ port10 ] = 127;
wait1Msec( P_Freq * 19 );		// wait 950

// 1650  Sensors: in 2 = 2247  IMEs: no change
motor[ port1 ] = 0;
motor[ port2 ] = 0;
motor[ port3 ] = 0;
motor[ port8 ] = 0;
motor[ port9 ] = 0;
motor[ port10 ] = 0;
wait1Msec( P_Freq * 2 );		// wait 100

// 1750  Sensors: in 1 = 813  in 2 = 2238  IMEs: no change
motor[ port1 ] = -127;
motor[ port2 ] = -127;
motor[ port3 ] = -127;
motor[ port8 ] = -127;
motor[ port9 ] = -127;
motor[ port10 ] = -127;
wait1Msec( P_Freq * 21 );		// wait 1050

// 2800  Sensors: in 1 = 870  in 2 = 2201  IMEs: no change
motor[ port1 ] = 0;
motor[ port2 ] = 0;
motor[ port3 ] = 0;
motor[ port8 ] = 0;
motor[ port9 ] = 0;
motor[ port10 ] = 0;
wait1Msec( P_Freq * 20 );		// wait 1000

// 3800  Sensors: in 2 = 2261  IMEs: no change
motor[ port4 ] = 0;
wait1Msec( P_Freq * 10 );		// wait 500

// 4300  Sensors: in 1 = 864  in 2 = 2310  IMEs: no change
motor[ port1 ] = 127;
motor[ port2 ] = 127;
motor[ port3 ] = 127;
motor[ port8 ] = 127;
motor[ port9 ] = 127;
motor[ port10 ] = 127;
wait1Msec( P_Freq * 3 );		// wait 150

// 4450  Sensors: in 1 = 868  IMEs: no change
motor[ port1 ] = 0;
motor[ port2 ] = 0;
motor[ port3 ] = 0;
motor[ port8 ] = 0;
motor[ port9 ] = 0;
motor[ port10 ] = 0;
wait1Msec( P_Freq * 3 );		// wait 150

// 4600  Sensors: no change  IMEs: no change
motor[ port1 ] = 7;
motor[ port2 ] = 7;
motor[ port3 ] = 7;
wait1Msec( P_Freq * 3 );		// wait 150

// 4750  Sensors: no change  IMEs: no change
motor[ port1 ] = 20;
motor[ port2 ] = 20;
motor[ port3 ] = 20;
motor[ port8 ] = -12;
motor[ port9 ] = -12;
motor[ port10 ] = -12;
wait1Msec( P_Freq * 1 );		// wait 50

// 4800  Sensors: no change  IMEs: no change
motor[ port1 ] = 59;
motor[ port2 ] = 59;
motor[ port3 ] = 59;
motor[ port8 ] = -75;
motor[ port9 ] = -75;
motor[ port10 ] = -75;
wait1Msec( P_Freq * 4 );		// wait 200

// 5000  Sensors: no change  IMEs: no change
motor[ port1 ] = 6;
motor[ port2 ] = 6;
motor[ port3 ] = 6;
motor[ port8 ] = 1;
motor[ port9 ] = 1;
motor[ port10 ] = 1;
wait1Msec( P_Freq * 1 );		// wait 50

// 5050  Sensors: no change  IMEs: no change
motor[ port1 ] = 1;
motor[ port2 ] = 1;
motor[ port3 ] = 1;
wait1Msec( P_Freq * 5 );		// wait 250

// 5300  Sensors: no change  IMEs: no change
motor[ port8 ] = -21;
motor[ port9 ] = -21;
motor[ port10 ] = -21;
wait1Msec( P_Freq * 1 );		// wait 50

// 5350  Sensors: no change  IMEs: no change
motor[ port1 ] = -20;
motor[ port2 ] = -20;
motor[ port3 ] = -20;
motor[ port8 ] = -51;
motor[ port9 ] = -51;
motor[ port10 ] = -51;
wait1Msec( P_Freq * 1 );		// wait 50

// 5400  Sensors: no change  IMEs: no change
motor[ port1 ] = -52;
motor[ port2 ] = -52;
motor[ port3 ] = -52;
motor[ port8 ] = -88;
motor[ port9 ] = -88;
motor[ port10 ] = -88;
wait1Msec( P_Freq * 1 );		// wait 50

// 5450  Sensors: no change  IMEs: no change
motor[ port8 ] = -85;
motor[ port9 ] = -85;
motor[ port10 ] = -85;
wait1Msec( P_Freq * 1 );		// wait 50

// 5500  Sensors: no change  IMEs: no change
motor[ port8 ] = -67;
motor[ port9 ] = -67;
motor[ port10 ] = -67;
wait1Msec( P_Freq * 1 );		// wait 50

// 5550  Sensors: in 2 = 2313  IMEs: no change
motor[ port1 ] = -45;
motor[ port2 ] = -45;
motor[ port3 ] = -45;
wait1Msec( P_Freq * 1 );		// wait 50

// 5600  Sensors: no change  IMEs: no change
motor[ port1 ] = -21;
motor[ port2 ] = -21;
motor[ port3 ] = -21;
motor[ port8 ] = -63;
motor[ port9 ] = -63;
motor[ port10 ] = -63;
wait1Msec( P_Freq * 1 );		// wait 50

// 5650  Sensors: no change  IMEs: no change
motor[ port1 ] = -6;
motor[ port2 ] = -6;
motor[ port3 ] = -6;
motor[ port8 ] = -56;
motor[ port9 ] = -56;
motor[ port10 ] = -56;
wait1Msec( P_Freq * 1 );		// wait 50

// 5700  Sensors: no change  IMEs: no change
motor[ port1 ] = 1;
motor[ port2 ] = 1;
motor[ port3 ] = 1;
motor[ port8 ] = -49;
motor[ port9 ] = -49;
motor[ port10 ] = -49;
wait1Msec( P_Freq * 1 );		// wait 50

// 5750  Sensors: no change  IMEs: no change
motor[ port1 ] = 28;
motor[ port2 ] = 28;
motor[ port8 ] = -31;
motor[ port9 ] = -31;
motor[ port10 ] = -31;
wait1Msec( P_Freq * 1 );		// wait 50

// 5800  Sensors: no change  IMEs: no change
motor[ port1 ] = 22;
motor[ port2 ] = 22;
motor[ port3 ] = 22;
motor[ port8 ] = -22;
motor[ port9 ] = -22;
motor[ port10 ] = -22;
wait1Msec( P_Freq * 1 );		// wait 50

// 5850  Sensors: no change  IMEs: no change
motor[ port1 ] = 17;
motor[ port2 ] = 17;
motor[ port3 ] = 17;
motor[ port8 ] = -8;
motor[ port9 ] = -8;
motor[ port10 ] = -8;
wait1Msec( P_Freq * 2 );		// wait 100

// 5950  Sensors: no change  IMEs: no change
motor[ port1 ] = 7;
motor[ port2 ] = 7;
motor[ port3 ] = 7;
wait1Msec( P_Freq * 3 );		// wait 150

// 6100  Sensors: no change  IMEs: no change
motor[ port1 ] = 1;
motor[ port2 ] = 1;
motor[ port3 ] = 1;
wait1Msec( P_Freq * 1 );		// wait 50

// 6150  Sensors: no change  IMEs: no change
motor[ port1 ] = -28;
motor[ port2 ] = -28;
motor[ port3 ] = -28;
motor[ port8 ] = -21;
motor[ port9 ] = -21;
motor[ port10 ] = -21;
wait1Msec( P_Freq * 1 );		// wait 50

// 6200  Sensors: no change  IMEs: no change
motor[ port1 ] = -33;
motor[ port2 ] = -33;
motor[ port3 ] = -33;
motor[ port8 ] = -29;
motor[ port9 ] = -29;
motor[ port10 ] = -29;
wait1Msec( P_Freq * 1 );		// wait 50

// 6250  Sensors: no change  IMEs: no change
motor[ port8 ] = -34;
motor[ port9 ] = -34;
motor[ port10 ] = -34;
wait1Msec( P_Freq * 2 );		// wait 100

// 6350  Sensors: no change  IMEs: no change
motor[ port1 ] = -6;
motor[ port2 ] = -6;
motor[ port3 ] = -6;
wait1Msec( P_Freq * 1 );		// wait 50

// 6400  Sensors: no change  IMEs: no change
motor[ port1 ] = 1;
motor[ port2 ] = 1;
motor[ port3 ] = 1;
wait1Msec( P_Freq * 1 );		// wait 50

// 6450  Sensors: no change  IMEs: no change
motor[ port8 ] = -31;
motor[ port9 ] = -31;
motor[ port10 ] = -31;
wait1Msec( P_Freq * 1 );		// wait 50

// 6500  Sensors: no change  IMEs: no change
motor[ port8 ] = -26;
motor[ port9 ] = -26;
motor[ port10 ] = -26;
wait1Msec( P_Freq * 1 );		// wait 50

// 6550  Sensors: no change  IMEs: no change
motor[ port1 ] = 24;
motor[ port2 ] = 24;
motor[ port3 ] = 24;
motor[ port8 ] = -9;
motor[ port9 ] = -9;
motor[ port10 ] = -9;
wait1Msec( P_Freq * 1 );		// wait 50

// 6600  Sensors: no change  IMEs: no change
motor[ port1 ] = 35;
motor[ port2 ] = 35;
motor[ port3 ] = 35;
wait1Msec( P_Freq * 1 );		// wait 50

// 6650  Sensors: no change  IMEs: no change
motor[ port1 ] = 8;
motor[ port2 ] = 8;
motor[ port3 ] = 8;
wait1Msec( P_Freq * 5 );		// wait 250

// 6900  Sensors: no change  IMEs: no change
motor[ port1 ] = 1;
motor[ port2 ] = 1;
motor[ port3 ] = 1;
wait1Msec( P_Freq * 1 );		// wait 50

// 6950  Sensors: no change  IMEs: no change
motor[ port1 ] = -15;
motor[ port2 ] = -15;
motor[ port3 ] = -15;
wait1Msec( P_Freq * 1 );		// wait 50

// 7000  Sensors: no change  IMEs: no change
motor[ port1 ] = 1;
motor[ port2 ] = 1;
motor[ port3 ] = 1;
wait1Msec( P_Freq * 4 );		// wait 200

// 7200  Sensors: no change  IMEs: no change
motor[ port1 ] = 8;
motor[ port2 ] = 8;
motor[ port3 ] = 8;
wait1Msec( P_Freq * 13 );		// wait 650

// 7850  Sensors: in 2 = 2316  IMEs: no change
motor[ port5 ] = 127;
motor[ port6 ] = 127;
wait1Msec( P_Freq * 14 );		// wait 700

// 8550  Sensors: in 1 = 0  in 2 = 2241  IMEs: no change
motor[ port1 ] = 1;
motor[ port2 ] = 1;
motor[ port3 ] = 1;
wait1Msec( P_Freq * 1 );		// wait 50

// 8600  Sensors: in 2 = 2226  IMEs: no change
motor[ port1 ] = -48;
motor[ port2 ] = -48;
motor[ port3 ] = -48;
motor[ port8 ] = -30;
motor[ port9 ] = -30;
motor[ port10 ] = -30;
wait1Msec( P_Freq * 2 );		// wait 100

// 8700  Sensors: in 1 = 69  in 2 = 2211  IMEs: no change
motor[ port1 ] = -127;
motor[ port2 ] = -127;
motor[ port3 ] = -127;
motor[ port8 ] = -119;
motor[ port9 ] = -119;
motor[ port10 ] = -119;
wait1Msec( P_Freq * 7 );		// wait 350

// 9050  Sensors: in 1 = 745  in 2 = 2225  IMEs: no change
motor[ port5 ] = 0;
motor[ port6 ] = 0;



}
