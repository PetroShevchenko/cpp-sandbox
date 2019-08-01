#include "Parser.h"
#include <iostream>

using namespace std;


int main (int argc, char ** argv)
{
	file_format_t ff;


	Parser obj("test.avi");

	ff = obj.parse();

	cout << "\nFile format is" << ff;

	return 0;
}

