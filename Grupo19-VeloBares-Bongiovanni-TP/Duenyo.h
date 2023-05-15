/**
 * Project Untitled
 */

#include <string> 
#include <iostream>
#include "Articulos.h" 
#include "Ferreteria.h"
#include "Cliente.h"
#include "customEx.h"

#ifndef _DUENYO_H
#define _DUENYO_H
#include <list>

class Duenyo {
public: 
   Duenyo(string nombred_,  string DNI_, string horariotrabajo_, string apellidod_);
   ~Duenyo();
/**
 * @param horariotrabajo
 */

void set(string horariotrabajo);
    
string getapellidod();

/**
 * @param DNI
 */

string get(string DNI);
    
void abrirlocal();

float generarPresupuesto(list<Articulos> Lista);

friend ostream& operator<<(ostream& out, Cliente* General);
    
void atendercliente();
    
string getnombred();

void hacerticket(Ferreteria LaLola);

void imprimirtotal(float total);
private: 
    string nombred;
    string DNI;
    string horariotrabajo;
    string apellidod;
};

#endif //_DUENYO_H