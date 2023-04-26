/**
 * Project Untitled
 */


#ifndef _EMPLEADOS_H
#define _EMPLEADOS_H

class Empleados {
public: 
    
/**
 * @param preciotrabajo
 */
void set(void preciotrabajo);
    
/**
 * @param disponible
 */
bool get(void disponible);
    
/**
 * @param horariodeatencion
 */
void set(void horariodeatencion);
    
string getnombree();
    
void definirfecha();
protected: 
    string nombree;
    string horarioatencion;
    unsigned int preciotrabajo;
    bool disponible;
    const unsigned int dnis;
    string apellidos;
    string duracion;
};

#endif //_EMPLEADOS_H