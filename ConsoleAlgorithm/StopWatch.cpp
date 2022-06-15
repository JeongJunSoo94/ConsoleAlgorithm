#include "StopWatch.h"
#include <time.h>

StopWatch::StopWatch()
{
	startTime = clock();
	endTime = clock();
}

StopWatch::~StopWatch()
{
}

double StopWatch::getStartTime()
{
	startTime = clock();
	return startTime;
}

double StopWatch::getEndTime()
{
	endTime = clock();
	return endTime;
}

void StopWatch::setStartTime()
{
	startTime = clock();
}

void StopWatch::stop()
{
	endTime = clock();
}

double StopWatch::getElapsedTime()
{
	if (endTime < startTime)
	{
		stop();
	}
	return (endTime - startTime) / CLOCKS_PER_SEC;
}
