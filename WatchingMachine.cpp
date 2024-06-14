#include <iostream>
#include "Machine.h"
#include "WashOption.h"
#include "Engine.h"
#include "Timer.h"

class WatchingMatchine: public Machine
{
private:
	int washTime;
	int rinseTime;
	int spinTime;
//methodes
	void wash();
	void rinse();
	void spin();
	void fill();
	void empty();
	void standardWash();
	void twiceRinse();
public:
	void main();
};

void WatchingMatchine:: wash() 
{

}       
void WatchingMatchine:: rinse()
{

}
void WatchingMatchine:: spin()
{
	//turn on
	Engine engine;
	engine.turnOn();

	//setDuration
	Timer timer;
	int duration;
	std::cin >> duration;/// آیا یاید متغییر جدید استفاده کنم؟ و ورودی بییرم؟
	timer.setDuration(duration);

	//Ref Period
	timer.start();
	int time = timer.getValue();
	duration = timer.getDuration();
	while (time != duration)
	{
		time = timer.count();
	}

	//turnoff
	engine.turnOf();

}
void WatchingMatchine::fill()
{

}
void WatchingMatchine:: empty()
{

}
void WatchingMatchine:: standardWash()
{

}
void WatchingMatchine:: twiceRinse()
{

}
void WatchingMatchine:: main()
{
	WashOption washOption;
	int option = washOption.getWashSelection();
	switch (option)
	{
		case 1:
			this->standardWash();
		case 2:
			this->twiceRinse();
		case 3:
			this->spin();
	}
}

}