#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include <string>

using std::string;

class Civilizacion{
	protected:
		string nombre;
		string planeta;
		string lider;
		int edad;
	public:
		Civilizacion();
		Civilizacion(string, string, string, int);
		string getNombre();
		void setNombre(string);
		string getPlaneta();
		void setPlaneta(string);
		string getLider();
		void setLider(string);
		int getEdad();
		void setEdad(int);
		virtual string Codificar(string)=0;
		virtual string Decodificar(string)=0;
		//virtual ~Civilizacion();
		~Civilizacion();

};

#endif
