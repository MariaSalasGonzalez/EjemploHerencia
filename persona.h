#pragma once
#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
class persona{
protected:
	string nom;
	string id;
	string direccion;

public:
	persona(string = "-" , string = "-", string = "-");
	void setNom(string);
	string getNom();
	void setId(string);
	string getId();
	void setDireccion(string);
	string getDireccion();
	string toStringPers();
	~persona();

};

#endif // PERSONA_H
