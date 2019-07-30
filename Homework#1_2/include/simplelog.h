#ifndef SIMPLE_LOG_H
#define SIMPLE_LOG_H
#include <iostream>
#include <cstdlib>

#define LOG(message) std::cout << "\nFILE NAME:\t" << __FILE__\
 << "\tFUNCTION NAME:\t" << __FUNCTION__ << "\tLINE:\t" << __LINE__\
  << "\tMESSAGE:\t"<< message << "\n"



#endif//SIMPLE_LOG_H