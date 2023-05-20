/**
 * Project Untitled
 */
 
#ifndef _EMPLEADOS_H
#define _EMPLEADOS_H

#include <string>
using namespace std;

class Empleados {
public: 
    Empleados(string nombree_, string horarioatencion_, unsigned int preciotrabajo_, bool disponible, unsigned int dnis_,string apellidos_,string duracion_);
    ~Empleados();
    
/**
 * @param preciotrabajo
 */;

void set(unsigned int preciotrabajo);
    
/**
 * @param disponible
 */

void set(bool disponible);
    
/**
 * @param horariodeatencion
 */

void set(string horariodeatencion);
    
string getnombree();

string getapellidos();

unsigned int getdnis();
    
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

#endif //_EMPLEADOS_;H