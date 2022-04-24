#include "math_opers.h"
#include <iostream>
#include <climits>
using namespace std;
using namespace math_opers;

static operation_t operations[] {
	{'+',add},
	{'/', divide},
	{'*', multiply},
	{'-', subtract},
	{' ', nullptr}
};

int main(int argc, char const *argv[])
{

	int a = INT_MAX;
	int b = INT_MAX;

	cout << "\nResults of functions calls :\n";
	for (int i = 0; operations[i].func != nullptr ; i++)
	{
		cout << "Operation :" << operations[i].operation << "\t" << "Result :" << operations[i].func(a,b) << std::endl;
	}

	return 0;
}
