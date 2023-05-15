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
ArtFerreteria::ArtFerreteria(string nombreart_, int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_) : Articulos(nombreart_, precio_, repuesto_, tamanyo_, numart_, envoltorio_, stock_, descuento_)
{
}
ArtFerreteria::~ArtFerreteria()
{
}

