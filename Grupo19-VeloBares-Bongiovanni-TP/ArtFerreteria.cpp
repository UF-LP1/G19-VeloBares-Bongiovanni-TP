/**
 * Project Untitled
 */

#include "ArtFerreteria.h"

/**
 * ArtFerreteria implementation
 */

/**
 * @param envoltorio
 * @return bool
 */
ArtFerreteria::ArtFerreteria(unsigned int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_) : Articulos(precio_, repuesto_, tamanyo_, numart_, envoltorio_, stock_, descuento_)
{
}
ArtFerreteria::~ArtFerreteria()
{
}

bool ArtFerreteria::chequearenvoltorio(bool envoltorio) 
{
    return false;
}