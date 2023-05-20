/**
 * Project Untitled
 */

#ifndef _TENDERS_H
#define _TENDERS_H

#include "ArtBazar.h"

class Tenders: public ArtBazar {

	Tenders(bazar estado_, string nombreart_, int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_);
	~Tenders();

};

#endif //_TENDERS_H