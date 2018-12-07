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
        
        //ACTUALIZACION DE LAS CIVILIZACIONES
        
        if (lista_civilizacion.empty()){
            
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

                    if (tipocod_l=="Civ_CC10"){
                        Civilizacion* civ_cc10_l = new Civ_CC10(nombre_l, planeta_l, lider_l, edad_l);
                        lista_civilizacion.push_back(civ_cc10_l);
                    }

                    if (tipocod_l=="Civ_BB01"){
                        Civilizacion* civ_bb01_l = new Civ_BB01(nombre_l, planeta_l, lider_l, edad_l);
                        lista_civilizacion.push_back(civ_bb01_l);
                    }
                    if (tipocod_l=="Civ_17ARZ"){
                        Civilizacion* civ_17Arz_l = new Civ_17ARZ(nombre_l, planeta_l, lider_l, edad_l);
                        lista_civilizacion.push_back(civ_17Arz_l);
                    }

                    //lista_civilizacion.push_back(new Civilizacion(nombre_l, planeta_l, lider_l, edad_l));

                    //cout<<buffer<<endl;
                }
                inputFile.close();
            }
        }//FIN IF DE LISTA IS EMPTY
        else{

            for (int i = 0; i < lista_civilizacion.size(); ++i){
                delete lista_civilizacion[i];
            }
            lista_civilizacion.clear();
        
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

                    if (tipocod_l=="Civ_CC10"){
                        Civilizacion* civ_cc10_l = new Civ_CC10(nombre_l, planeta_l, lider_l, edad_l);
                        lista_civilizacion.push_back(civ_cc10_l);
                    }

                    if (tipocod_l=="Civ_BB01"){
                        Civilizacion* civ_bb01_l = new Civ_BB01(nombre_l, planeta_l, lider_l, edad_l);
                        lista_civilizacion.push_back(civ_bb01_l);
                    }
                    if (tipocod_l=="Civ_17ARZ"){
                        Civilizacion* civ_17Arz_l = new Civ_17ARZ(nombre_l, planeta_l, lider_l, edad_l);
                        lista_civilizacion.push_back(civ_17Arz_l);
                    }
                }//FIN WHILE

                inputFile.close();

            }//FIN ELSE SECUNDARIO

        }//FIN PRIMER ELSE

      }//Fin if 1

      if (op==2) {
        //CODIFICAR DESDE EL PROGRAMA
        cout<<"Ingrese el codigo a codificar: "<<endl;
        string codificador_programa;
        //cin>>codificador_programa;
        getline(cin, codificador_programa);
        cout<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<endl;
        cout<<"--------------------------------------"<<endl;
        for (int i = 0; i < lista_civilizacion.size(); ++i){
            cout<<"["<<i<<"]"<<" "<< lista_civilizacion.at(i)->getNombre()<<" "<<endl;
        }

        int seleccion;
        cout<<"Ingrese un numero a escoger: "<<endl;
        cin>>seleccion;
        while (seleccion<0 || seleccion>lista_civilizacion.size()-1){
            cout<<"Error. Ingrese el valor nuevamente.."<<endl;
            cin>>seleccion;
        }
        string DATA_ACQUIRED;
        DATA_ACQUIRED = lista_civilizacion[seleccion]->Codificar(codificador_programa);

        ofstream outPutFile;
        outPutFile.open("HistorialMensajes.txt", std::ios::app);
        outPutFile<<lista_civilizacion[seleccion]->getNombre()<<" , "<<" CODIFICACION DESDE EL PROGRAMA";
        outPutFile<<"\nEntrada:";
        outPutFile<<"\n"<<codificador_programa;
        outPutFile<<"\nSalida: ";
        outPutFile<<"\n"<<DATA_ACQUIRED;
        outPutFile<<"\n-----------------------------------------";
        outPutFile<<"\n";
        outPutFile.close();

        

      }//Fin if 2

      if (op==3) {
        //DECODIFICAR DESDE EL PROGRAMA
        cout<<"Ingrese el codigo a decodificar: "<<endl;
        string decodificador_programa;
        //cin>>decodificador_programa;
        getline(cin, decodificador_programa);
        cout<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<endl;
        cout<<"--------------------------------------"<<endl;
        for (int i = 0; i < lista_civilizacion.size(); ++i){
            cout<<"["<<i<<"]"<<" "<< lista_civilizacion.at(i)->getNombre()<<" "<<endl;
        }

        int seleccion;
        cout<<"Ingrese un numero a escoger: "<<endl;
        cin>>seleccion;
        while (seleccion<0 || seleccion>lista_civilizacion.size()-1){
            cout<<"Error. Ingrese el valor nuevamente.."<<endl;
            cin>>seleccion;
        }

        string DATA_ENCRYPTED;
        DATA_ENCRYPTED = lista_civilizacion[seleccion]->Decodificar(decodificador_programa);

        ofstream outPutFile;
        outPutFile.open("HistorialMensajes.txt", std::ios::app);
        outPutFile<<lista_civilizacion[seleccion]->getNombre()<<" , "<<" DECODIFICACION DESDE EL PROGRAMA";
        outPutFile<<"\nEntrada:";
        outPutFile<<"\n"<<decodificador_programa;
        outPutFile<<"\nSalida: ";
        outPutFile<<"\n"<<DATA_ENCRYPTED;
        outPutFile<<"\n-----------------------------------------";
        outPutFile<<"\n";
        outPutFile.close();

      }//Fin if 3

      if (op==4) {
        //CODIFICAR DESDE EL ARCHIVO
        string fileName;
        cout<<"Ingrese el nombre del archivo: "<<endl;
        cin>>fileName;
        ifstream inputFile;
        inputFile.open(fileName.c_str());
        if(!inputFile.is_open()){
            cout<<"El archivo no existe.."<<endl;
        }else{
            string DATA_REFURBISHED;
            cout<<"El contenido del archivo es: "<<endl;
            while(!inputFile.eof()){
                getline(inputFile, DATA_REFURBISHED);
                cout<<DATA_REFURBISHED<<endl;
            }

            cout<<endl;
            cout<<"--------------------------------------"<<endl;
            cout<<endl;
            cout<<"--------------------------------------"<<endl;
            for (int i = 0; i < lista_civilizacion.size(); ++i){
                cout<<"["<<i<<"]"<<" "<< lista_civilizacion.at(i)->getNombre()<<" "<<endl;
            }

            int seleccion;
            cout<<"Ingrese un numero a escoger: "<<endl;
            cin>>seleccion;
            while (seleccion<0 || seleccion>lista_civilizacion.size()-1){
                cout<<"Error. Ingrese el valor nuevamente.."<<endl;
                cin>>seleccion;
            }
            string DATA_ACQUIRED;
            DATA_ACQUIRED = lista_civilizacion[seleccion]->Codificar(DATA_REFURBISHED);

            ofstream outPutFile;
            outPutFile.open("HistorialMensajes.txt", std::ios::app);
            outPutFile<<lista_civilizacion[seleccion]->getNombre()<<" , "<<" CODIFICACION DESDE EL PROGRAMA";
            outPutFile<<"\nEntrada:";
            outPutFile<<"\n"<<DATA_REFURBISHED;
            outPutFile<<"\nSalida: ";
            outPutFile<<"\n"<<DATA_ACQUIRED;
            outPutFile<<"\n-----------------------------------------";
            outPutFile<<"\n";
            outPutFile.close();


        }

      }//Fin if 4


      if (op==5) {
        //LEER HISTORIAL
        string fileName;
        cout<<"Ingrese el nombre del archivo: "<<endl;
        cin>>fileName;
        ifstream inputFile;
        inputFile.open(fileName.c_str());
        if(!inputFile.is_open()){
          cout<<"El archivo no existe.."<<endl;
        }else{
            string DATA_ANALYSIS;
            cout<<"El contenido del archivo es: "<<endl;
            while(!inputFile.eof()){
                getline(inputFile, DATA_ANALYSIS);
                cout<<DATA_ANALYSIS<<endl;
            }
            inputFile.close();


            cout<<endl;
            cout<<"--------------------------------------"<<endl;
            cout<<endl;
            cout<<"--------------------------------------"<<endl;
            for (int i = 0; i < lista_civilizacion.size(); ++i){
                cout<<"["<<i<<"]"<<" "<< lista_civilizacion.at(i)->getNombre()<<" "<<endl;
            }

            int seleccion;
            cout<<"Ingrese un numero a escoger: "<<endl;
            cin>>seleccion;
            while (seleccion<0 || seleccion>lista_civilizacion.size()-1){
                cout<<"Error. Ingrese el valor nuevamente.."<<endl;
                cin>>seleccion;
            }

            string DATA_ENCRYPTED;
            DATA_ENCRYPTED = lista_civilizacion[seleccion]->Decodificar(DATA_ANALYSIS);

            ofstream outPutFile;

            outPutFile.open("HistorialMensajes.txt", std::ios::app);
            outPutFile<<lista_civilizacion[seleccion]->getNombre()<<" , "<<" DECODIFICACION DESDE EL PROGRAMA";
            outPutFile<<"\nEntrada:";
            outPutFile<<"\n"<<DATA_ANALYSIS;
            outPutFile<<"\nSalida: ";
            outPutFile<<"\n"<<DATA_ENCRYPTED;
            outPutFile<<"\n-----------------------------------------";
            outPutFile<<"\n";
            outPutFile.close();

            }//FIN ELSE



        }//FIn if 5

        if (op==6){
            string fileName;
            cout<<"Ingrese el nombre del archivo: "<<endl;
            cin>>fileName;
            ifstream inputFile;
            inputFile.open(fileName.c_str());
            if(!inputFile.is_open()){
                cout<<"El archivo no existe.."<<endl;
            }else{
                string buffer;
                cout<<"El contenido del archivo es: "<<endl;
                while(!inputFile.eof()){
                    getline(inputFile, buffer);
                    cout<<buffer<<endl;
                }
            }
        }//FIN IF 6

        if (op==7) {
            salida=1;
        }
  }
    if (lista_civilizacion.empty()){
        //DO nothing
    }else{
        for (int i = 0; i < lista_civilizacion.size(); ++i)
        {
            delete lista_civilizacion[i];
        }
        lista_civilizacion.clear();
    }
    return 0;
}
