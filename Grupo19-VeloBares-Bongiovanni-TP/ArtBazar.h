/**
 * Project Untitled
 */


#ifndef _ARTBAZAR_H
#define _ARTBAZAR_H
#include "Articulos.h"
#include "bazar.h"

class ArtBazar: public Articulos {
public: 
   ArtBazar( bazar estado_, string nombreart_, int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_);
   ~ArtBazar();
    
/**
 * @param enum bazar estado
 */

bazar getestado();
void mostrar();
void comprobarestado(bazar estado);

private: 
     bazar estado;
};

#endif //_ARTBAZAR_H