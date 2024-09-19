#pragma once

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
using namespace System;



class posicion {

protected:
	int x;
	int y;

	bool solido;

	int limites_x=119;
	int limites_y= 29;

public:

	//para basura lugar randon;
	posicion() {
		 x = rand() % limites_x+1;
		 y = rand() % limites_y + 1;
	}


	//recibe parametros de la posicion inicial
	posicion(int a, int b) {

		x = a; y = b;
	}
	~posicion(){}



	// para objetos
	posicion(int a, int b, bool t) {
		x = a;
		y = b;
		solido = t;
	}


	int getx() { return x; }
	int gety() { return y; }


	int getlimites_x() { return limites_x; };
	int getlimites_y() { return limites_y; };

	void setpos(int a, int b) {
		x = a; 
		y = b; }

};

