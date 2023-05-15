/**
 * Project Untitled
 */

#include "ArtElectricidad.h"
#include <iostream>
/**
 * ArtElectricidad implementation
 */

/**
 * @return void
 */
ArtElectricidad::ArtElectricidad(string nombreart_, int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_) : Articulos(nombreart_, precio_, repuesto_, tamanyo_, numart_, envoltorio_, stock_, descuento_)
{
}
ArtElectricidad::~ArtElectricidad()
{
}

void ArtElectricidad::probarfuncion() 
{
    return;
}

void ArtElectricidad::mostrar()
{
	cout << "Nombre del Articulo es:" << this->nombreart << endl;
	cout << "Precio del Articulo es:" << this->precio << endl;
	cout << "Numero del Articulo es:" << this->numart << endl;
	return;
}
