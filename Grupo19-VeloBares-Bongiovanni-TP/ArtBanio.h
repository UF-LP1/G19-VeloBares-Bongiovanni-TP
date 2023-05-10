/**
 * Project Untitled
 */


#ifndef _ARTBANIO_H
#define _ARTBANIO_H

#include "Articulos.h"


class ArtBanio: public Articulos {
public: 
    ArtBanio(string color_, unsigned int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_);
    ~ArtBanio();
    
/**
 * @param string color
 */
void elegircolores( string color);
private: 
    string color;
};

#endif //_ARTBANIO_H