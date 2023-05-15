/**
 * Project Untitled
 */

#include "ArtBanio.h"

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

void ArtBanio::mostrar()
{
}

void ArtBanio::elegircolores(string color)
{
	return;
}
