/**
 * Project Untitled
 */

#include <string>
#include <list>
#ifndef _FERRETERIA_H
#define _FERRETERIA_H
#include "Empleados.h"

using namespace std;

class Ferreteria {
public: 
    Ferreteria(string nombref_, string ubicacion_, string horario_, bool abierto_);
    ~Ferreteria();
    
/**
 * @param ubicacion
 */
void setubic(string ubicacion);

void setabierto(bool abierto);
    
void llamarcerrajero();
    
void llamarplomero();
    
void llamardespachante();
    
string getnombref();

string getubic();

void sethora(string horario);
    
/**
 * @param horario
 */

private: 
    string nombref;
    string ubicacion;
    string horario;
    bool abierto;
    
};

#endif //_FERRETERIA_H