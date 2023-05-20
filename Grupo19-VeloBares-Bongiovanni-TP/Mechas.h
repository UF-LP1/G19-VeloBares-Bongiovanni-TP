/**
 * Project Untitled
 */

#ifndef _MECHAS_H
#define _MECHAS_H

#include "ArtFerreteria.h"

class Mechas: public ArtFerreteria {

	Mechas(string nombreart_, int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_);
	~Mechas();

};

#endif //_MECHAS_H