#include "Civilizacion.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>

using std::string;

Civilizacion::~Civilizacion(){
	cout<<"Expunged"<<endl;
}

Civilizacion::Civilizacion(){

}

Civilizacion::Civilizacion(string nombre, string planeta, string lider, int edad){
	this->nombre=nombre;
	this->planeta=planeta;
	this->lider=lider;
	this->edad=edad;
}

