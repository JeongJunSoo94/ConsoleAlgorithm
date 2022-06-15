#pragma once
class StopWatch
{
private:
	double startTime;
	double endTime;
public:
	StopWatch();
	~StopWatch();
	double getStartTime();
	double getEndTime();
	void setStartTime();
	void stop();
	double getElapsedTime();
};

