/**
 * Project Untitled
 */

#include <string> 
#include <iostream>
#include "Articulos.h" 
#include "ArtHerramienta.h" 
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
    
string getnombred();

void hacerticket(Ferreteria LaLola);

void abrirlocal();

float generarPresupuesto(list<Articulos> Lista);

void alquilar(bool stock);

friend class Articulos;

private: 
    string nombred;
    string DNI;
    string horariotrabajo;
    string apellidod;
};

ostream& operator<<(ostream& out, Cliente* General);

#endif //_DUENYO_H