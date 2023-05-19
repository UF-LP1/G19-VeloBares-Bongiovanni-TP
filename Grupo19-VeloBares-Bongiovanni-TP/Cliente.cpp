/**
 * Project Untitled
 */

#include "Cliente.h"

/**
 * Cliente implementation
 */

Cliente::Cliente(string nombrec_, string domicilio_, unsigned int telefono_,  string dni_, bool permiso_, bool foto_, list<Articulos> Lista_)
{
    this->nombrec = nombrec_;
    this->domicilio = domicilio_;
    this->telefono = telefono_;
    this->dni = dni_;
    this->permiso = permiso_;
    this->foto = foto_;
    this->Lista = Lista_;  
}

Cliente::Cliente(string nombrec_, string domicilio_, unsigned int telefono_, string dni_, bool permiso_, bool foto_)
{
    this->nombrec = nombrec_;
    this->domicilio = domicilio_;
    this->telefono = telefono_;
    this->dni = dni_;
    this->permiso = permiso_;
    this->foto = foto_;
}

Cliente::~Cliente()
{
}

/**
 * @param telefono
 * @return void
 */

void Cliente::settelefono(unsigned int telefono)
{ 
    return;
}

/**
 * @param permiso
 * @return bool
 */

bool Cliente::getpermiso(bool permiso)
{ 
    return false;
}

bool Cliente::getfoto(bool foto)
{
    return false;
}

/**
 * @param unsigned int num-art
 * @return void
 */

void Cliente::comprarart( unsigned int numart) 
{
    return;
}

/**
 * @return void
 */

void Cliente::pedirempleados() 
{
    return;
}

/**
 * @param Duenyo.cobrar
 * @return void
 */

/**
 * @return string
 */

string Cliente::getnombrec() 
{
    return this->nombrec;
}

/**
 * @return string
 */

string Cliente::getubicacion()
{
    return this->domicilio;
}

/**
 * @param Articulos.precio
 * @return void
 */

void Cliente::verprecio(Articulos precioArt) 
{ 
    int _i=0;

    list<Articulos>::iterator it = Lista.begin();
    for (int i = 0; i < _i; i++) 
    {
        it++;
        cout << it->getpreciodeart() << endl;
    }
    
    return; 
}

/**
 * @return void
 */

list<Articulos> Cliente::get_lista()
{
    return this->Lista;
}

void Cliente::agregarcarrito(Articulos a4)
{
    Lista.push_back(a4);

    return;
}




