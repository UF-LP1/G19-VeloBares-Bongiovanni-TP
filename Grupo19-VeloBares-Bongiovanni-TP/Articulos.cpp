/**
 * Project Untitled
 */

#include <list>
#include <iostream>
#include "Articulos.h"

/**
 * Articulos implementation
 */

Articulos::Articulos(unsigned int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_)
{
 
    this->precio = precio_;
    this->repuesto = repuesto_;
    this->tamanyo = tamanyo_;
    this->numart = numart_;
    this->envoltorio = envoltorio_;
    this->stock = stock_;
    this->descuento = descuento_;
 
}

Articulos::~Articulos()
{
}

/**
 * @param precio
 * @return void
 */

void Articulos::setpreciodeart(unsigned int precio) 
{  
    return;
}

/**
 * @param num-art
 * @return unsigned int
 */

unsigned int Articulos::getnumerodeart(unsigned int numart) 
{
    return this-> numart;
}

/**
 * @param stock
 * @return bool
 */

bool Articulos::getstockproducto(bool stock)
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

bool Articulos::getdescuentos(bool descuento) 
{
    return false;
}

unsigned int Articulos::getpreciodeart()
{
    return this-> precio;
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
