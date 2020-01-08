/*
	*File:		encrypt.h
	*Author:	hugo et chatard
	*Date:		08/01/2020
	*Course:	C++
	*Summary:	declaration of the encrypt class
*/

#ifndef _encrypt_h
#define _encrypt_h

#include <string>
#include <iostream>
#include <fstream>

class Encrypt {
public:
	// constructeurs
	Encrypt();

	// accesseurs
	std::string getPlain();
	std::string getChiffrer();

	// methodes
	bool read(bool chiffrer, std::string fichier);
	bool write(bool chiffrer, std::string fichier);
	std::string encode();
	std::string decode();

protected:
	std::string m_plain;
	std::string m_chiffrer;

};

#endif
