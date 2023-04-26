/**
 * Project Untitled
 */


#ifndef _ARTBAÑO_H
#define _ARTBAÑO_H

#include "Articulos.h"


class ArtBaño: public Articulos {
public: 
    void Attribute1;
    
/**
 * @param string color
 */
void elegircolores(void string color);
private: 
    string color;
};

#endif //_ARTBAÑO_H