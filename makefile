execute:	Main.o Civ_17ARZ.o	Civ_BB01.o	Civ_CC10.o Civilizacion.o
	g++	Main.o Civ_17ARZ.o Civ_BB01.o Civ_CC10.o Civilizacion.o -o execute

Civ_17ARZ.o: Civ_17ARZ.h Civ_17ARZ.cpp
	g++ -std=c++11 -c Civ_17ARZ.cpp

Civ_BB01.o: Civ_BB01.h Civ_BB01.cpp
	g++ -std=c++11 -c Civ_BB01.cpp

Civ_CC10.o: Civ_CC10.h Civ_CC10.cpp
	g++ -std=c++11 -c Civ_CC10.cpp

Civilizacion.o: Civilizacion.h Civilizacion.cpp
	g++ -std=c++11 -c Civilizacion.cpp

Main.o: Main.cpp
	g++ -std=c++11 -c Main.cpp