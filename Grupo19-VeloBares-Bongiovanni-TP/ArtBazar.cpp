/**
 * Project Untitled
 */

#include "ArtBazar.h"

/**
 * ArtBazar implementation
 */

/**
 * @param enum bazar estado
 * @return void
 */

ArtBazar::ArtBazar(bazar estado_, unsigned int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_) : Articulos(precio_, repuesto_, tamanyo_, numart_, envoltorio_, stock_, descuento_)
{
    this->estado = estado_;
}

ArtBazar::~ArtBazar()
{
}

void ArtBazar::comprobarestado(enum bazar estado)
{
    return;
}
