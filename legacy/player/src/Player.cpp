#include "Player.h"
#include "VideoDecoder.h"
#include "AudioDecoder.h"


void Player::play (std :: string & fileName)
{
	file_format_t ff;

	parser.set_file_name(fileName);
	
	ff = parser.parse();

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

	pDecoder->decode();


	delete pDecoder;
}
