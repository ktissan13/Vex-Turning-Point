// -------------------------------------Autonomous-------------------------------------

void Parking_Red_Top(){
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

	// 250  Sensors: no change  IMEs: no change
	motor[ port8 ] = 11;
	motor[ port9 ] = 11;
	motor[ port10 ] = 11;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 300  Sensors: no change  IMEs: no change
	motor[ port1 ] = 15;
	motor[ port2 ] = 15;
	motor[ port3 ] = 15;
	motor[ port8 ] = 25;
	motor[ port9 ] = 25;
	motor[ port10 ] = 25;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 400  Sensors: no change  IMEs: no change
	motor[ port1 ] = 24;
	motor[ port2 ] = 24;
	motor[ port3 ] = 24;
	motor[ port8 ] = 31;
	motor[ port9 ] = 31;
	motor[ port10 ] = 31;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 450  Sensors: no change  IMEs: no change
	motor[ port1 ] = 27;
	motor[ port2 ] = 27;
	motor[ port3 ] = 27;
	motor[ port8 ] = 35;
	motor[ port9 ] = 35;
	motor[ port10 ] = 35;
	wait1Msec( P_Freq * 12 );		// wait 600

	// 1050  Sensors: no change  IMEs: no change
	motor[ port1 ] = 30;
	motor[ port2 ] = 30;
	motor[ port3 ] = 30;
	motor[ port8 ] = 25;
	motor[ port9 ] = 25;
	motor[ port10 ] = 25;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 1100  Sensors: no change  IMEs: no change
	motor[ port8 ] = 1;
	motor[ port9 ] = 1;
	motor[ port10 ] = 1;
	wait1Msec( P_Freq * 4 );		// wait 200

	// 1300  Sensors: no change  IMEs: no change
	motor[ port8 ] = -13;
	motor[ port9 ] = -13;
	motor[ port10 ] = -13;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 1350  Sensors: no change  IMEs: no change
	motor[ port8 ] = -21;
	motor[ port9 ] = -21;
	motor[ port10 ] = -21;
	wait1Msec( P_Freq * 6 );		// wait 300

	// 1650  Sensors: no change  IMEs: no change
	motor[ port8 ] = -28;
	motor[ port9 ] = -28;
	motor[ port10 ] = -28;
	wait1Msec( P_Freq * 3 );		// wait 150

	// 1800  Sensors: no change  IMEs: no change
	motor[ port8 ] = -33;
	motor[ port9 ] = -33;
	motor[ port10 ] = -33;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 1900  Sensors: no change  IMEs: no change
	motor[ port8 ] = -45;
	motor[ port9 ] = -45;
	motor[ port10 ] = -45;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 1950  Sensors: no change  IMEs: no change
	motor[ port8 ] = -61;
	motor[ port9 ] = -61;
	motor[ port10 ] = -61;
	wait1Msec( P_Freq * 4 );		// wait 200

	// 2150  Sensors: no change  IMEs: no change
	motor[ port1 ] = 11;
	motor[ port2 ] = 11;
	motor[ port3 ] = 11;
	motor[ port8 ] = 1;
	motor[ port9 ] = 1;
	motor[ port10 ] = 1;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 2200  Sensors: no change  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	motor[ port8 ] = 12;
	motor[ port9 ] = 12;
	motor[ port10 ] = 12;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 2250  Sensors: no change  IMEs: no change
	motor[ port8 ] = 26;
	motor[ port9 ] = 26;
	motor[ port10 ] = 26;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 2300  Sensors: no change  IMEs: no change
	motor[ port8 ] = 34;
	motor[ port9 ] = 34;
	motor[ port10 ] = 34;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 2350  Sensors: no change  IMEs: no change
	motor[ port1 ] = 11;
	motor[ port2 ] = 11;
	motor[ port3 ] = 11;
	motor[ port8 ] = 50;
	motor[ port9 ] = 50;
	motor[ port10 ] = 50;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 2450  Sensors: in 1 = 777  IMEs: no change
	motor[ port1 ] = 62;
	motor[ port2 ] = 62;
	motor[ port3 ] = 62;
	motor[ port8 ] = 108;
	motor[ port9 ] = 108;
	motor[ port10 ] = 108;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 2500  Sensors: no change  IMEs: no change
	motor[ port1 ] = 113;
	motor[ port2 ] = 113;
	motor[ port3 ] = 113;
	motor[ port8 ] = 127;
	motor[ port9 ] = 127;
	motor[ port10 ] = 127;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 2550  Sensors: no change  IMEs: no change
	motor[ port1 ] = 117;
	motor[ port2 ] = 117;
	motor[ port3 ] = 117;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 2650  Sensors: no change  IMEs: no change
	motor[ port1 ] = 120;
	motor[ port2 ] = 120;
	motor[ port3 ] = 120;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 2700  Sensors: no change  IMEs: no change
	motor[ port1 ] = 123;
	motor[ port2 ] = 123;
	motor[ port3 ] = 123;
	motor[ port8 ] = -108;
	motor[ port9 ] = -108;
	motor[ port10 ] = -108;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 2800  Sensors: no change  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	motor[ port8 ] = -90;
	motor[ port9 ] = -90;
	motor[ port10 ] = -90;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 2900  Sensors: no change  IMEs: no change
	motor[ port8 ] = 1;
	motor[ port9 ] = 1;
	motor[ port10 ] = 1;
	wait1Msec( P_Freq * 3 );		// wait 150

	// 3050  Sensors: no change  IMEs: no change
	motor[ port1 ] = 31;
	motor[ port2 ] = 31;
	motor[ port3 ] = 31;
	motor[ port8 ] = 56;
	motor[ port9 ] = 56;
	motor[ port10 ] = 56;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3100  Sensors: no change  IMEs: no change
	motor[ port1 ] = 53;
	motor[ port2 ] = 53;
	motor[ port3 ] = 53;
	motor[ port8 ] = 75;
	motor[ port9 ] = 75;
	motor[ port10 ] = 75;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3150  Sensors: in 1 = 772  IMEs: no change
	motor[ port1 ] = 110;
	motor[ port2 ] = 110;
	motor[ port3 ] = 110;
	motor[ port8 ] = 127;
	motor[ port9 ] = 127;
	motor[ port10 ] = 127;
	wait1Msec( P_Freq * 3 );		// wait 150

	// 3300  Sensors: in 1 = 777  IMEs: no change
	motor[ port1 ] = 113;
	motor[ port2 ] = 113;
	motor[ port3 ] = 113;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3350  Sensors: in 1 = 771  IMEs: no change
	motor[ port1 ] = 118;
	motor[ port2 ] = 118;
	motor[ port3 ] = 119;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 3450  Sensors: no change  IMEs: no change
	motor[ port1 ] = 14;
	motor[ port2 ] = 14;
	motor[ port3 ] = 14;
	motor[ port8 ] = -34;
	motor[ port9 ] = -34;
	motor[ port10 ] = -34;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3500  Sensors: in 1 = 776  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	motor[ port8 ] = 1;
	motor[ port9 ] = 1;
	motor[ port10 ] = 1;
	wait1Msec( P_Freq * 11 );		// wait 550

	// 4050  Sensors: no change  IMEs: no change
	motor[ port1 ] = -8;
	motor[ port2 ] = -8;
	motor[ port3 ] = -8;
	motor[ port8 ] = -6;
	motor[ port9 ] = -6;
	motor[ port10 ] = -6;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4100  Sensors: no change  IMEs: no change
	motor[ port1 ] = -12;
	motor[ port2 ] = -12;
	motor[ port3 ] = -12;
	motor[ port8 ] = -10;
	motor[ port9 ] = -10;
	motor[ port10 ] = -10;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4150  Sensors: in 1 = 773  IMEs: no change
	motor[ port1 ] = -127;
	motor[ port2 ] = -127;
	motor[ port3 ] = -127;
	motor[ port8 ] = -127;
	motor[ port9 ] = -127;
	motor[ port10 ] = -127;
	wait1Msec( P_Freq * 39 );		// wait 1950

	// 6100  Sensors: no change  IMEs: no change
	motor[ port1 ] = 18;
	motor[ port2 ] = 18;
	motor[ port3 ] = 18;
	motor[ port8 ] = 20;
	motor[ port9 ] = 20;
	motor[ port10 ] = 20;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 6150  Sensors: in 1 = 776  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	motor[ port8 ] = 1;
	motor[ port9 ] = 1;
	motor[ port10 ] = 1;
}

