/**
 * Project Untitled
 */

#include <list>
#include <iostream>
#include "Articulos.h"

/**
 * Articulos implementation
 */

Articulos:: Articulos (string nombreart_, int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_)
{
    this->nombreart = nombreart_;
    this->precio = precio_;
    this->repuesto = repuesto_;
    this->tamanyo = tamanyo_;
    this->numart = numart_;
    this->envoltorio = envoltorio_;
    this->stock = stock_;
    this->descuento = descuento_; //al fin y al cabo no sirve de nada
 
}

Articulos::~Articulos()
{
}

void Articulos::mostrar()
{
   cout << "El nombre del articulo es:" << this->getnombreart() << ",el numero del articulo es:" << this->getnumerodeart() << ",el precio del articulo es:$" << this->getpreciodeart() << this->getdescuentos() << this->getrepuesto() << this->getstockproducto() << ",el tamanyo del articulo es:" << this->gettamanyo() << endl;
   
   return;
}

/**
 * @param precio
 * @return void
 */

void Articulos::setpreciodeart( int precio) 
{  
    return;
}

/**
 * @param num-art
 * @return unsigned int
 */

unsigned int Articulos::getnumerodeart() 
{
    return this-> numart;
}

/**
 * @param stock
 * @return bool
 */

bool Articulos::getstockproducto()
{
    return false;
}

/**
 * @return void
 */

void Articulos::reponerstock() 
{
    return;
}

/**
 * @param descuento
 * @return void
 */

void Articulos::setdescuentos(bool descuento) 
{
    return;
}

bool Articulos::getdescuentos() 
{
    return false;
}

 int Articulos::getpreciodeart()
{
    return this-> precio;
}

 string Articulos::getnombreart()
 {
     return this->nombreart;
 }

 unsigned int Articulos::gettamanyo()
 {
     return this->tamanyo;
 }

 bool Articulos::getenvoltorio()
 {
     return this->envoltorio;
 }

 bool Articulos::getrepuesto()
 {
     return this->repuesto;
 }

bool Articulos::chequearenvoltorio(bool envoltorio)
{
    //1=TRUE, 0=FALSE

    if (envoltorio == 1)
        cout << "tiene cambio" << endl;
    else
        cout << "no tiene cambio" << endl;

    return false;
}

int Articulos::cantdeart() 
{
    int cant = 0;
    list<Articulos> Lista;
    list<Articulos>::iterator it = Lista.begin();
    for (list<Articulos>::iterator it = Lista.begin(); it != Lista.end(); ++it)
    {
        cant++;
    }
    return cant;
}

void Articulos::cambios(bool envoltorio)
{
    if (envoltorio == true)
        cout << "Podes realizar tu cambio" << endl;
    return;
}
