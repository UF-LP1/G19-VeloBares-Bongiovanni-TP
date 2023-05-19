/**
 * Project Untitled
 */

#ifndef _ARTHERRAMIENTA_H
#define _ARTHERRAMIENTA_H

#include "Articulos.h"

class ArtHerramienta: public Articulos {
public: 
    ArtHerramienta(string nombreart_, int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_);
    ~ArtHerramienta();
    
/**
 * @param unsigned int num-art
 */
 friend class Duenyo; // para usar la funcion alquilar y acceder a los datos.

void alquilar(unsigned int numart, int precio);

void mostrar();
};

#endif //_ARTHERRAMIENTA_H