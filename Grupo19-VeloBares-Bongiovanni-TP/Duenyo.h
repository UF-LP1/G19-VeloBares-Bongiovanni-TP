/**
 * Project Untitled
 */
#include "Articulos.h"
#include "Cliente.h"
#include <string> 
#ifndef _DUENYO_H
#define _DUENYO_H


class Duenyo {
public: 
    Duenyo::Duenyo(string nombred, const string DNI, string horariotrabajo, string apellidod);
    
/**
 * @param horariotrabajo
 */
void set( string horariotrabajo);
    
void set(string horariotrabajo);

/**
 * @param DNI
 */
string get(string DNI);
    
void abrirlocal();
float generarPresupuesto(list<Articulos> Lista; bool descuento; unsigned int precio);
    
/**
 * @param Cliente.lista
 */
int cobrar(void Cliente.lista);
    
void atendercliente();
    
string getnombred();
private: 
    string nombred;
    const string DNI;
    string horariotrabajo;
    string apellidod;
};

#endif //_DUENYO_H