void Parking_Red_Bottom(){
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

	// 50  Sensors: no change  IMEs: no change
	motor[ port1 ] = -6;
	motor[ port2 ] = -6;
	motor[ port3 ] = -6;
	motor[ port8 ] = -7;
	motor[ port9 ] = -7;
	motor[ port10 ] = -7;
	wait1Msec( P_Freq * 17 );		// wait 850

	// 900  Sensors: no change  IMEs: no change
	motor[ port1 ] = -9;
	motor[ port2 ] = -9;
	motor[ port3 ] = -9;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 950  Sensors: no change  IMEs: no change
	motor[ port1 ] = -31;
	motor[ port2 ] = -31;
	motor[ port3 ] = -31;
	motor[ port8 ] = -16;
	motor[ port9 ] = -16;
	motor[ port10 ] = -16;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 1000  Sensors: no change  IMEs: no change
	motor[ port1 ] = -51;
	motor[ port2 ] = -51;
	motor[ port3 ] = -51;
	motor[ port8 ] = -41;
	motor[ port9 ] = -41;
	motor[ port10 ] = -41;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 1050  Sensors: no change  IMEs: no change
	motor[ port1 ] = -78;
	motor[ port2 ] = -78;
	motor[ port3 ] = -78;
	motor[ port8 ] = -79;
	motor[ port9 ] = -79;
	motor[ port10 ] = -79;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 1100  Sensors: no change  IMEs: no change
	motor[ port8 ] = -85;
	motor[ port9 ] = -85;
	motor[ port10 ] = -85;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 1150  Sensors: no change  IMEs: no change
	motor[ port1 ] = -86;
	motor[ port2 ] = -86;
	motor[ port3 ] = -86;
	wait1Msec( P_Freq * 4 );		// wait 200

	// 1350  Sensors: no change  IMEs: no change
	motor[ port1 ] = -73;
	motor[ port2 ] = -73;
	motor[ port3 ] = -73;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 1400  Sensors: no change  IMEs: no change
	motor[ port1 ] = -65;
	motor[ port2 ] = -65;
	motor[ port3 ] = -65;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 1450  Sensors: no change  IMEs: no change
	motor[ port1 ] = -28;
	motor[ port2 ] = -28;
	motor[ port3 ] = -28;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 1500  Sensors: no change  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 1550  Sensors: no change  IMEs: no change
	motor[ port1 ] = 43;
	motor[ port2 ] = 43;
	motor[ port3 ] = 43;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 1650  Sensors: no change  IMEs: no change
	motor[ port8 ] = -94;
	motor[ port9 ] = -94;
	motor[ port10 ] = -94;
	wait1Msec( P_Freq * 3 );		// wait 150

	// 1800  Sensors: no change  IMEs: no change
	motor[ port1 ] = 13;
	motor[ port2 ] = 13;
	motor[ port3 ] = 13;
	motor[ port8 ] = -97;
	motor[ port9 ] = -97;
	motor[ port10 ] = -97;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 1850  Sensors: no change  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 1950  Sensors: no change  IMEs: no change
	motor[ port8 ] = 1;
	motor[ port9 ] = 1;
	motor[ port10 ] = 1;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 2050  Sensors: no change  IMEs: no change
	motor[ port8 ] = -50;
	motor[ port9 ] = -50;
	motor[ port10 ] = -50;
	wait1Msec( P_Freq * 3 );		// wait 150

	// 2200  Sensors: no change  IMEs: no change
	motor[ port8 ] = 1;
	motor[ port9 ] = 1;
	motor[ port10 ] = 1;
	wait1Msec( P_Freq * 3 );		// wait 150

	// 2350  Sensors: no change  IMEs: no change
	motor[ port8 ] = 22;
	motor[ port9 ] = 22;
	motor[ port10 ] = 22;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 2400  Sensors: in 1 = 830  IMEs: no change
	motor[ port1 ] = 77;
	motor[ port2 ] = 77;
	motor[ port3 ] = 77;
	motor[ port8 ] = 127;
	motor[ port9 ] = 127;
	motor[ port10 ] = 127;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 2450  Sensors: no change  IMEs: no change
	motor[ port1 ] = 120;
	motor[ port2 ] = 120;
	motor[ port3 ] = 120;
	wait1Msec( P_Freq * 5 );		// wait 250

	// 2700  Sensors: in 1 = 835  IMEs: no change
	motor[ port1 ] = 108;
	motor[ port2 ] = 108;
	motor[ port3 ] = 108;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 2750  Sensors: no change  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	motor[ port8 ] = 1;
	motor[ port9 ] = 1;
	motor[ port10 ] = 1;
	wait1Msec( P_Freq * 5 );		// wait 250

	// 3000  Sensors: no change  IMEs: no change
	motor[ port1 ] = -14;
	motor[ port2 ] = -14;
	motor[ port3 ] = -14;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3050  Sensors: no change  IMEs: no change
	motor[ port1 ] = -33;
	motor[ port2 ] = -33;
	motor[ port3 ] = -33;
	motor[ port8 ] = -25;
	motor[ port9 ] = -25;
	motor[ port10 ] = -25;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 3150  Sensors: no change  IMEs: no change
	motor[ port1 ] = -42;
	motor[ port2 ] = -42;
	motor[ port3 ] = -42;
	motor[ port8 ] = -48;
	motor[ port9 ] = -48;
	motor[ port10 ] = -48;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3200  Sensors: no change  IMEs: no change
	motor[ port1 ] = -52;
	motor[ port2 ] = -52;
	motor[ port3 ] = -52;
	motor[ port8 ] = -53;
	motor[ port9 ] = -53;
	motor[ port10 ] = -53;
	wait1Msec( P_Freq * 8 );		// wait 400

	// 3600  Sensors: no change  IMEs: no change
	motor[ port1 ] = -39;
	motor[ port2 ] = -39;
	motor[ port3 ] = -39;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 3700  Sensors: no change  IMEs: no change
	motor[ port1 ] = -19;
	motor[ port2 ] = -19;
	motor[ port3 ] = -19;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3750  Sensors: no change  IMEs: no change
	motor[ port1 ] = -13;
	motor[ port2 ] = -13;
	motor[ port3 ] = -13;
	motor[ port8 ] = -58;
	motor[ port9 ] = -58;
	motor[ port10 ] = -58;
	wait1Msec( P_Freq * 4 );		// wait 200

	// 3950  Sensors: no change  IMEs: no change
	motor[ port1 ] = -22;
	motor[ port2 ] = -22;
	motor[ port3 ] = -22;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 4050  Sensors: no change  IMEs: no change
	motor[ port1 ] = -33;
	motor[ port2 ] = -33;
	motor[ port3 ] = -33;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 4150  Sensors: no change  IMEs: no change
	motor[ port1 ] = -40;
	motor[ port2 ] = -40;
	motor[ port3 ] = -40;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4200  Sensors: no change  IMEs: no change
	motor[ port1 ] = -50;
	motor[ port2 ] = -50;
	motor[ port3 ] = -50;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4250  Sensors: no change  IMEs: no change
	motor[ port1 ] = -74;
	motor[ port2 ] = -74;
	motor[ port3 ] = -74;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4300  Sensors: no change  IMEs: no change
	motor[ port1 ] = -93;
	motor[ port2 ] = -93;
	motor[ port3 ] = -93;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4350  Sensors: in 1 = 832  IMEs: no change
	motor[ port1 ] = -107;
	motor[ port2 ] = -107;
	motor[ port3 ] = -107;
	motor[ port8 ] = -66;
	motor[ port9 ] = -66;
	motor[ port10 ] = -66;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4400  Sensors: no change  IMEs: no change
	motor[ port1 ] = -114;
	motor[ port2 ] = -114;
	motor[ port3 ] = -114;
	motor[ port8 ] = -87;
	motor[ port9 ] = -87;
	motor[ port10 ] = -87;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4450  Sensors: no change  IMEs: no change
	motor[ port1 ] = -121;
	motor[ port2 ] = -121;
	motor[ port3 ] = -121;
	motor[ port8 ] = -97;
	motor[ port9 ] = -97;
	motor[ port10 ] = -97;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4500  Sensors: no change  IMEs: no change
	motor[ port1 ] = -127;
	motor[ port2 ] = -127;
	motor[ port3 ] = -127;
	motor[ port8 ] = -108;
	motor[ port9 ] = -108;
	motor[ port10 ] = -108;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4550  Sensors: in 1 = 836  IMEs: no change
	motor[ port8 ] = -113;
	motor[ port9 ] = -113;
	motor[ port10 ] = -113;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4600  Sensors: no change  IMEs: no change
	motor[ port8 ] = -118;
	motor[ port9 ] = -118;
	motor[ port10 ] = -118;
	wait1Msec( P_Freq * 4 );		// wait 200

	// 4800  Sensors: no change  IMEs: no change
	motor[ port8 ] = -121;
	motor[ port9 ] = -121;
	motor[ port10 ] = -121;
	wait1Msec( P_Freq * 4 );		// wait 200

	// 5000  Sensors: no change  IMEs: no change
	motor[ port8 ] = -124;
	motor[ port9 ] = -124;
	motor[ port10 ] = -124;
	wait1Msec( P_Freq * 3 );		// wait 150

	// 5150  Sensors: no change  IMEs: no change
	motor[ port8 ] = -127;
	motor[ port9 ] = -127;
	motor[ port10 ] = -127;
	wait1Msec( P_Freq * 3 );		// wait 150

	// 5300  Sensors: no change  IMEs: no change
	motor[ port8 ] = -122;
	motor[ port9 ] = -122;
	motor[ port10 ] = -122;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 5350  Sensors: in 1 = 833  IMEs: no change
	motor[ port8 ] = -115;
	motor[ port9 ] = -115;
	motor[ port10 ] = -115;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 5400  Sensors: no change  IMEs: no change
	motor[ port1 ] = -120;
	motor[ port2 ] = -120;
	motor[ port3 ] = -120;
	motor[ port8 ] = 1;
	motor[ port9 ] = 1;
	motor[ port10 ] = 1;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 5500  Sensors: no change  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
}

