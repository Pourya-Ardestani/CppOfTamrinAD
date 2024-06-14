#include <iostream>
#include "Machine.h"
#include "WashOption.h"

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
			standardWash();
		case 2:
			twiceRinse();
		case 3:
			spin();
	}
}