#include "Parser.h"
#include <iostream>
#include <cstring>
#include <string>

/*typedef enum audio_formats_e{
	MP3 ,
	WAV
}audio_formats_t;

typedef enum video_formats_e{
	H264,
	H263
}video_formats_t;
*/

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
	nullptr
};


Parser::Parser(){
    cout << "This is a Parser()"; 
}


Parser::Parser(string & fn) : file_name(fn) {
	cout << "This is a Parser()";
}

Parser::~Parser(){
	cout << "This is a ~Parser()";
}

void Parser::set_file_name(string &fn)
{
	file_name = fn;
}

/*Parser::Parser(const char * fn) {

	file_size = strlen(fn);

        file_name = new char [file_size + 1];

        strncpy(file_name, fn, file_size + 1);
}

Parser::~Parser(){
	
	delete [] file_name;
	cout << "This is a ~Parser()";
}


int Parser::set_file_name(const char *fn )
{
	file_size = strlen(fn);
	if (file_size >= MAX_FILE_NAME_LEN)
		return -1;
        
	strncpy(file_name, fn, file_size + 1);	
}

file_format_t  Parser::parse()
{
	char * p = nullptr;
	
	for (int i = 0 ; sound_ext[i] != nullptr ; i++)
	{
		p = strtok(file_name, sound_ext[i]);
		if (p != nullptr)
			return AUDIO_FORMAT; 
		
	}

        for (int i = 0 ; video_ext[i] != nullptr ; i++)
        {
                p = strtok(file_name, video_ext[i]);
                if (p != nullptr)
                        return VIDEO_FORMAT;

        }

	return UNKNOWN_FORMAT;
}
*/
file_format_t  Parser::parse()
{
	char * p = nullptr;
	
	for (int i = 0 ; sound_ext[i] != nullptr ; i++)
	{
		//p = strtok((char *)file_name.c_str(), sound_ext[i]);
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


