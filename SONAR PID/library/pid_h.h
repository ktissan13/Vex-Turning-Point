#pragma systemFile

typedef struct{
	float kP;
	float kI;
	float kD;
	float error;
	float target;
	float derivative;
	float last_error;
	float integral;
	float threshold;
} pid;
