/**
 * Project Untitled
 */


#ifndef _CERRAJERO_H
#define _CERRAJERO_H

#include "Empleados.h"


class Cerrajero: public Empleados {
public: 
    
/**
 * @param enum tipo llave
 */
void copiarllaves(void enum tipo llave);
    
emun llave gettipo();
    
void arreglecerraduras();
};

#endif //_CERRAJERO_H