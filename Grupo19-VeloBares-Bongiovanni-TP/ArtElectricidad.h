/**
 * Project Untitled
 */


#ifndef _ARTELECTRICIDAD_H
#define _ARTELECTRICIDAD_H

#include "Articulos.h"


class ArtElectricidad: public Articulos {
public: 
    ArtElectricidad(string nombreart_, int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_);
    ~ArtElectricidad();
    
void probarfuncion();
};

#endif //_ARTELECTRICIDAD_H