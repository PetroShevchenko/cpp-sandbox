#include "String.h"
#include <iostream>
using namespace std;


int main (int argc, char ** argv)
{

	String obj1("Hello, ");
	String obj2("World!");
	
	//cout << "\nLength of string in obj1 equals " << obj1.length();
	//cout << "\nLength of string in obj2 equals " << obj2.length();

	obj1.append(obj2);

	cout << endl;
	for (int i = 0; i < obj1.length(); i++)
		cout << obj1.get(i);
	cout << endl;

	String obj3 = obj1;

	String obj4;
	String obj5("Test string");

	//obj4 = obj5;

	return 0;
}

