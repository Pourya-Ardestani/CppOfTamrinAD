#pragma once
#include "Time.h"
class Timer
{
private:
	int value;
	int duration;
public:
	void setDuration(int );/////(+int n)
	void start();
	int count(); // Time was not in class diagram so i thought it would be better if i changed the type to int to be a individual  class for this return 
	int getValue(); // as well as line before
	int getDuration(); // istead of duration i used int 

};

