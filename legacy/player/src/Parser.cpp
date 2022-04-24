#include "Parser.h"
#include <iostream>
#include <cstring>
#include <string>


enum {
	MAX_FILE_NAME_LEN = 20
};


const char * sound_ext[] = {
	".mp3",
	".wav",
	nullptr
};

const char * video_ext[] = {
	".mov",
	".avi",
	".mp4",
	nullptr
};


Parser::Parser(){
	std:: cout << "This is a Parser()"; 
}


Parser::Parser(std::string & fn) : file_name(fn) {
	std::cout << "This is a Parser()";
}

Parser::~Parser(){
	std::cout << "This is a ~Parser()";
}

void Parser::set_file_name(std::string &fn)
{
	file_name = fn;
}

file_format_t  Parser::parse()
{
	char * p = nullptr;
	
	for (int i = 0 ; sound_ext[i] != nullptr ; i++)
	{	
		
		p = strstr((char *)file_name.c_str(), sound_ext[i]);
		if (p != nullptr)
			return AUDIO_FORMAT;		
	}

    for (int i = 0 ; video_ext[i] != nullptr ; i++)
    {
        //p = strtok((char *)file_name.c_str(), video_ext[i]);
        p = strstr((char *)file_name.c_str(), video_ext[i]);
        if (p != nullptr)
            return VIDEO_FORMAT;
    }

	return UNKNOWN_FORMAT;
}


