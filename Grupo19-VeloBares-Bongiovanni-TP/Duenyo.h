/**
 * Project Untitled
 */

#include <string> 
#include <iostream>
#include "Articulos.h" // si no haciamos esto, explotaba todo:,)
#include "ArtBazar.h"
#include "ArtBanio.h"
#include "ArtCerrajeria.h"
#include "ArtElectricidad.h"
#include "ArtFerreteria.h"
#include "ArtHerramienta.h"
#include "Ferreteria.h"


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
    
/**
 * @param Cliente.lista
 */

void atendercliente();
    
string getnombred();

private: 
    string nombred;
    string DNI;
    string horariotrabajo;
    string apellidod;
};

#endif //_DUENYO_H