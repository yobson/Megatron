#pragma once

typedef int Command;
typedef int Metric;

//Type Descriptions
struct SMotorCommand {
	Command command;
	Metric metric;
	union {
		double angle;
		double centimetres;
		int steps;
	};
};

//Custom Types
typedef struct SMotorCommand MotorCommand;

//Constants
const Command Empty = 0;
const Command Forward = 1;
const Command Backward = 2;
const Command RotateClockwise = 3;
const Command RotateAnticlockwise = 4;

const Metric Degrees = 0;
const Metric Centimetres = 1;
const Metric Steps = 2;

const int MOTORQUEUESIZE = 16;