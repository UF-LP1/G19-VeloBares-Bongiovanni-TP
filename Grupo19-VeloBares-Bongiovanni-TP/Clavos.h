/**
 * Project Untitled
 */


#ifndef _CLAVOS_H
#define _CLAVOS_H

#include "ArtFerreteria.h"
#include "tam.h"

class Clavos: public ArtFerreteria {
private: 

    Clavos( tam largo_);
    ~Clavos();
    tam largo; 
};

#endif //_CLAVOS_H