/**
 * Project Untitled
 */

#include <list>
#ifndef _FERRETERIA_H
#define _FERRETERIA_H
#include "Empleados.h"

using namespace std;

class Ferreteria {
public: 
    
/**
 * @param ubicacion
 */
void set(string ubicacion);

bool getabierto();
    

    
void llamarcerrajero();
    
void llamarplomero();
    
void llamardespachante();
    
string getnombref();
    
/**
 * @param horario
 */
void set(string horario);
private: 
    string nombref;
    string ubicacion;
    string horario;
    bool abierto;
    
};

#endif //_FERRETERIA_H