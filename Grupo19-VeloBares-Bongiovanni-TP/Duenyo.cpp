/**
 * Project Untitled
 */


#include "Duenyo.h"

using namespace std
/**
 * Duenyo implementation
 */;;

    Duenyo::Duenyo(string nombred, const string DNI, string horariotrabajo, string apellidod)
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
    return "";
}

string Duenyo::get(string DNI)
{
    return string();
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
    int tamtotal = Lista.size();
    int i=0;
    int _i;
    list <Articulos> ::iterator it = Lista.begin();

    for (i = 0; i <_i; i++)
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
    return "";
}

