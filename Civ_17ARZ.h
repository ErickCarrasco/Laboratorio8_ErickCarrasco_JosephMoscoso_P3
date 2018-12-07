#ifndef CIV_17ARZ_H
#define CIV_17ARZ_H

#include "Civilizacion.h"

#include <string>
using std::string;

class Civ_17ARZ : public Civilizacion{
  public:
<<<<<<< HEAD
    Civ_17ARZ(string, string, string, int);
    virtual string Codificar(string);
    virtual string Decodificar(string);
=======
    Civ_17ARZ();
    string Codificar(string);
    string Decodificar(string);
>>>>>>> d9c8f034e974481bf91f3ed8b3e7613703b93e39
    ~Civ_17ARZ();
};

#endif
