#include "AudioDecoder.h"
#include <string>
#include <iostream>

#include <cstring>

//using namespace std;

void AudioDecoder::decode()
{
	
	std::string fn = get_fn();

	char cmd_str[64];

	sprintf(cmd_str, "ffplay %s", fn.c_str());

	std::system(cmd_str);
}
