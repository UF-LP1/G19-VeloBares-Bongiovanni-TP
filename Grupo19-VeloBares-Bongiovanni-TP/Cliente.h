/**
 * Project Untitled
 */

#include "Articulos.h"
#include <list>
#ifndef _CLIENTE_H
#define _CLIENTE_H
#include <iostream>
#include <string> 
using namespace std;

class Cliente {
public: 
    Cliente(string nombrec_, string domicilio_, unsigned int telefono_, const string dni_, bool permiso_, bool foto, list<Articulos> Lista_);
    Cliente(string nombrec_, string domicilio_, unsigned int telefono_, string dni_, bool permiso_, bool foto);
    ~Cliente();
/**
 * @param telefono
 */
void settelefono(unsigned int telefono);
    
/**
 * @param permiso
 */
bool getpermiso(bool permiso);

bool getfoto(bool foto);
    
/**
 * @param unsigned int num-art
 */
void comprarart( unsigned int numart);
    
void pedirempleados();
    
/**
 * @param Duenyo.cobrar
 */
    
//void pagar(Duenyo josecito);

string getnombrec();
    
string getubicacion();
    
/**
 * @param Articulos.precio
 */
  
void verprecio(Articulos precioArt);

//Articulos agregaralista();

list<Articulos> get_lista();

void agregarcarrito(Articulos a4);
friend class Duenyo;
private: 
    string nombrec;
    string domicilio;
    unsigned int telefono;
    string dni;
    bool permiso;
    bool foto;
    list<Articulos> Lista;
};

#endif //_CLIENTE_H