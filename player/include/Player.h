#ifndef PLAYER_H
#define PLAYER_H
#include "Parser.h"



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


#endif// PLAYER_H