/**
 * Project Untitled
 */

#include "Cepillos.h"

/**
 * Cepillos implementation
 */

Cepillos::Cepillos( cerdas tipodecerdas_, string color_, unsigned int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_): ArtBanio (color_,precio_, repuesto_, tamanyo_, numart_, envoltorio_, stock_, descuento_)
{
	this->tipodecerdas = tipodecerdas_;
}

Cepillos::~Cepillos()
{
}
