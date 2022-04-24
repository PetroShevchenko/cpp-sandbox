#ifndef VIDEO_DECODER_H
#define VIDEO_DECODER_H
#include "Decoder.h"

class VideoDecoder : public Decoder {

public:
VideoDecoder(std::string const & fn): Decoder(fn) {};

~VideoDecoder(){};
void decode();

};



#endif
