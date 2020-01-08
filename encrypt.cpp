/*
	*File:		encrypt.cpp
	*Author:	hugo et chatard
	*Date:		08/01/2020
	*Course:	C++
	*Summary:	implementation of the encrypt class
*/
#include "encrypt.h"

// constructeurs
	Encrypt::Encrypt(){
		std::cout<< "encrypt créer" << std::endl;
	}

// accesseurs
std::string Encrypt::getPlain(){
	return m_plain;
}
std::string Encrypt::getChiffrer(){
	return m_chiffrer;
}

// méthode 
bool Encrypt::read(bool chiffrer, std::string fichier){
	std::ifstream monFlux(fichier);
	if(monFlux){
		std::string ligne;
		while(getline(monFlux, ligne)){
			if(chiffrer == true){
				m_chiffrer += ligne + "\n";
			} 
			else {
				m_plain += ligne + "\n";
			}
		}
	}
	else {
		std::cout<<"erreur lecture fichier"<<std::endl;
	}
	return true;
}
bool Encrypt::write(bool chiffrer, std::string fichier){
	std::ofstream monFlux(fichier);
	if(monFlux){
		if(chiffrer){
			monFlux << m_chiffrer << std::endl;
		}
		else{
			monFlux << m_plain << std::endl;
		}
	}else {
		std::cout<<"erreur lecture fichier"<<std::endl;
	}
	return true;
}

std::string Encrypt::encode(){
	m_chiffrer = m_plain;
	return m_chiffrer;
}

std::string Encrypt::decode(){
	m_plain = m_chiffrer;
	return m_plain;
}

