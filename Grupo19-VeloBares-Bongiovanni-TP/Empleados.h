/**
 * Project Untitled
 */

 
#ifndef _EMPLEADOS_H
#define _EMPLEADOS_H

#include <string>
using namespace std;

class Empleados {
public: 
    Empleados(string nombree, string horarioatencion, unsigned int preciotrabajo,bool disponible, unsigned int dnis,string apellidos,string duracion);
    ~Empleados();
    
/**
 * @param preciotrabajo
 */;
void set(unsigned int preciotrabajo);
    
/**
 * @param disponible
 */
bool get(bool disponible);
    
/**
 * @param horariodeatencion
 */
void set(string horariodeatencion);
    
string getnombree();
    
void definirfecha();
protected: 
    string nombree;
    string horarioatencion;
    unsigned int preciotrabajo;
    bool disponible;
     unsigned int dnis;
    string apellidos;
    string duracion;
};

#endif //_EMPLEADOS_H