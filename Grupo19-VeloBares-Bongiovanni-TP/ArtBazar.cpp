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
    cout << "nombre del Articulo es:" << this->nombreart << endl;
    cout << "precio del Articulo es:" << this->precio << endl;
    cout << "repuesto del Articulo es:" << this->repuesto << endl;
    cout << "tamanio del Articulo es:" << this->tamanyo << endl;
    cout << "numero del Articulo es:" << this->numart << endl;
    cout << "envoltorio del Articulo es:" << this->envoltorio << endl;
    cout << "stock del Articulo es:" << this->stock << endl;
    cout << "descuento del Articulo es:" << this->descuento << endl;
    cout << "estado del Articulo es:" << this->estado << endl;
   
	return;
}

void ArtBazar::comprobarestado(bazar estado)
{
    return;
}
