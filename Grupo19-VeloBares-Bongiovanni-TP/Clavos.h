/**
 * Project Untitled
 */


#ifndef _CLAVOS_H
#define _CLAVOS_H

#include "ArtFerreteria.h"
#include "tam.h"

class Clavos: public ArtFerreteria {
private: 

    Clavos(tam largo_, string nombreart_, int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_);
    ~Clavos();
    tam largo; 
};

#endif //_CLAVOS_H