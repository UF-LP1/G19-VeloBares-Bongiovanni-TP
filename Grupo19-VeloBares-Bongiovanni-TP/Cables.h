/**
 * Project Untitled
 */


#ifndef _CABLES_H
#define _CABLES_H

#include "ArtElectricidad.h"


class Cables: public ArtElectricidad {

Cables(unsigned int largo_);
~Cables();

private:
	unsigned int largo;
};
#endif //_CABLES_H