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
    

    for (i = 0; i < tamtotal; i++)
    {
        acumprecio = acumprecio + Lista[i].precio;
       
        acumdescuento = acumdescuento + Lista[i].descuento;
    }

    total = acumprecio - acumdescuento;
    return total;
}

/**
 * @param Cliente.lista
 * @return int
 */
int Duenyo::cobrar(list<Articulos> Lista1 ) {
    return 0;
}

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

