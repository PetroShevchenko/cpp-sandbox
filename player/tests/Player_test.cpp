#include "Player.h"
#include <iostream>

using namespace std;


int main (int argc, char ** argv)
{

	string fn = "example.avi";

	Player myplayer;

	myplayer.play(fn);

	return 0;
}