#include "Player.h"

/*
class Player {

Parser parser;
Decoder * pDecoder;

public:
Player()
{	
}
~Player()
{	
}

void play (const std :: string & fileName);

};

typedef enum file_format_e {
	VIDEO_FORMAT,
	AUDIO_FORMAT,
	UNKNOWN_FORMAT
}file_format_t;



*/



void Player::play (const std :: string & fileName)
{
	file_format_t ff;

	parser.set_file_name(fileName);
	
	ff = parse();

	switch (ff)
	{

		case VIDEO_FORMAT:

		pDecoder = new VideoDecoder(fileName);
		break;


		case AUDIO_FORMAT:
		pDecoder = new AudioDecoder(fileName);
		break;

		case UNKNOWN_FORMAT:
		default:
		return;
	}

	pDecoder.decode();


	delete pDecoder;
}