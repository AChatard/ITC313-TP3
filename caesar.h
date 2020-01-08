/*
	*File:		caesar.h
	*Author:	hugo et chatard
	*Date:		08/01/2020
	*Course:	C++
	*Summary:	declaration of the caesar class
*/

#ifndef _caesar_h
#define _caesar_h

#include <string>
#include <iostream>
#include <fstream>
#include "encrypt.h"


class Caesar : public Encrypt{
public:
	// constructeurs

	// methodes
	std::string encode(int decalage);
	std::string decode(int decalage);

protected:

};

#endif