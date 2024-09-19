#include "mapa.h"
#include "interface.h"





int main() {
	Console::CursorVisible = false;

	int numero_De_basuras;
	numero_De_basuras = 10;
	face* obj;
	obj = new face(numero_De_basuras);

	obj->mostrarbasura();
	obj->mostrarmapa();
	while (true) {

		obj->mostraroso();
		obj->borar1oso();
		obj->movereloso1();

		_sleep(200);

	}

	int x;
	cin >> x;

	return 0;

}