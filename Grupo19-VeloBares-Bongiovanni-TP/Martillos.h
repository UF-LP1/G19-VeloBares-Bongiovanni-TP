/**
 * Project Untitled
 */


#ifndef _MARTILLOS_H
#define _MARTILLOS_H

#include "ArtHerramienta.h"


class Martillos: public ArtHerramienta {

	Martillos(unsigned int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_);
	~Martillos();

};

#endif //_MARTILLOS_H