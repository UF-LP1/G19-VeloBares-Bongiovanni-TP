/**
 * Project Untitled
 */

#ifndef _CORTINAS_H
#define _CORTINAS_H

#include "ArtBanio.h"

class Cortinas: public ArtBanio {
	Cortinas(string color_, unsigned int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_);
	~Cortinas();
};

#endif //_CORTINAS_H