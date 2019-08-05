#include "VideoDecoder.h"
#include <string>
#include <iostream>
using namespace std;

void VideoDecoder::decode()
{
	string fn = get_fn();

	char cmd_str[64];

	sprintf(cmd_str, "mplayer %s", fn.c_str());

	std::system(cmd_str);
}