void Parking_Blue_Top(){
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

	// 50  Sensors: no change  IMEs: no change
	motor[ port8 ] = -6;
	motor[ port9 ] = -6;
	motor[ port10 ] = -6;
	wait1Msec( P_Freq * 40 );		// wait 2000

	// 2050  Sensors: no change  IMEs: no change
	motor[ port1 ] = 12;
	motor[ port2 ] = 12;
	motor[ port3 ] = 12;
	motor[ port8 ] = 1;
	motor[ port9 ] = 1;
	motor[ port10 ] = 1;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 2100  Sensors: no change  IMEs: no change
	motor[ port1 ] = 38;
	motor[ port2 ] = 38;
	motor[ port3 ] = 38;
	motor[ port8 ] = 21;
	motor[ port9 ] = 21;
	motor[ port10 ] = 21;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 2200  Sensors: no change  IMEs: no change
	motor[ port1 ] = 51;
	motor[ port2 ] = 51;
	motor[ port3 ] = 51;
	motor[ port8 ] = 44;
	motor[ port9 ] = 44;
	motor[ port10 ] = 44;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 2250  Sensors: no change  IMEs: no change
	motor[ port1 ] = 65;
	motor[ port2 ] = 65;
	motor[ port3 ] = 65;
	motor[ port8 ] = 53;
	motor[ port9 ] = 53;
	motor[ port10 ] = 53;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 2350  Sensors: no change  IMEs: no change
	motor[ port1 ] = 74;
	motor[ port2 ] = 74;
	motor[ port3 ] = 74;
	wait1Msec( P_Freq * 3 );		// wait 150

	// 2500  Sensors: no change  IMEs: no change
	motor[ port1 ] = 70;
	motor[ port2 ] = 70;
	motor[ port3 ] = 70;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 2600  Sensors: no change  IMEs: no change
	motor[ port1 ] = 61;
	motor[ port2 ] = 61;
	motor[ port3 ] = 61;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 2700  Sensors: no change  IMEs: no change
	motor[ port1 ] = 27;
	motor[ port2 ] = 27;
	motor[ port3 ] = 27;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 2750  Sensors: no change  IMEs: no change
	motor[ port1 ] = 6;
	motor[ port2 ] = 6;
	motor[ port3 ] = 6;
	motor[ port8 ] = 59;
	motor[ port9 ] = 59;
	motor[ port10 ] = 59;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 2800  Sensors: no change  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	motor[ port8 ] = 62;
	motor[ port9 ] = 62;
	motor[ port10 ] = 62;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 2850  Sensors: no change  IMEs: no change
	motor[ port1 ] = -8;
	motor[ port2 ] = -8;
	motor[ port3 ] = -8;
	motor[ port8 ] = 68;
	motor[ port9 ] = 68;
	motor[ port10 ] = 68;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 2950  Sensors: no change  IMEs: no change
	motor[ port1 ] = -20;
	motor[ port2 ] = -20;
	motor[ port3 ] = -20;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3000  Sensors: no change  IMEs: no change
	motor[ port1 ] = -26;
	motor[ port2 ] = -26;
	motor[ port3 ] = -26;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3050  Sensors: no change  IMEs: no change
	motor[ port1 ] = -33;
	motor[ port2 ] = -33;
	motor[ port3 ] = -33;
	motor[ port8 ] = 77;
	motor[ port9 ] = 77;
	motor[ port10 ] = 77;
	wait1Msec( P_Freq * 5 );		// wait 250

	// 3300  Sensors: no change  IMEs: no change
	motor[ port1 ] = -37;
	motor[ port2 ] = -37;
	motor[ port3 ] = -37;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 3400  Sensors: no change  IMEs: no change
	motor[ port1 ] = -43;
	motor[ port2 ] = -43;
	motor[ port3 ] = -43;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3450  Sensors: no change  IMEs: no change
	motor[ port1 ] = -10;
	motor[ port2 ] = -10;
	motor[ port3 ] = -10;
	motor[ port8 ] = 66;
	motor[ port9 ] = 66;
	motor[ port10 ] = 66;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3500  Sensors: no change  IMEs: no change
	motor[ port8 ] = 50;
	motor[ port9 ] = 50;
	motor[ port10 ] = 50;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3550  Sensors: no change  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	motor[ port8 ] = -6;
	motor[ port9 ] = -6;
	motor[ port10 ] = -6;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3600  Sensors: no change  IMEs: no change
	motor[ port1 ] = 14;
	motor[ port2 ] = 14;
	motor[ port3 ] = 14;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3650  Sensors: no change  IMEs: no change
	motor[ port1 ] = 34;
	motor[ port2 ] = 34;
	motor[ port3 ] = 34;
	motor[ port8 ] = 9;
	motor[ port9 ] = 9;
	motor[ port10 ] = 9;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3700  Sensors: no change  IMEs: no change
	motor[ port1 ] = 45;
	motor[ port2 ] = 45;
	motor[ port3 ] = 45;
	motor[ port8 ] = 37;
	motor[ port9 ] = 37;
	motor[ port10 ] = 37;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3750  Sensors: no change  IMEs: no change
	motor[ port1 ] = 82;
	motor[ port2 ] = 82;
	motor[ port3 ] = 82;
	motor[ port8 ] = 87;
	motor[ port9 ] = 87;
	motor[ port10 ] = 87;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3800  Sensors: no change  IMEs: no change
	motor[ port1 ] = 96;
	motor[ port2 ] = 96;
	motor[ port3 ] = 96;
	motor[ port8 ] = 101;
	motor[ port9 ] = 101;
	motor[ port10 ] = 101;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3850  Sensors: no change  IMEs: no change
	motor[ port1 ] = 127;
	motor[ port2 ] = 127;
	motor[ port3 ] = 127;
	motor[ port8 ] = 124;
	motor[ port9 ] = 124;
	motor[ port10 ] = 124;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3900  Sensors: no change  IMEs: no change
	motor[ port8 ] = 127;
	motor[ port9 ] = 127;
	motor[ port10 ] = 127;
	wait1Msec( P_Freq * 3 );		// wait 150

	// 4050  Sensors: in 1 = 890  IMEs: no change
	motor[ port1 ] = 118;
	motor[ port2 ] = 118;
	motor[ port3 ] = 118;
	motor[ port8 ] = 120;
	motor[ port9 ] = 120;
	motor[ port10 ] = 120;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4100  Sensors: no change  IMEs: no change
	motor[ port1 ] = 92;
	motor[ port2 ] = 92;
	motor[ port3 ] = 92;
	motor[ port8 ] = 89;
	motor[ port9 ] = 89;
	motor[ port10 ] = 89;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4150  Sensors: no change  IMEs: no change
	motor[ port1 ] = 7;
	motor[ port2 ] = 7;
	motor[ port3 ] = 7;
	motor[ port8 ] = -5;
	motor[ port9 ] = -5;
	motor[ port10 ] = -5;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4200  Sensors: in 1 = 894  IMEs: no change
	motor[ port8 ] = -11;
	motor[ port9 ] = -11;
	motor[ port10 ] = -11;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4250  Sensors: no change  IMEs: no change
	motor[ port8 ] = -5;
	motor[ port9 ] = -5;
	motor[ port10 ] = -5;
	wait1Msec( P_Freq * 4 );		// wait 200

	// 4450  Sensors: no change  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4500  Sensors: in 1 = 891  IMEs: no change
	motor[ port1 ] = -5;
	motor[ port2 ] = -5;
	motor[ port3 ] = -5;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4550  Sensors: no change  IMEs: no change
	motor[ port8 ] = -25;
	motor[ port9 ] = -25;
	motor[ port10 ] = -25;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4600  Sensors: no change  IMEs: no change
	motor[ port1 ] = -68;
	motor[ port2 ] = -68;
	motor[ port3 ] = -68;
	motor[ port8 ] = -127;
	motor[ port9 ] = -127;
	motor[ port10 ] = -127;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4650  Sensors: no change  IMEs: no change
	motor[ port1 ] = -97;
	motor[ port2 ] = -97;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4700  Sensors: no change  IMEs: no change
	motor[ port1 ] = -127;
	motor[ port2 ] = -127;
	motor[ port3 ] = -127;
	wait1Msec( P_Freq * 32 );		// wait 1600

	// 6300  Sensors: in 1 = 897  IMEs: no change
	motor[ port1 ] = -52;
	motor[ port2 ] = -52;
	motor[ port3 ] = -52;
	motor[ port8 ] = 27;
	motor[ port9 ] = 27;
	motor[ port10 ] = 27;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 6350  Sensors: in 1 = 894  IMEs: no change
	motor[ port1 ] = 57;
	motor[ port2 ] = 57;
	motor[ port3 ] = 57;
	motor[ port8 ] = 42;
	motor[ port9 ] = 42;
	motor[ port10 ] = 42;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 6450  Sensors: in 1 = 890  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	motor[ port8 ] = -6;
	motor[ port9 ] = -6;
	motor[ port10 ] = -6;
}

