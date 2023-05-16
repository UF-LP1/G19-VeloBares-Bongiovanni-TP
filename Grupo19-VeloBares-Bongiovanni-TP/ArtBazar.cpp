/**
 * Project Untitled
 */

#include "ArtBazar.h"
#include <iostream>
/**
 * ArtBazar implementation
 */

/**
 * @param enum bazar estado
 * @return void
 */

ArtBazar::ArtBazar(bazar estado_, string nombreart_, int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_) : Articulos(nombreart_, precio_, repuesto_, tamanyo_, numart_, envoltorio_, stock_, descuento_)
{
    this->estado = estado_;
}

ArtBazar::~ArtBazar()
{
}

bazar ArtBazar::getestado()
{
    return this->estado;
}

void ArtBazar::mostrar()
{
    cout << this->getnombreart() << endl;
    cout << this->getnumerodeart() << endl;
    cout << this->getpreciodeart() << endl;
    cout << this->getdescuentos() << endl;
    cout << this->getrepuesto() << endl;
    cout << this->getstockproducto() << endl;
    cout << this->gettamanyo() << endl;
    cout << this->getestado() << endl;

   
	return;
}

void ArtBazar::comprobarestado(bazar estado)
{
    return;
}
