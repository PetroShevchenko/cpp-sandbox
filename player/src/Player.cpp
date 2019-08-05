#include "Player.h"
#include "VideoDecoder.h"
#include "AudioDecoder.h"
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



void Player::play (std :: string & fileName)
{
	file_format_t ff;

	parser.set_file_name(fileName);
	
	ff = parser.parse();
	VideoDecoder VD(fileName);
	AudioDecoder AD(fileName);

	switch (ff)
	{

		case VIDEO_FORMAT:

		//VideoDecoder VD(fileName);
		pDecoder = &VD;
		
		break;


		case AUDIO_FORMAT:

		//AudioDecoder AD(fileName);
		pDecoder = &AD;

		break;

		case UNKNOWN_FORMAT:
		default:
		return;
	}

	pDecoder->decode();


	delete pDecoder;
}
