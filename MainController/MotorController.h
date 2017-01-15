#pragma once
class MotorController sealed
{
private:
	// Variables
	int LCount;
	int RCount;
	double CountsPerCM;
	int stepsPerFullRotation;
	int queueFront;
	int queueBack;
	MotorCommand *commands;

	// Private Functions
	double calibrateDistance();
	int calibrateRotation();
	void moveForward(int steps);
	void moveBackwards(int steps);
	void rotLeft(int steps);
	void runMotorCommand();
	
public:
	MotorController();
	virtual ~MotorController();
	bool addMotorCommand(MotorCommand com);
};

