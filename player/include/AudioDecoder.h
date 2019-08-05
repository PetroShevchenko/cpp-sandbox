#ifndef AUDIO_DECODER_H
#define AUDIO_DECODER_H
#include "Decoder.h"

class AudioDecoder : public Decoder {

public:
AudioDecoder(std::string const & fn): Decoder(fn) {};
~AudioDecoder(){};
void decode();

}



#endif