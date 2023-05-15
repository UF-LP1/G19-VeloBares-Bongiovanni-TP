/**
 * Project Untitled
 */


#include "Enchufes.h"

/**
 * Enchufes implementation
 */
Enchufes::Enchufes( patas tipodepatas_, string nombreart_, int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_) : ArtElectricidad(nombreart_, precio_, repuesto_, tamanyo_, numart_, envoltorio_, stock_, descuento_)
{
	this->tipodepatas = tipodepatas_;
}
Enchufes::~Enchufes()
{
}
