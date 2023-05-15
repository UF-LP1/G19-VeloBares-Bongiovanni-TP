/**
 * Project Untitled
 */


#ifndef _DESPACHANTE_H
#define _DESPACHANTE_H

#include "Empleados.h"
#include "Cliente.h"

class Despachante: public Empleados {
public: 
    Despachante(string transporte_, string nombree_, string horarioatencion_, unsigned int preciotrabajo_, bool disponible_, unsigned int dnis_, string apellidos_, string duracion_);
    ~Despachante();
    
void entregarproducto(Cliente Camila);

void definirfecha(); //agregue virtual
    
/**
 * @param transporte
 */

void set(string transporte);

private: 
    string transporte;
};

#endif //_DESPACHANTE_H