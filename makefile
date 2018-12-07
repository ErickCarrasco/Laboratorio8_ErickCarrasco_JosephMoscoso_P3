execute:	Main.o Civ_17ARZ.o	Civ_BB01.o	Civ_CC10.o Civilizacion.o
	g++	Main.o Civ_17ARZ.o Civ_BB01.o Civ_CC10.o Civilizacion.o -o execute

Civ_17ARZ.o: Civ_17ARZ.h Civ_17ARZ.cpp
	g++ -c Civ_17ARZ.cpp

Civ_BB01.o: Civ_BB01.h Civ_BB01.cpp
	g++ -c Civ_BB01.cpp

Civ_CC10.o: Civ_CC10.h Civ_CC10.cpp
	g++ -c Civ_CC10.cpp

Civilizacion.o: Civilizacion.h Civilizacion.cpp
	g++ -c Civilizacion.cpp

Main.o: Main.cpp
	g++ -c Main.cpp