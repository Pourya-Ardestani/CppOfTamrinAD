#include <iostream>
#include "Machine.h"

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
};

int main()
{

}
