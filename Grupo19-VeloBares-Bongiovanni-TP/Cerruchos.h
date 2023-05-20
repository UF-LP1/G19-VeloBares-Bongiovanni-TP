/**
 * Project Untitled
 */

#ifndef _CERRUCHOS_H
#define _CERRUCHOS_H

#include "ArtHerramienta.h"

class Cerruchos: public ArtHerramienta {

	Cerruchos(string nombreart_, int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_);
	~Cerruchos();

};

#endif //_CERRUCHOS_H