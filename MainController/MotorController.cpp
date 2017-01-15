#include "pch.h"
#include "MotorController.h"

using namespace Microsoft::Maker::RemoteWiring;
using namespace Microsoft::Maker::Serial;


MotorController::MotorController()
{
	double CMsPerCount = calibrateDistance();
	CountsPerCM = 1 / CMsPerCount;
	stepsPerFullRotation = calibrateRotation();
	
	commands = new MotorCommand[MOTORQUEUESIZE];
	queueFront = queueBack = 0;
}

MotorController::~MotorController()
{
	delete commands;
}

double MotorController::calibrateDistance()
{
	return 0.0;
}

int MotorController::calibrateRotation()
{
	return 0.0;
}

void MotorController::moveForward(int steps)
{
	
}

void MotorController::moveBackwards(int steps)
{
	
}

void MotorController::rotLeft(int steps)
{
	
}

void MotorController::runMotorCommand()
{
	
}

bool MotorController::addMotorCommand(MotorCommand com)
{
	if (commands[queueBack].command != Empty) { return true; }
	commands[queueBack] = com;
	queueBack++;
	if (queueBack <= MOTORQUEUESIZE) { queueBack = 0; }
	return false;
}