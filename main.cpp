#include <string>
#include <iostream>
#include "encrypt.h"
#include "caesar.h"



int main(){

	// premier objet encrypt créé
	Encrypt obj;
	obj.read(true, "chiffrer.txt");
	obj.write(true, "clair.txt");

	Caesar obj2;
	obj2.read(false, "clair.txt");
	std::cout << obj2.encode(3) << std::endl;

	std::cout<<"fini"<<std::endl;
	return 0;
}