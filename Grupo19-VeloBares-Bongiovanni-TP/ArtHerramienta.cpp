/**
 * Project Untitled
 */

#include "ArtHerramienta.h"
#include <iostream>

/**
 * ArtHerramienta implementation
 */

/**
 * @param unsigned int num-art
 * @return void
 */

ArtHerramienta::ArtHerramienta(string nombreart_, int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_) : Articulos(nombreart_, precio_, repuesto_, tamanyo_, numart_, envoltorio_, stock_, descuento_)
{
}

ArtHerramienta::~ArtHerramienta()
{
}

void ArtHerramienta::mostrar()
{
	cout << this->getnombreart() << endl;
	cout << this->getnumerodeart() << endl;
	cout << this->getpreciodeart() << endl;
	cout << this->getdescuentos() << endl;
	cout << this->getrepuesto() << endl;
	cout << this->getstockproducto() << endl;
	cout << this->gettamanyo() << endl;
	return;
}

void ArtHerramienta::alquilar(unsigned int numart,  int precio)
{
	if (getpreciodeart() > 900 && getstockproducto()>0)
	{
		cout << "Podrá alquilarla. Se le cobrará un seguro que en caso de devolver en iguales condiciones, se le devolverá." << endl;
	}
	return;
}
