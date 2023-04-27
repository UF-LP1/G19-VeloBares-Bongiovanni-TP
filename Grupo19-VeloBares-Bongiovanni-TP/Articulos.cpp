/**
 * Project Untitled
 */
#include <list>

#include "Articulos.h"

/**
 * Articulos implementation
 */


Articulos::Articulos(string caracteristicas, unsigned int precio, bool repuesto, unsigned int tamanyo, unsigned int numart, bool envoltorio, bool stock, bool descuento, list<Articulos> catalogo)
{
}

Articulos::~Articulos()
{
}

/**
 * @param precio
 * @return void
 */
void Articulos::set(unsigned int precio) {
    return;
}

/**
 * @param num-art
 * @return unsigned int
 */
unsigned int Articulos::get(unsigned int numart) {
    return this-> numart;
}

/**
 * @param stock
 * @return bool
 */


bool Articulos::get(bool stock)
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
void Articulos::set(bool descuento) {
    return;
}

bool Articulos::getdescuento()
{
    return false;
}

unsigned int Articulos::getprecio()
{
    return this-> precio;
}
