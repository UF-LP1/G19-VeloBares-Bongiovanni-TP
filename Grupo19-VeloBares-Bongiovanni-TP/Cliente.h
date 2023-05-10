/**
 * Project Untitled
 */

#include "Duenyo.h"
#include "Articulos.h"
#include <list>
#ifndef _CLIENTE_H
#define _CLIENTE_H
#include <iostream>
#include <string> 
using namespace std;

class Cliente {
public: 
    Cliente(string nombrec_, string domicilio_, unsigned int telefono_, const string dni_, bool permiso_, list<Articulos> Lista_);
    ~Cliente();
/**
 * @param telefono
 */
void settelefono(unsigned int telefono);
    
/**
 * @param permiso
 */
bool getpermiso(bool permiso);
    
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

//Articulos agregaralista();

list<Articulos> get_lista();
void agregarcarrito(Articulos a4);

private: 
    string nombrec;
    string domicilio;
    unsigned int telefono;
    string dni;
    bool permiso;
    list<Articulos> Lista;
};

#endif //_CLIENTE_H