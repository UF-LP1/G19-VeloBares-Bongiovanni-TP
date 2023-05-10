/**
 * Project Untitled
 */

#include "Cables.h"

/**
 * Cables implementation
 */

Cables::Cables(unsigned int largo_, unsigned int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_) : ArtElectricidad (precio_, repuesto_, tamanyo_, numart_, envoltorio_, stock_, descuento_)
{
	this->largo = largo_;
}
Cables::~Cables()
{
}
