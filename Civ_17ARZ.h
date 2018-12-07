#ifndef CIV_17ARZ_H
#define CIV_17ARZ_H

#include "Civilizacion.h"

#include <string>
using std::string;

class Civ_17ARZ : public Civilizacion{
  public:
    Civ_17ARZ(string, string, string, int);
    string Codificar(string);
    string Decodificar(string);
    ~Civ_17ARZ();
};

#endif
