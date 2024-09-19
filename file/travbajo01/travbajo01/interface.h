#pragma once
#include "oso.h"
#include "contaminado.h"
#include "mapa.h"



class face {
private:
	oso* objoso;
	bas** objbas;
	int cantidad_de_basuras;
	//personaje* objper;
	mapa* objmapa;


public:

	face(int a) {
		cantidad_de_basuras = a;

		//(4,4) posicion inicial
		objoso = new oso(4,4);

		
		
		objbas = new bas * [cantidad_de_basuras];
		for (int i = 0; i < cantidad_de_basuras; i++) {
			objbas[i] = new bas;
		}


		objmapa = new mapa;
	}

	~face() {}

	void mostrarbasura() {
		for (int i = 0; i < cantidad_de_basuras; i++) {
			objbas[i]->mostrarbasura();
		}

	}
	void mostrarmapa() {
		objmapa->mostrar();
	}
	void mostraroso() {

		objoso->mostrar_oso();

	}


	void movereloso1() {

		objoso->elec_direccion();
			objoso->moverosos();

			
	}
	void borar1oso() {
		objoso->borraroso();
	}

};