void Parking_Blue_Bottom(){
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

	// 1700  Sensors: no change  IMEs: no change
	motor[ port1 ] = -9;
	motor[ port2 ] = -9;
	motor[ port3 ] = -9;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 1750  Sensors: no change  IMEs: no change
	motor[ port1 ] = -25;
	motor[ port2 ] = -25;
	motor[ port3 ] = -25;
	motor[ port8 ] = -25;
	motor[ port9 ] = -25;
	motor[ port10 ] = -25;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 1800  Sensors: no change  IMEs: no change
	motor[ port1 ] = -28;
	motor[ port2 ] = -28;
	motor[ port3 ] = -28;
	motor[ port8 ] = -33;
	motor[ port9 ] = -33;
	motor[ port10 ] = -33;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 1850  Sensors: no change  IMEs: no change
	motor[ port1 ] = -44;
	motor[ port2 ] = -44;
	motor[ port3 ] = -44;
	motor[ port8 ] = -55;
	motor[ port9 ] = -55;
	motor[ port10 ] = -55;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 1900  Sensors: no change  IMEs: no change
	motor[ port1 ] = -52;
	motor[ port2 ] = -52;
	motor[ port3 ] = -52;
	wait1Msec( P_Freq * 11 );		// wait 550

	// 2450  Sensors: no change  IMEs: no change
	motor[ port8 ] = -47;
	motor[ port9 ] = -47;
	motor[ port10 ] = -47;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 2550  Sensors: no change  IMEs: no change
	motor[ port1 ] = -68;
	motor[ port2 ] = -68;
	motor[ port3 ] = -68;
	motor[ port8 ] = 32;
	motor[ port9 ] = 32;
	motor[ port10 ] = 32;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 2600  Sensors: no change  IMEs: no change
	motor[ port8 ] = 62;
	motor[ port9 ] = 62;
	motor[ port10 ] = 62;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 2700  Sensors: no change  IMEs: no change
	motor[ port8 ] = 71;
	motor[ port9 ] = 71;
	motor[ port10 ] = 71;
	wait1Msec( P_Freq * 5 );		// wait 250

	// 2950  Sensors: no change  IMEs: no change
	motor[ port8 ] = 76;
	motor[ port9 ] = 76;
	motor[ port10 ] = 76;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3000  Sensors: no change  IMEs: no change
	motor[ port1 ] = -18;
	motor[ port2 ] = -18;
	motor[ port3 ] = -18;
	motor[ port8 ] = 96;
	motor[ port9 ] = 96;
	motor[ port10 ] = 96;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3050  Sensors: no change  IMEs: no change
	motor[ port1 ] = 106;
	motor[ port2 ] = 106;
	motor[ port3 ] = 106;
	motor[ port8 ] = 127;
	motor[ port9 ] = 127;
	motor[ port10 ] = 127;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3100  Sensors: no change  IMEs: no change
	motor[ port1 ] = 127;
	motor[ port2 ] = 127;
	motor[ port3 ] = 127;
	wait1Msec( P_Freq * 10 );		// wait 500

	// 3600  Sensors: in 2 = 2283  IMEs: no change
	motor[ port8 ] = 93;
	motor[ port9 ] = 93;
	motor[ port10 ] = 93;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3650  Sensors: no change  IMEs: no change
	motor[ port1 ] = 79;
	motor[ port2 ] = 79;
	motor[ port3 ] = 79;
	motor[ port8 ] = 89;
	motor[ port9 ] = 89;
	motor[ port10 ] = 89;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 3750  Sensors: no change  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	motor[ port8 ] = -4;
	motor[ port9 ] = -4;
	motor[ port10 ] = -4;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3800  Sensors: in 2 = 2287  IMEs: no change
	motor[ port1 ] = -35;
	motor[ port2 ] = -35;
	motor[ port3 ] = -35;
	motor[ port8 ] = -90;
	motor[ port9 ] = -90;
	motor[ port10 ] = -90;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3850  Sensors: no change  IMEs: no change
	motor[ port1 ] = -98;
	motor[ port2 ] = -98;
	motor[ port3 ] = -98;
	motor[ port8 ] = -127;
	motor[ port9 ] = -127;
	motor[ port10 ] = -127;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3900  Sensors: no change  IMEs: no change
	motor[ port1 ] = -127;
	motor[ port2 ] = -127;
	motor[ port3 ] = -127;
	wait1Msec( P_Freq * 37 );		// wait 1850

	// 5750  Sensors: in 2 = 2292  IMEs: no change
	motor[ port1 ] = -116;
	motor[ port2 ] = -116;
	motor[ port3 ] = -116;
	motor[ port8 ] = -109;
	motor[ port9 ] = -109;
	motor[ port10 ] = -109;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 5850  Sensors: in 2 = 2289  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	motor[ port8 ] = 1;
	motor[ port9 ] = 1;
	motor[ port10 ] = 1;
	wait1Msec( P_Freq * 15 );		// wait 750

	// 6600  Sensors: no change  IMEs: no change
	motor[ port1 ] = 18;
	motor[ port2 ] = 18;
	motor[ port3 ] = 18;
	motor[ port8 ] = 34;
	motor[ port9 ] = 34;
	motor[ port10 ] = 34;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 6650  Sensors: no change  IMEs: no change
	motor[ port1 ] = 10;
	motor[ port2 ] = 10;
	motor[ port3 ] = 10;
	motor[ port8 ] = 7;
	motor[ port9 ] = 7;
	motor[ port10 ] = 7;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 6750  Sensors: no change  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	motor[ port8 ] = 1;
	motor[ port9 ] = 1;
	motor[ port10 ] = 1;
}

