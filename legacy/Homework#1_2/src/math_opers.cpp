#include "math_opers.h"
#include "simplelog.h"
#include <climits>

namespace math_opers {


inline bool is_int_overflow(long long val) 
{	
	return !( (val <= INT_MAX) && (val >= INT_MIN) );
}

int add(int a, int b)
{
	long long tmp = (long)a + (long)b;
	if (is_int_overflow(long(tmp))) {
		LOG("Overflow error");
		return ERROR;
	}
	return a + b;
}

int divide(int a, int b)
{
	if (b == 0) {
		LOG("Divizion error by zero");
		return ERROR;
	}
	return (int)(a / b);
}

int multiply(int a, int b)
{
	long long tmp = (long)a * (long)b;
	if (is_int_overflow(tmp)) {
		LOG("Overflow error");
		return ERROR;
	}
	return (a * b);
}

int subtract(int a, int b)
{
	long long tmp = (long)a - (long)b;
	if (is_int_overflow(tmp)){
		LOG("Overflow error");
		return ERROR;
	}
	return (a - b);
}

}//namespace math_opers 