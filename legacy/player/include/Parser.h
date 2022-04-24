#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <cstring>
#include <string>

typedef enum file_format_e {
	VIDEO_FORMAT,
	AUDIO_FORMAT,
	UNKNOWN_FORMAT
}file_format_t;

class Parser {
	private:
	std::string file_name;

	public:
	Parser();
	Parser(std::string &);
	~Parser();

	void set_file_name(std::string &);

	file_format_t parse();
};

#endif
