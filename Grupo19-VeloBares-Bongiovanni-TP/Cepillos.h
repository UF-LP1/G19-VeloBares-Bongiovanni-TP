/**
 * Project Untitled
 */


#ifndef _CEPILLOS_H
#define _CEPILLOS_H

#include "ArtBanio.h"
#include "cerdas.h"

class Cepillos: public ArtBanio {
private: 

    Cepillos(cerdas tipodecerdas_, string color, unsigned int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_);
    ~Cepillos();
    cerdas tipodecerdas;
};

#endif //_CEPILLOS_H