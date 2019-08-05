#include "Player.h"
#include <iostream>

using namespace std;


int main (int argc, char ** argv)
{
	if (argc != 2) {
		cerr << "Wrong number of arguments" << endl;
		return 1;
	}

	string fn = argv[1];

	Player myplayer;

	myplayer.play(fn);

	return 0;
}
