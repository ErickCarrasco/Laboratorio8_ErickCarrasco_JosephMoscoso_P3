#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <sstream>
using std::stringstream;

#include <vector>
using std::vector;

#include <fstream>
using std::ofstream;
using std::ifstream;

#include "Civilizacion.h"
#include "Civ_17ARZ.h"
#include "Civ_BB01.h"
#include "Civ_CC10.h"

int main(){
  int salida=0;
  vector <Civilizacion*> lista_civilizacion;
  while (salida==0) {
      cout<<"Bienvenido"<<endl;
      cout<<"----------------------------------------"<<endl;
      cout<<"1)Actualizar civilizaciones\n2)Codificar desde programa\n3)Decodificar desde programa\n4)Codificar desde archivo\n5)Decodificar desde archivo\n6)Ver historial de mensajes\n7)Salir";
      cout<<"----------------------------------------"<<endl;
      cout<<"Ingrese el numero correspondiente: ";
      int op=0;
      cin>>op;
      cout<<"----------------------------------------"<<endl;
      while (op<0||op>7) {
          cout<<"Error, vuelva ingresar: ";
          cin>>op;
          cout<<"----------------------------------------"<<endl;
      }
      if (op==1) {
        /* code */
        string fileName;
        cout<<"Ingrese el nombre del archivo: "<<endl;
        cin>>fileName;
        ifstream inputFile;
        inputFile.open(fileName.c_str());
        if(!inputFile.is_open()){
          cout<<"El archivo no existe.."<<endl;
        }else{
          string buffer;
          string nombre_l;
          string planeta_l;
          string lider_l;
          int edad_l;
          string tipocod_l;
          cout<<"El contenido del archivo es: "<<endl;
          while(!inputFile.eof()){
            getline(inputFile, buffer);
            int counter=0;
            stringstream nombre_ss;
            stringstream planeta_ss;
            stringstream lider_ss;
            stringstream edad_ss;
            stringstream tipocod_ss;
            for (int i = 0; i < buffer.size(); i++){
                if (buffer[i]=='|'){
                    counter++;
                }
                if (buffer[i]!='|' && counter==0){
                    nombre_ss>>buffer[i];
                }
                if (buffer[i]!='|' && counter==1){
                    planeta_ss>>buffer[i];
                }
                if (buffer[i]!='|' && counter==2){
                    lider_ss>>buffer[i];
                }
                if (buffer[i]!='|' && counter==3){
                    edad_ss>>buffer[i];
                }

                if (buffer[i]!='|' && counter==4){
                    tipocod_ss>>buffer[i];
                }     
            }
            nombre_l=nombre_ss.str();
            planeta_l=planeta_ss.str();
            lider_l=lider_ss.str();
            string edad_s=edad_ss.str();
            tipocod_l=tipocod_ss.str();
            edad_l=std::stoi(edad_s);

            cout<<buffer<<endl;
          }
          inputFile.close();
        }

      }

      if (op==2) {
        /* code */
      }
      if (op==3) {
        /* code */
      }
      if (op==4) {
        /* code */
      }
      if (op==5) {
        /* code */
      }
      if (op==6) {
        /* code */
      }
      if (op==7) {
        salida=1;
      }
  }
  return 0;
}
