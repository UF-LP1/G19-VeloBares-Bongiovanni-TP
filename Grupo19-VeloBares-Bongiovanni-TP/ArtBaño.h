/**
 * Project Untitled
 */


#ifndef _ARTBAÑO_H
#define _ARTBAÑO_H

#include "Articulos.h"


class ArtBanio: public Articulos {
public: 
    ArtBanio();
    ~ArtBanio();
    
/**
 * @param string color
 */
void elegircolores( string color);
private: 
    string color;
};

#endif //_ARTBAÑO_H