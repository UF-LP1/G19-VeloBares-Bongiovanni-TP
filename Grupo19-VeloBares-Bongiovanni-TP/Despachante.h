/**
 * Project Untitled
 */


#ifndef _DESPACHANTE_H
#define _DESPACHANTE_H

#include "Empleados.h"


class Despachante: public Empleados {
public: 
    
void entregarproducto();
    
/**
 * @param transporte
 */
void set(void transporte);
private: 
    string transporte;
};

#endif //_DESPACHANTE_H