/**
 * Project Untitled
 */


#include "ArtCerrajeria.h"
#include <iostream>
/**
 * ArtCerrajeria implementation
 */

ArtCerrajeria :: ArtCerrajeria(string nombreart_, int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_) : Articulos(nombreart_, precio_, repuesto_, tamanyo_, numart_, envoltorio_, stock_, descuento_)
{
}
ArtCerrajeria :: ~ArtCerrajeria()
{
}

void ArtCerrajeria::mostrar()
{
	cout << this->getnombreart() << endl;
	cout << this->getnumerodeart() << endl;
	cout << this->getpreciodeart() << endl;
	cout << this->getdescuentos() << endl;
	cout << this->getrepuesto() << endl;
	cout << this->getstockproducto() << endl;
	cout << this->gettamanyo() << endl;

	return;
}

