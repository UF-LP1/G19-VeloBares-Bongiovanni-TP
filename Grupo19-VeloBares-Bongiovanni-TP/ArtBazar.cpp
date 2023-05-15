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

void ArtBazar::mostrar()
{
	cout << "Nombre del Articulo es:" << this->nombreart << endl;
	cout << "Precio del Articulo es:" << this->precio << endl;
	cout << "Numero del Articulo es:" << this->numart << endl;
	return;
}

void ArtBazar::comprobarestado(bazar estado)
{
    return;
}
