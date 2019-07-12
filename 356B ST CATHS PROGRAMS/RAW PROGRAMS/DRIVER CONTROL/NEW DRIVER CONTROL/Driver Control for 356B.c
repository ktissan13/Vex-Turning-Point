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
while(true){

 // Drive button to flip front and back
 if (vexRT[Btn5U] ==1){
  driveL(-vexRT[Ch2]);
 	driveR(vexRT[Ch3]);
 }
 else{
 driveL(vexRT[Ch3]);
 driveR(-vexRT[Ch2]);
 }

 // Button for the lift up and down
 if (vexRT[Btn6UXmtr2] == 1){
 	lift(120);
 }
 else if(vexRT[Btn6DXmtr2] == 1){
 	lift(-120);
 }
 else if(vexRT[Btn8LXmtr2] == 1){
   lift(-20);
 }
 else{
 	lift(0);
 }

 // Button for the shooter for top flag and middle flag
 // This is for the top flag running shooter at full speed
 if (vexRT[Btn5UXmtr2] == 1){
 	shooter(127);
 }
 // This is for the middle flag running shooter at 100 speed
 else if(vexRT[Btn5DXmtr2] == 1){
 	shooter(100);
 }
 // If none of those buttons are pressed the shooter will not continue
 else{
 	shooter(0);
 }

 // Button for the flipper/claw
 // This is to flip the cap while it is in the claw
 if (vexRT[Btn7UXmtr2] == 1){
 	flipper(45);
 }
 else if (vexRT [Btn7DXmtr2] == 1){
 	flipper (-45);
 }
 else{
 	flipper(0);
 }

 // Button for the rubberband intake to bring up to the shooter
 // So the intake can pick up the balls
 if (vexRT[Btn8UXmtr2] == 1){
 	_intake(120);
 }
 // So the intake will let the balls out
 else if(vexRT[Btn8DXmtr2] == 1){
 	_intake(-120);
 }
 else{
 	_intake(0);
 }

 // Brake for the chassis
 if (vexRT[Btn6U] == 1){
   motor[C_F_Left] = -30;
   motor[ycable2DriveR] = 20;
   motor[C_F_Right] = -30;
   motor[ycable1DriveL] = 20;
 }
 else{
   motor[C_F_Left] = 0;
   motor[ycable2DriveR] = 0;
   motor[C_F_Right] = 0;
   motor[ycable1DriveL] = 0;
 }

// ycable 1 is Left side
// ycable 2 is Right side
}
}
