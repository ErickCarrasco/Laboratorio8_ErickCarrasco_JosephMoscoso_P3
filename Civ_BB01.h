#ifndef CIV_BB01_H
#define CIV_BB01_H

#include "Civilizacion.h"

#include <string>
using std::string;

class Civ_BB01 : public Civilizacion{
  public:
    Civ_BB01();
    virtual string Codificar(string);
    virtual string Decodificar(string);
    ~Civ_BB01();
};

#endif