void Flags_Red_Top(){
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

	// 50  Sensors: no change  IMEs: no change
	motor[ port1 ] = -7;
	motor[ port2 ] = -7;
	motor[ port3 ] = -7;
	motor[ port8 ] = -7;
	motor[ port9 ] = -7;
	motor[ port10 ] = -7;
	wait1Msec( P_Freq * 12 );		// wait 600

	// 650  Sensors: no change  IMEs: no change
	motor[ port1 ] = -16;
	motor[ port2 ] = -16;
	motor[ port3 ] = -16;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 700  Sensors: no change  IMEs: no change
	motor[ port1 ] = -28;
	motor[ port2 ] = -28;
	motor[ port3 ] = -28;
	motor[ port8 ] = -24;
	motor[ port9 ] = -24;
	motor[ port10 ] = -24;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 800  Sensors: no change  IMEs: no change
	motor[ port1 ] = -36;
	motor[ port2 ] = -36;
	motor[ port3 ] = -36;
	motor[ port8 ] = -41;
	motor[ port9 ] = -41;
	motor[ port10 ] = -41;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 850  Sensors: no change  IMEs: no change
	motor[ port1 ] = -39;
	motor[ port2 ] = -39;
	motor[ port3 ] = -39;
	motor[ port8 ] = -49;
	motor[ port9 ] = -49;
	motor[ port10 ] = -49;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 900  Sensors: no change  IMEs: no change
	motor[ port8 ] = -53;
	motor[ port9 ] = -53;
	motor[ port10 ] = -53;
	wait1Msec( P_Freq * 3 );		// wait 150

	// 1050  Sensors: no change  IMEs: no change
	motor[ port8 ] = -62;
	motor[ port9 ] = -62;
	motor[ port10 ] = -62;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 1100  Sensors: no change  IMEs: no change
	motor[ port1 ] = -42;
	motor[ port2 ] = -42;
	motor[ port3 ] = -42;
	wait1Msec( P_Freq * 3 );		// wait 150

	// 1250  Sensors: no change  IMEs: no change
	motor[ port1 ] = -49;
	motor[ port2 ] = -49;
	motor[ port3 ] = -49;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 1300  Sensors: no change  IMEs: no change
	motor[ port1 ] = -59;
	motor[ port2 ] = -59;
	motor[ port3 ] = -59;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 1350  Sensors: no change  IMEs: no change
	motor[ port1 ] = -70;
	motor[ port2 ] = -70;
	motor[ port3 ] = -70;
	wait1Msec( P_Freq * 12 );		// wait 600

	// 1950  Sensors: no change  IMEs: no change
	motor[ port8 ] = -52;
	motor[ port9 ] = -52;
	motor[ port10 ] = -52;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 2000  Sensors: no change  IMEs: no change
	motor[ port8 ] = -32;
	motor[ port9 ] = -32;
	motor[ port10 ] = -32;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 2050  Sensors: no change  IMEs: no change
	motor[ port1 ] = -10;
	motor[ port2 ] = -10;
	motor[ port3 ] = -10;
	motor[ port8 ] = -20;
	motor[ port9 ] = -20;
	motor[ port10 ] = -20;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 2150  Sensors: no change  IMEs: no change
	motor[ port1 ] = -5;
	motor[ port2 ] = -5;
	motor[ port3 ] = -5;
	motor[ port8 ] = -14;
	motor[ port9 ] = -14;
	motor[ port10 ] = -14;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 2200  Sensors: no change  IMEs: no change
	motor[ port8 ] = -11;
	motor[ port9 ] = -11;
	motor[ port10 ] = -11;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 2300  Sensors: no change  IMEs: no change
	motor[ port8 ] = 1;
	motor[ port9 ] = 1;
	motor[ port10 ] = 1;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 2400  Sensors: in 2 = 2202  IMEs: no change
	motor[ port1 ] = -28;
	motor[ port2 ] = -28;
	motor[ port3 ] = -28;
	motor[ port8 ] = 68;
	motor[ port9 ] = 68;
	motor[ port10 ] = 68;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 2450  Sensors: in 2 = 2205  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	motor[ port8 ] = 39;
	motor[ port9 ] = 39;
	motor[ port10 ] = 39;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 2550  Sensors: no change  IMEs: no change
	motor[ port8 ] = -9;
	motor[ port9 ] = -9;
	motor[ port10 ] = -9;
	wait1Msec( P_Freq * 7 );		// wait 350

	// 2900  Sensors: no change  IMEs: no change
	motor[ port1 ] = 49;
	motor[ port2 ] = 49;
	motor[ port3 ] = 49;
	motor[ port8 ] = -44;
	motor[ port9 ] = -44;
	motor[ port10 ] = -44;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 3000  Sensors: no change  IMEs: no change
	motor[ port1 ] = -6;
	motor[ port2 ] = -6;
	motor[ port3 ] = -6;
	motor[ port8 ] = -50;
	motor[ port9 ] = -50;
	motor[ port10 ] = -50;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3050  Sensors: no change  IMEs: no change
	motor[ port8 ] = -38;
	motor[ port9 ] = -38;
	motor[ port10 ] = -38;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3100  Sensors: no change  IMEs: no change
	motor[ port8 ] = -8;
	motor[ port9 ] = -8;
	motor[ port10 ] = -8;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3150  Sensors: no change  IMEs: no change
	motor[ port5 ] = 127;
	motor[ port6 ] = 127;
	wait1Msec( P_Freq * 5 );		// wait 250

	// 3400  Sensors: in 1 = 790  in 2 = 2101  IMEs: no change
	motor[ port1 ] = -58;
	motor[ port2 ] = -58;
	motor[ port3 ] = -58;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 3500  Sensors: in 1 = 0  in 2 = 2160  IMEs: no change
	motor[ port1 ] = -12;
	motor[ port2 ] = -12;
	motor[ port3 ] = -12;
	motor[ port8 ] = -11;
	motor[ port9 ] = -11;
	motor[ port10 ] = -11;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 3550  Sensors: in 2 = 2163  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	wait1Msec( P_Freq * 8 );		// wait 400

	// 3950  Sensors: in 2 = 2108  IMEs: no change
	motor[ port8 ] = -5;
	motor[ port9 ] = -5;
	motor[ port10 ] = -5;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 4050  Sensors: in 1 = 234  in 2 = 2072  IMEs: no change
	motor[ port1 ] = -9;
	motor[ port2 ] = -9;
	motor[ port3 ] = -9;
	motor[ port8 ] = 9;
	motor[ port9 ] = 9;
	motor[ port10 ] = 9;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4100  Sensors: in 1 = 228  in 2 = 2065  IMEs: no change
	motor[ port8 ] = 42;
	motor[ port9 ] = 42;
	motor[ port10 ] = 42;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4150  Sensors: in 1 = 221  in 2 = 2054  IMEs: no change
	motor[ port1 ] = -25;
	motor[ port2 ] = -25;
	motor[ port3 ] = -25;
	motor[ port8 ] = 96;
	motor[ port9 ] = 96;
	motor[ port10 ] = 96;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4200  Sensors: in 1 = 325  in 2 = 2050  IMEs: no change
	motor[ port1 ] = -31;
	motor[ port2 ] = -31;
	motor[ port3 ] = -31;
	motor[ port8 ] = 126;
	motor[ port9 ] = 126;
	motor[ port10 ] = 126;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 4300  Sensors: in 1 = 448  in 2 = 2028  IMEs: no change
	motor[ port1 ] = -7;
	motor[ port2 ] = -7;
	motor[ port3 ] = -7;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4350  Sensors: in 1 = 533  in 2 = 2020  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	motor[ port8 ] = -10;
	motor[ port9 ] = -10;
	motor[ port10 ] = -10;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4400  Sensors: in 1 = 616  in 2 = 2013  IMEs: no change
	motor[ port1 ] = 43;
	motor[ port2 ] = 43;
	motor[ port3 ] = 43;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4450  Sensors: in 1 = 697  in 2 = 2008  IMEs: no change
	motor[ port1 ] = 52;
	motor[ port2 ] = 52;
	motor[ port3 ] = 52;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4500  Sensors: in 1 = 752  in 2 = 2170  IMEs: no change
	motor[ port5 ] = 0;
	motor[ port6 ] = 0;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4550  Sensors: in 2 = 2195  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	wait1Msec( P_Freq * 3 );		// wait 150

	// 4700  Sensors: in 1 = 740  in 2 = 2200  IMEs: no change
	motor[ port1 ] = -26;
	motor[ port2 ] = -26;
	motor[ port3 ] = -26;
	motor[ port8 ] = 48;
	motor[ port9 ] = 48;
	motor[ port10 ] = 48;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4750  Sensors: in 1 = 737  IMEs: no change
	motor[ port1 ] = -63;
	motor[ port2 ] = -63;
	motor[ port3 ] = -63;
	motor[ port8 ] = 127;
	motor[ port9 ] = 127;
	motor[ port10 ] = 127;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 4800  Sensors: in 1 = 731  in 2 = 2190  IMEs: no change
	motor[ port1 ] = -127;
	motor[ port2 ] = -127;
	motor[ port3 ] = -127;
	wait1Msec( P_Freq * 12 );		// wait 600

	// 5400  Sensors: in 1 = 727  in 2 = 2202  IMEs: no change
	motor[ port1 ] = -59;
	motor[ port2 ] = -59;
	motor[ port3 ] = -59;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 5500  Sensors: no change  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	motor[ port8 ] = -8;
	motor[ port9 ] = -8;
	motor[ port10 ] = -8;
	wait1Msec( P_Freq * 3 );		// wait 150

	// 5650  Sensors: no change  IMEs: no change
	motor[ port1 ] = 7;
	motor[ port2 ] = 7;
	motor[ port3 ] = 7;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 5750  Sensors: in 1 = 731  IMEs: no change
	motor[ port1 ] = -8;
	motor[ port2 ] = -8;
	motor[ port3 ] = -8;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 5800  Sensors: in 1 = 728  IMEs: no change
	motor[ port1 ] = -49;
	motor[ port2 ] = -49;
	motor[ port3 ] = -49;
	motor[ port8 ] = 22;
	motor[ port9 ] = 22;
	motor[ port10 ] = 22;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 5900  Sensors: in 1 = 681  in 2 = 2189  IMEs: no change
	motor[ port1 ] = -127;
	motor[ port2 ] = -127;
	motor[ port3 ] = -127;
	motor[ port8 ] = 127;
	motor[ port9 ] = 127;
	motor[ port10 ] = 127;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 5950  Sensors: in 1 = 704  in 2 = 2182  IMEs: no change
	motor[ port1 ] = -120;
	motor[ port2 ] = -120;
	motor[ port3 ] = -120;
	motor[ port8 ] = 123;
	motor[ port9 ] = 123;
	motor[ port10 ] = 123;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 6050  Sensors: in 1 = 728  in 2 = 2203  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	motor[ port8 ] = -9;
	motor[ port9 ] = -9;
	motor[ port10 ] = -9;
	wait1Msec( P_Freq * 3 );		// wait 150

	// 6200  Sensors: no change  IMEs: no change
	motor[ port1 ] = -16;
	motor[ port2 ] = -16;
	motor[ port3 ] = -16;
	motor[ port8 ] = 22;
	motor[ port9 ] = 22;
	motor[ port10 ] = 22;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 6250  Sensors: no change  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	motor[ port8 ] = 32;
	motor[ port9 ] = 32;
	motor[ port10 ] = 32;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 6300  Sensors: no change  IMEs: no change
	motor[ port8 ] = 11;
	motor[ port9 ] = 11;
	motor[ port10 ] = 11;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 6350  Sensors: no change  IMEs: no change
	motor[ port1 ] = 6;
	motor[ port2 ] = 6;
	motor[ port3 ] = 6;
	motor[ port8 ] = -9;
	motor[ port9 ] = -9;
	motor[ port10 ] = -9;
	wait1Msec( P_Freq * 2 );		// wait 100

	// 6450  Sensors: in 1 = 725  IMEs: no change
	motor[ port1 ] = 70;
	motor[ port2 ] = 70;
	motor[ port3 ] = 70;
	motor[ port8 ] = 18;
	motor[ port9 ] = 18;
	motor[ port10 ] = 18;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 6500  Sensors: no change  IMEs: no change
	motor[ port1 ] = 126;
	motor[ port2 ] = 126;
	motor[ port3 ] = 126;
	motor[ port8 ] = 127;
	motor[ port9 ] = 127;
	motor[ port10 ] = 127;
	wait1Msec( P_Freq * 11 );		// wait 550

	// 7050  Sensors: no change  IMEs: no change
	motor[ port1 ] = 73;
	motor[ port2 ] = 73;
	motor[ port3 ] = 73;
	motor[ port8 ] = 99;
	motor[ port9 ] = 99;
	motor[ port10 ] = 99;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 7100  Sensors: in 1 = 717  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	motor[ port8 ] = -9;
	motor[ port9 ] = -9;
	motor[ port10 ] = -9;
	wait1Msec( P_Freq * 4 );		// wait 200

	// 7300  Sensors: no change  IMEs: no change
	motor[ port8 ] = -16;
	motor[ port9 ] = -16;
	motor[ port10 ] = -16;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 7350  Sensors: no change  IMEs: no change
	motor[ port1 ] = -60;
	motor[ port2 ] = -60;
	motor[ port3 ] = -60;
	motor[ port8 ] = -74;
	motor[ port9 ] = -74;
	motor[ port10 ] = -74;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 7400  Sensors: in 1 = 708  IMEs: no change
	motor[ port1 ] = -114;
	motor[ port2 ] = -114;
	motor[ port3 ] = -114;
	motor[ port8 ] = -114;
	motor[ port9 ] = -114;
	motor[ port10 ] = -114;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 7450  Sensors: in 1 = 711  in 2 = 2194  IMEs: no change
	motor[ port1 ] = -8;
	motor[ port2 ] = -8;
	motor[ port3 ] = -8;
	motor[ port8 ] = -23;
	motor[ port9 ] = -23;
	motor[ port10 ] = -23;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 7500  Sensors: in 1 = 715  in 2 = 2203  IMEs: no change
	motor[ port8 ] = 1;
	motor[ port9 ] = 1;
	motor[ port10 ] = 1;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 7550  Sensors: no change  IMEs: no change
	motor[ port8 ] = -9;
	motor[ port9 ] = -9;
	motor[ port10 ] = -9;
	wait1Msec( P_Freq * 7 );		// wait 350

	// 7900  Sensors: no change  IMEs: no change
	motor[ port1 ] = -40;
	motor[ port2 ] = -40;
	motor[ port3 ] = -40;
	motor[ port8 ] = -50;
	motor[ port9 ] = -50;
	motor[ port10 ] = -50;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 7950  Sensors: no change  IMEs: no change
	motor[ port1 ] = -79;
	motor[ port2 ] = -79;
	motor[ port3 ] = -79;
	motor[ port8 ] = -100;
	motor[ port9 ] = -100;
	motor[ port10 ] = -100;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 8000  Sensors: in 1 = 710  in 2 = 2196  IMEs: no change
	motor[ port1 ] = -88;
	motor[ port2 ] = -88;
	motor[ port3 ] = -88;
	motor[ port8 ] = -80;
	motor[ port9 ] = -80;
	motor[ port10 ] = -80;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 8050  Sensors: no change  IMEs: no change
	motor[ port8 ] = 92;
	motor[ port9 ] = 92;
	motor[ port10 ] = 92;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 8100  Sensors: in 2 = 1859  IMEs: no change
	motor[ port1 ] = -106;
	motor[ port2 ] = -106;
	motor[ port3 ] = -106;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 8150  Sensors: in 2 = 1935  IMEs: no change
	motor[ port1 ] = -6;
	motor[ port2 ] = -6;
	motor[ port3 ] = -6;
	motor[ port8 ] = 35;
	motor[ port9 ] = 35;
	motor[ port10 ] = 35;
	wait1Msec( P_Freq * 1 );		// wait 50

	// 8200  Sensors: in 2 = 1985  IMEs: no change
	motor[ port1 ] = 1;
	motor[ port2 ] = 1;
	motor[ port3 ] = 1;
	motor[ port8 ] = -9;
	motor[ port9 ] = -9;
	motor[ port10 ] = -9;
	wait1Msec( P_Freq * 4 );		// wait 200

	// 8400  Sensors: in 2 = 2121  IMEs: no change
	motor[ port4 ] = 127;
	wait1Msec(10000-8400);
}

