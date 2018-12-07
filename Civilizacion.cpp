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

string Civilizacion::getNombre(){
	return nombre;
}

void Civilizacion::setNombre(string nombre){
	this->nombre=nombre;
}

string Civilizacion::getPlaneta(){
	return planeta;
}

void Civilizacion::setPlaneta(string planeta){
	this->planeta=planeta;
}

string Civilizacion::getLider(){
	return lider;
}

void Civilizacion::setLider(string lider){
	this->lider=lider;
}

int Civilizacion::getEdad(){
	return edad;
}

void Civilizacion::setEdad(int edad){
	this->edad=edad;
}