/**
 * Project Untitled
 */


#ifndef _ARTFERRETERIA_H
#define _ARTFERRETERIA_H

#include "Articulos.h"


class ArtFerreteria: public Articulos {
public: 
    ArtFerreteria();
    ~ArtFerreteria();
/**
 * @param envoltorio
 */
bool chequearenvoltorio(bool envoltorio);
};

#endif //_ARTFERRETERIA_H