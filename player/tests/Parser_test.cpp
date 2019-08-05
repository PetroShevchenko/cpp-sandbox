#include "Parser.h"
#include <iostream>

using namespace std;


int main (int argc, char ** argv)
{
	file_format_t ff;

	string fname("test.avi");

	Parser obj(fname);

	ff = obj.parse();

	cout << "\nFile format is " << ff << std::endl;

	return 0;
}

