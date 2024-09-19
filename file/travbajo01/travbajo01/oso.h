#pragma once
#include "movimiento.h"	


using namespace System;


class oso :public movimiento {

protected:
	//definir la posicion inicial
	int ubicacion_inicial_x = 4;
	int ubicacion_inicial_y = 4;
	int direccion_x;
	int direccion_y;

	char oso1 = 'B';

public:
	oso(int a, int b) :movimiento(a, b) {
		direccion_x = 1;
		direccion_y = 1;
	}
	bool estaCerca(int a, int b) {
		if (x - 1 == a) { return true; }

		else if (x + 1 == a) { return true; }
		else if (y - 1 == b) { return true; }
		else if (y - 1 == y) { return true; }
		else {
			return false;
		}

	}
	void elec_direccion() {
	
		if (x == 118) {

			direccion_x = -1;
		}
		if (x == 1) { direccion_x = 1; }
		if (y == 27) {

			direccion_y = -1;
		}
		if (y == 2) { direccion_y = 1; }

	}
	void moverosos() {
		x = x + direccion_x, y = y + direccion_y;

			Console::SetCursorPosition(x, y); cout << oso1;
		
	}
	void mostrar_oso() {
		Console::SetCursorPosition(x, y); cout << oso1;


	}
	void borraroso() {
		Console::SetCursorPosition(x, y); cout << " ";
	}

};