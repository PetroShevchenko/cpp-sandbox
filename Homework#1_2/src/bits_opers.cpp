#include "bits_opers.h"
#include <cassert>

void setBit(int& value, size_t bitNumber, bool enabled)
{
	assert(bitNumber <= (sizeof(int) * 8));
	if (enabled == true) 
		value |= (1 << bitNumber);
	else 
		value &= ~(1 << bitNumber);
}

