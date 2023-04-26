/**
 * Project Untitled
 */
#include "Duenyo.h"
#include "Articulos.h"
#include <list>
#ifndef _CLIENTE_H
#define _CLIENTE_H

#include <string> 
using namespace std;
class Cliente {
public: 
    Cliente(string nombrec, string domicilio, unsigned int telefono, const string dni, bool permiso, list<Articulos> Lista);
    ~Cliente();
/**
 * @param telefono
 */
void set(unsigned int telefono);
    
/**
 * @param permiso
 */
bool get(bool permiso);
    
/**
 * @param unsigned int num-art
 */
void comprarart( unsigned int numart);
    
void pedirempleados();
    
/**
 * @param Duenyo.cobrar
 */

    
void pagar(Duenyo josecito);

string getnombrec();
    
string getubicacion();
    
/**
 * @param Articulos.precio
 */

    
void verprecio(Articulos precioArt);


void agregaralista();
private: 
    string nombrec;
    string domicilio;
    unsigned int telefono;
    const string dni;
    bool permiso;
    list<Articulos> Lista;
};


#endif //_CLIENTE_H