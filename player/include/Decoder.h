#ifndef DECODER_H
#define DECODER_H
#include <string>
#include <iostream>


class Decoder {

const std::string fname;

public:

Decoder(std::string const & fn): fname(fn)
{
}

const std::string get_fn() const
{
	return fname;
} 

virtual ~Decoder(){}

virtual void decode() = 0;

};



#endif
