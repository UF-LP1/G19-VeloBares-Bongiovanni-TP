/**
 * Project Untitled
 */


#ifndef _CEPILLOS_H
#define _CEPILLOS_H

#include "ArtBanio.h"
#include "cerdas.h"

class Cepillos: public ArtBanio {
private: 

    Cepillos( cerdas tipodecerdas_);
    ~Cepillos();
    cerdas tipodecerdas;
};

#endif //_CEPILLOS_H