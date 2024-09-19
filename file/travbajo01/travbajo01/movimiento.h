#pragma once
#include "posicion.h"




class movimiento :public posicion {
protected:
	int dx;
	int dy;
	bool solidao;

public:
	movimiento(int a, int b) :posicion(a, b) {
		dx = 1;
		dy = 1;
	}

	void cambio_de_posicion(int a, int b) {
			x = a;
			y = b;

	}


	void mover() {
		char tecla = 'o';
		if (_kbhit()) {
			tecla = _getch();
		}

		switch (tecla)
		{
		case 'a':
			cambio_de_posicion(x - dx, y);

				break;
		case 'w':
			cambio_de_posicion(x , y-dy);

			break;
		case 's':
			cambio_de_posicion(x , y+dy);

			break;
		case 'd':
			cambio_de_posicion(x +dx, y);

			break;
		default:
			break;
		}

	}




};