/**
 * Project Untitled
 */

#include "ArtFerreteria.h"
#include <iostream>

/**
 * ArtFerreteria implementation
 */

/**
 * @param envoltorio
 * @return bool
 */
ArtFerreteria::ArtFerreteria(string nombreart_, int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_) : Articulos(nombreart_, precio_, repuesto_, tamanyo_, numart_, envoltorio_, stock_, descuento_)
{
}
ArtFerreteria::~ArtFerreteria()
{
}

void ArtFerreteria::mostrar() 
{
	cout << "nombre del Articulo es:" << this->nombreart << endl;
    cout << "precio del Articulo es:" << this->precio << endl;
    cout << "repuesto del Articulo es:" << this->repuesto << endl;
    cout << "tamanio del Articulo es:" << this->tamanyo << endl;
    cout << "numero del Articulo es:" << this->numart << endl;
    cout << "envoltorio del Articulo es:" << this->envoltorio << endl;
    cout << "stock del Articulo es:" << this->stock << endl;
    cout << "descuento del Articulo es:" << this->descuento << endl;

	return;
}


