/**
 * Project Untitled
 */

#ifndef _ARTHERRAMIENTA_H
#define _ARTHERRAMIENTA_H

#include "Articulos.h"

class ArtHerramienta: public Articulos {
public: 
    ArtHerramienta(unsigned int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_);
    ~ArtHerramienta();
    
/**
 * @param unsigned int num-art
 */

void alquilar(unsigned int numart, unsigned int precio);

unsigned int getprecioherramienta();

};

#endif //_ARTHERRAMIENTA_H