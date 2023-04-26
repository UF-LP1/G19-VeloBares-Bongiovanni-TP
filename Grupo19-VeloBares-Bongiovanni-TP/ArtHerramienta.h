/**
 * Project Untitled
 */


#ifndef _ARTHERRAMIENTA_H
#define _ARTHERRAMIENTA_H

#include "Articulos.h"


class ArtHerramienta: public Articulos {
public: 
    ArtHerramienta();
    ~ArtHerramienta();
    
/**
 * @param unsigned int num-art
 */
void alquilar( unsigned int numart);
};

#endif //_ARTHERRAMIENTA_H