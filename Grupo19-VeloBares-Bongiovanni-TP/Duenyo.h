/**
 * Project Untitled
 */


#include <string> 
#include "Articulos.h"
#include "ArtBazar.h"
#include "ArtBaño.h"
#include "ArtCerrajeria.h"
#include "ArtElectricidad.h"
#include "ArtFerreteria.h"
#include "ArtHerramienta.h"

#ifndef _DUENYO_H
#define _DUENYO_H
#include <list>

class Duenyo {
public: 
   Duenyo(string nombred, const string DNI, string horariotrabajo, string apellidod);
   ~Duenyo();
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
float generarPresupuesto(list<Articulos> Lista, bool descuento, unsigned int precio);
    
/**
 * @param Cliente.lista
 */

    
void atendercliente();
    
string getnombred();
private: 
    string nombred;
    const string DNI;
    string horariotrabajo;
    string apellidod;
};

#endif //_DUENYO_H