/**
 * Project Untitled
 */


#ifndef _ARTFERRETERIA_H
#define _ARTFERRETERIA_H

#include "Articulos.h"


class ArtFerreteria: public Articulos {
public: 
    void Attribute1;
    
/**
 * @param envoltorio
 */
bool chequearenvoltorio(void envoltorio);
};

#endif //_ARTFERRETERIA_H