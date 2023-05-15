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

void ArtFerreteria::mostrar() {
	cout << "Nombre del Articulo es:" << this->nombreart << endl;
	cout << "Precio del Articulo es:" << this->precio << endl;
	cout << "Numero del Articulo es:" << this->numart << endl;
	return;
}


