#ifndef CIV_17ARZ_H
#define CIV_17ARZ_H

#include "Civilizacion.h"

#include <string>
using std::string;

class Civ_17ARZ : public Civilizacion{
  public:
    Civ_17ARZ();
    virtual string Codificar(string);
    virtual string Decodificar(string);
    ~Civ_17ARZ();
};

#endif