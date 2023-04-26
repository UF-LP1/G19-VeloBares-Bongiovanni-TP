/**
 * Project Untitled
 */


#ifndef _ARTBAZAR_H
#define _ARTBAZAR_H

#include "Articulos.h"


class ArtBazar: public Articulos {
public: 
    void Attribute1;
    
/**
 * @param enum bazar estado
 */
void comprobarestado(void enum bazar estado);
private: 
    enum bazar estado;
};

#endif //_ARTBAZAR_H