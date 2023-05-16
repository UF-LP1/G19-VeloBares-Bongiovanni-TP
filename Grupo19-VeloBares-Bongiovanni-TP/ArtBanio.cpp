/**
 * Project Untitled
 */

#include "ArtBanio.h"
#include <iostream>

/**
 * ArtBanio implementation
 */

/**
 * @param string color
 * @return void
 */

ArtBanio::ArtBanio(string color_, string nombreart_, int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_) : Articulos(nombreart_, precio_, repuesto_, tamanyo_, numart_, envoltorio_, stock_, descuento_)
{
	this->color = color_;
}

ArtBanio::~ArtBanio()
{
}

string ArtBanio:: getcolor()
{
	return this->color;
}
void ArtBanio::mostrar()
{
	cout << this->getnombreart() << endl;
	cout << this->getnumerodeart() << endl;
	cout << this->getpreciodeart() << endl;
	cout << this->getdescuentos() << endl;
	cout << this->getrepuesto() << endl;
	cout << this->getstockproducto() << endl;
	cout << this->gettamanyo() << endl;
	cout << this->getcolor() << endl;

	return;
}

void ArtBanio::elegircolores(string color)
{
	return;
}
