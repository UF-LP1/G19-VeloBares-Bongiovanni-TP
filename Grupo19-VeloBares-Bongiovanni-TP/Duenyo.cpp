/**
 * Project Untitled
 */


#include "Duenyo.h"

using namespace std
/**
 * Duenyo implementation
 */;;

    Duenyo::Duenyo(string nombred_,  string DNI_, string horariotrabajo_, string apellidod_)
{
        this->nombred = nombred_;
        this->DNI = DNI_;
        this->horariotrabajo = horariotrabajo_;
        this->apellidod = apellidod_;

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
    int _i=0;//inicialice
    list <Articulos> ::iterator it = Lista.begin();

    for (list<Articulos>::iterator it = Lista.begin(); it != Lista.end(); ++it)

    //for (i = 0; i <_i; i++) 
    //asumimos que no es necesario chequear el stock ya que el presupuesto no depende de ello sino que del precio final de la cant de articulos que el cliente desee
    
    {
        acumprecio = acumprecio + it->getpreciodeart();
       
        acumdescuento = acumdescuento + it->getdescuentos();
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

