#pragma once
#include "posicion.h"



class bas :public posicion {

protected:

	bool solido = false;
	char basura_;


public:

	//ubicacion aleatoria de la basura
	bas():posicion(){
		basura_ = 'a';
	}

	void mostrarbasura() {
		Console::SetCursorPosition(x, y);
		cout << basura_;
	}

};

