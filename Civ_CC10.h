#ifndef CIV_CC10_H
#define CIV_CC10_H

#include "Civilizacion.h"

#include <string>
using std::string;

class Civ_CC10 : public Civilizacion{
  public:
    Civ_CC10(string, string, string, int);
    virtual string Codificar(string);
    virtual string Decodificar(string);
    ~Civ_CC10();
};

#endif
