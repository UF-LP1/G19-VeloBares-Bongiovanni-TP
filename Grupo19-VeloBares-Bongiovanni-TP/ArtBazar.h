/**
 * Project Untitled
 */


#ifndef _ARTBAZAR_H
#define _ARTBAZAR_H

#include "Articulos.h"


class ArtBazar: public Articulos {
public: 
   ArtBazar();
   ~ArtBazar();
    
/**
 * @param enum bazar estado
 */
void comprobarestado( enum bazar estado);
private: 
    enum bazar estado;
};

#endif //_ARTBAZAR_H