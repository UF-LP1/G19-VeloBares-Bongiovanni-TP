/**
 * Project Untitled
 */


#ifndef _ARTFERRETERIA_H
#define _ARTFERRETERIA_H

#include "Articulos.h"


class ArtFerreteria: public Articulos {
public: 
    ArtFerreteria(unsigned int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_);
    ~ArtFerreteria();
/**
 * @param envoltorio
 */
bool chequearenvoltorio(bool envoltorio);
};

#endif //_ARTFERRETERIA_H