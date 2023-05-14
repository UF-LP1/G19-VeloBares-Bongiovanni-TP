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

ArtHerramienta::ArtHerramienta(unsigned int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_) : Articulos(precio_, repuesto_, tamanyo_, numart_, envoltorio_, stock_, descuento_)
{
}

ArtHerramienta::~ArtHerramienta()
{
}

unsigned int ArtHerramienta::getprecioherramienta()
{
	return this->getprecioherramienta();
}

void ArtHerramienta::alquilar(unsigned int numart, unsigned int precio)
{
	if (getprecioherramienta() > 900)
	{
		cout << "Podrá alquilarla. Se le cobrará un seguro que en caso de devolver en iguales condiciones, se le devolverá." << endl;
	}
	return;
}
