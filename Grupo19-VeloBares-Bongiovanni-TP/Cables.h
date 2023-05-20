/**
 * Project Untitled
 */

#ifndef _CABLES_H
#define _CABLES_H

#include "ArtElectricidad.h"

class Cables: public ArtElectricidad {

Cables(unsigned int largo_, string nombreart_, int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_);
~Cables();

private:
	unsigned int largo;
};
#endif //_CABLES_H