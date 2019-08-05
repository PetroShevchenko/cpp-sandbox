#include <iostream>
#include <cstring>
#include <string>

//c_str

using namespace std;


typedef enum file_format_e {
	VIDEO_FORMAT,
	AUDIO_FORMAT,
	UNKNOWN_FORMAT
}file_format_t;


class Parser {
	private:
	//char * file_name;
	//int file_size;
	string file_name;

	public:

	Parser();
	//Parser(const char * );
	Parser(string &);
	~Parser();

	//int set_file_name(const char *);
	void set_file_name(string &);
	file_format_t parse();
};
