/**
 * Project Untitled
 */


#include "Duenyo.h"

using namespace std
/**
 * Duenyo implementation
 */;;

    Duenyo::Duenyo(string nombred,  string DNI, string horariotrabajo, string apellidod)
{
    
}

 
   Duenyo::~Duenyo()
    {
    }

    
/**
 * @param horariotrabajo
 * @return void
 */
void Duenyo::set(string horariotrabajo) {
    return;
}

/**
 * @param DNI
 * @return string
 */
string Duenyo::get(string DNI) {
    return this->DNI;
}


/**
 * @return void
 */
void Duenyo::abrirlocal() {
    return;
}

float Duenyo::generarPresupuesto(list<Articulos> Lista, bool descuento, unsigned int precio)
{
    float acumprecio = 0;
    float acumdescuento = 0;
    float total = 0;
    int tamtotal = Lista.size(); // esta lista, es la que nos devuelve la funcion "agregarlista" con todos los art  y precios que el cliente desea
    int i=0;
    int _i;
    list <Articulos> ::iterator it = Lista.begin();

    for (i = 0; i <_i; i++) //asumimos que no es necesario chequear el stock ya que el presupuesto no depende de ello sino que del precio final de la cant de articulos que el cliente desee
    
    {
        acumprecio = acumprecio + it->getprecio();
       
        acumdescuento = acumdescuento + it->getdescuento();
        ++i;
    }

    total = acumprecio - acumdescuento;
    return total;
}

/**
 * @param Cliente.lista
 * @return int
 */


/**
 * @return void
 */
void Duenyo::atendercliente() {
    return;
}

/**
 * @return string
 */
string Duenyo::getnombred() {
    return this->nombred;
}

