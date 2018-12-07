#include "Civ_BB01.h"

Civ_BB01::Civ_BB01(string nombre, string planeta, string lider, int edad):Civilizacion(nombre, planeta, lider, edad){

}

string Civ_BB01::Codificar(string x){
  x+='-';
  string final;
  string temp;
  for (int i = 0; i < s.size(); i++) {
    if (x.at(i)!='-') {
      temp+=x.at(i);
    }else if(x.at(i)=='-'){
      int z=atoi(temp.c_str());
      int decNum = 0;
      int v=1;
      int rem=0;
      while (z!=0) {
          rem=z%10;
          decNum=decNum+rem*v;
          v*=2;
          z/=10;
      }
      char cosas=static_cast<char>(decNum);
      final+=cosas;
      temp.clear();
    }
  }
  return final;
}

string Civ_BB01::Decodificar(string x){
  string final;
  int b=0;
  for (int i = 0; i < x.size(); i++) {
    char cac=x.at(i);
    int num=cac;
    int a[7];
    int j=0;
    while (num>0) {
      b=num%2;
      final+=std::to_string(bin);
      num/=2;
    }
    final+='-';
  }
  return final;
}

Civ_BB01::~Civ_BB01(){

}
