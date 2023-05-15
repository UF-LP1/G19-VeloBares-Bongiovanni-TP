/**
 * Project Untitled
 */


#ifndef _PLOMERO_H
#define _PLOMERO_H

#include "Empleados.h"


class Plomero: public Empleados {
public: 
    Plomero(string nombree_, string horarioatencion_, unsigned int preciotrabajo_, bool disponible_, unsigned int dnis_, string apellidos_, string duracion_);
    ~Plomero();
    
void destaparcloaca();

void definirfecha(); //agregue virtual

};

#endif //_PLOMERO_H