#pragma once
#include <iostream>

using namespace std;
using namespace System;



class mapa{

protected:
	char sig;
	short numeroascII;

public:

	mapa(){
		sig = '0';
	}

	void mostrar() {
		for (int i = 0; i < 120;i++) {
			for (int j = 1; j < 30; j++) {
				if (i == 0 || i == 119  ) {
					Console::SetCursorPosition(i, j); cout << sig;
				}
				if (j == 1 || j == 29 ) {
					Console::SetCursorPosition(i, j); cout << sig;
				}


		}

		}
	}

};