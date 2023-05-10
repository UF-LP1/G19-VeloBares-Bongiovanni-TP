/**
 * Project Untitled
 */


#ifndef _CERRADURA_H
#define _CERRADURA_H

#include "ArtCerrajeria.h"


class Cerradura: public ArtCerrajeria {
	
	Cerradura(unsigned int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_);

	~Cerradura();
		

};

#endif //_CERRADURA_H