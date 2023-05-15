/**
 * Project Untitled
 */


#ifndef _ARTCERRAJERIA_H
#define _ARTCERRAJERIA_H

#include "Articulos.h"


class ArtCerrajeria: public Articulos {
public: 
    
    ArtCerrajeria(string nombreart_, int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_);
    ~ArtCerrajeria();
    void mostrar();
};

#endif //_ARTCERRAJERIA_H