/**
 * Project Untitled
 */

#include "Articulos.h"
#include <list>
#ifndef _CLIENTE_H
#define _CLIENTE_H

#include <string> 
using namespace std
class Cliente {
public: 
    Cliente::Cliente(string nombrec; string domicilio; unsigned int telefono; const string dni; bool permiso; Articulos.lista)
    
/**
 * @param telefono
 */
void set(void telefono);
    
/**
 * @param permiso
 */
bool get(void permiso);
    
/**
 * @param unsigned int num-art
 */
void comprarart(void unsigned int num-art);
    
void pedirempleados();
    
/**
 * @param Duenyo.cobrar
 */
void pagar(void Duenyo.cobrar);
    
string getnombrec();
    
string getubicacion();
    
/**
 * @param Articulos.precio
 */
void verprecio(void Articulos.precio);
    
void agregaralista();
private: 
    string nombrec;
    string domicilio;
    unsigned int telefono;
    const string dni;
    bool permiso;
    list <Articulos>;
};

Articulos getlistaArt();
#endif //_CLIENTE_H