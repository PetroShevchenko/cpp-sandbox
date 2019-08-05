#ifndef DECODER_H
#define DECODER_H
#include <string>
#include <iostream>
using namespace std;



class Decoder {

const std::string fname;

public:

Decoder(std::string const & fn): fname(fn)
{
	//this->fn = fn; 
}

const string get_fn() const
{
	return fname;
} 

virtual ~Decoder()
{
}

virtual void decode();

};



#endif
