#include "Civ_17ARZ.h"


Civ_17ARZ::Civ_17ARZ(string nombre, string planeta, string lider, int edad):Civilizacion(nombre, planeta, lider, edad){

}

string Civ_17ARZ::Codificar(string x){
  string nuevo;
  //string temporal=x;
  for (int i = 0; i < x.size(); i++) {
      nuevo=nuevo+x[x.size()-1];
  }
  return nuevo;
}

string Civ_17ARZ::Decodificar(string x){
  string nuevo;
  for (int i = 0; i < x.size(); i++) {
      nuevo=nuevo+x[x.size()-1];
  }
  return nuevo;
}

Civ_17ARZ::~Civ_17ARZ(){

}
