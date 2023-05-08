/**
 * Project Untitled
 */
#include <list>

#include "Articulos.h"

/**
 * Articulos implementation
 */


Articulos::Articulos(string caracteristicas_, unsigned int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_, list<Articulos> catalogo_)
{
    this->caracteristicas = caracteristicas_;
    this->precio = precio_;
    this->repuesto = repuesto_;
    this->tamanyo = tamanyo_;
    this->numart = numart_;
    this->envoltorio = envoltorio_;
    this->stock = stock_;
    this->descuento = descuento_;
    this->catalogo = catalogo_;
}

Articulos::~Articulos()
{
}


/**
 * @param precio
 * @return void
 */
void Articulos::setpreciodeart(unsigned int precio) { //cambie el nombre de los get y set 
    return;
}

/**
 * @param num-art
 * @return unsigned int
 */
unsigned int Articulos::getnumerodeart(unsigned int numart) {
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
void Articulos::reponerstock() {
    return;
}

/**
 * @param descuento
 * @return void
 */
void Articulos::setdescuentos(bool descuento) {
    return;
}

bool Articulos::getdescuentos(bool descuento) //ahora recibe
{
    return false;
}

unsigned int Articulos::getpreciodeart()
{
    return this-> precio;
}
