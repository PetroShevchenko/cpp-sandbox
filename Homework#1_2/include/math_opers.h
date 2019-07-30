#ifndef MATH_OPERS_H
#define MATH_OPERS_H
#include <cstdbool>

namespace math_opers {

enum {
	ERROR = -1,
	OK = 0
};

typedef int (*func_t)(int,int);

struct operation_t {
    char operation;
    func_t func;
};  

inline bool is_int_overflow(long long val); 
int add(int, int);
int divide(int, int);
int multiply(int, int);
int subtract(int, int);

}//namespace math_opers

#endif//MATH_OPERS_H