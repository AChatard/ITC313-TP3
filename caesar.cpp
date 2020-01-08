/*
	*File:		caesar.cpp
	*Author:	hugo et chatard
	*Date:		08/01/2020
	*Course:	C++
	*Summary:	implementation of the caesar class
*/

#include "caesar.h"

std::string Caesar::encode(int decalage){
	char tab[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int i,j,position;
	m_chiffrer="";
	for(i=0;i< m_plain.size(); i++){
		if(m_plain[i] != ' '){
			for(j=0;j<26;j++){
				if(tab[j] == m_plain[i]){
					position = j;
					j = 27;
					m_chiffrer += tab[(position+decalage)%26];
				}
			}
		}
		else {
			m_chiffrer += " ";
		}
	}
	return m_chiffrer;
}	

std::string Caesar::decode(int decalage){
	std::cout << "decode caesar" << std::endl;
	return m_plain;
}