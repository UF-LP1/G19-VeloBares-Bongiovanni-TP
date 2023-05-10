/**
 * Project Untitled
 */


#ifndef _ENCHUFES_H
#define _ENCHUFES_H

#include "ArtElectricidad.h"
#include "patas.h"

class Enchufes: public ArtElectricidad {
private: 

    Enchufes(patas tipodepatas_, unsigned int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_);
    ~Enchufes();
    patas tipodepatas;
};

#endif //_ENCHUFES_H