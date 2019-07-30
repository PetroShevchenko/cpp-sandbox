#include "bits_opers.h"
#include <bitset>
#include <iostream>
using namespace std;

int main(void)
{
	int bitmask = 0;

	for (int i = 0; i < sizeof(int)*8; i++)
	{
		setBit(bitmask, i, true);
		cout << "\nBit#" << i << " is set, Bitmask : " << std::bitset<32>(bitmask) << "\n";
		setBit(bitmask, i, false);
		cout << "\nBit#" << i << " is unset, Bitmask : " << std::bitset<32>(bitmask) << "\n";
	}

	return 0;
}

