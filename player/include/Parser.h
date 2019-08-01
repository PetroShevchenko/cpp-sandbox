#include <iostream>
#include <cstring>

using namespace std;


typedef enum file_format_e {
	VIDEO_FORMAT,
	AUDIO_FORMAT,
	UNKNOWN_FORMAT
}file_format_t;


class Parser {
	private:
	char * file_name;
	int file_size;

	public:

	Parser();
	Parser(const char * );
	~Parser();

	int set_file_name(const char *);
	file_format_t parse();
};
