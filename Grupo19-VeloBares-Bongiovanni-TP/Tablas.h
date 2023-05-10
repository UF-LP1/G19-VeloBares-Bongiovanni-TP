/**
 * Project Untitled
 */


#ifndef _TABLAS_H
#define _TABLAS_H

#include "ArtBazar.h"


class Tablas: public ArtBazar {

	Tablas(bazar estado_, unsigned int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_);
	~Tablas();
	
};

#endif //_TABLAS_H