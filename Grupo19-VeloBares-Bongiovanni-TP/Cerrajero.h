/**
 * Project Untitled
 */


#ifndef _CERRAJERO_H
#define _CERRAJERO_H

#include "Empleados.h"


class Cerrajero: public Empleados {
public: 
    Cerrajero();
    ~Cerrajero();
    
/**
 * @param enum tipo llave
 */
void copiarllaves( enum tipo llave);
    
enum llaves gettipo();
    
void arreglecerraduras();
};

#endif //_CERRAJERO_H