void RED_FLAGS()
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
	Sonar_Chasis_RB(30, -100);
	Sonar_Chasis_RB(15, -75);

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

	turn(300, -35);

	Chasis(127, 30, false);

	Chasis(0, 20, false);

	//Chasis(70, 5, false);


	/*	SensorValue[D_gyro] = 0;

	// TURN TO FLAGS
	turn(900, -35);

	Chasis(80, 12, false);

	Chasis(-127, 56, true);

	// gChasis(-127, 32.5, true);

	Chasis(0, 25, true);*/


}


void BLUE_FLAGS()
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

	Sonar_Chasis_FB(4.4 ,100);

	SensorValue[D_gyro] = 0;

	// TURN TO FLAGS
	turn(1050
	, 35);

	// STOP INTAKE
	intake_speed = 0;

	// BRAKE
	Chasis(0, 2, false);

	//Sonar_Chasis_FB(73, 70);

	//Chasis(0, 20, false);

	Catapult_Launch();

	SensorValue[D_gyro] = 0;

	// TURN TO FLAGS
	turn(300, 35);


	Chasis(0, 5, false);

	Chasis(-127, 10, false);





	//Chasis(70, 5, false);


	/*	SensorValue[D_gyro] = 0;

	// TURN TO FLAGS
	turn(900, -35);

	Chasis(80, 12, false);

	Chasis(-127, 56, true);

	// gChasis(-127, 32.5, true);

	Chasis(0, 25, true);*/


}
