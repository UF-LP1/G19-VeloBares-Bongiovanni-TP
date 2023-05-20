/**
 * Project Untitled
 */

#ifndef _CERRAJERO_H
#define _CERRAJERO_H

#include "Empleados.h"

class Cerrajero: public Empleados {
public: 
    Cerrajero(string nombree_, string horarioatencion_, unsigned int preciotrabajo_, bool disponible_, unsigned int dnis_, string apellidos_, string duracion_);
    ~Cerrajero();
    
/**
 * @param enum tipo llave
 */

void copiarllaves(enum tipo llave);
    
void arreglecerraduras();

};

#endif //_CERRAJERO_H