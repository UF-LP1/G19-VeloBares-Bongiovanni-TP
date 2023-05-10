/**
 * Project Untitled
 */

#include "ArtHerramienta.h"

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

void ArtHerramienta::alquilar(unsigned int numart)
{
	return;
}
