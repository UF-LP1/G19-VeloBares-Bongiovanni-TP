/**
 * Project Untitled
 */


#include "Cliente.h"

/**
 * Cliente implementation
 */


Cliente::Cliente(string nombrec, string domicilio, unsigned int telefono,  string dni, bool permiso, list<Articulos> Lista)
{
}

Cliente::~Cliente()
{
}



/**
 * @param telefono
 * @return void
 */
void Cliente::set(unsigned int telefono) {
    return;
}

/**
 * @param permiso
 * @return bool
 */
bool Cliente::get(bool permiso) {
    return false;
}

/**
 * @param unsigned int num-art
 * @return void
 */
void Cliente::comprarart( unsigned int numart) {
    return;
}

bool Cliente::get(bool permiso)
{
    return false;
}

void Cliente::comprarart(unsigned int numart)
{
}

/**
 * @return void
 */
void Cliente::pedirempleados() {
    return;
}

/**
 * @param Duenyo.cobrar
 * @return void
 */
void Cliente::pagar( Duenyo josecito) {

    float a = josecito.generarPresupuesto(list<Articulos> Lista, bool descuento, unsigned int precio);
    return;
}

/**
 * @return string
 */
string Cliente::getnombrec() {
    return this->nombrec;
}

/**
 * @return string
 */
string Cliente::getubicacion() {
    return this->domicilio;
}

/**
 * @param Articulos.precio
 * @return void
 */

void Cliente::verprecio(Articulos precioArt) { //tiene que poder ver el precio
    int _i;

        list<Articulos>::iterator it = Lista.begin();
        for (int i = 0; i < _i; i++) 
        {
            it++;
            cout << it->getprecio() << endl;
        }
    

    return; 
}

/**
 * @return void
 */
Articulos Cliente::agregaralista() {

    //tiene que agregar elementos
    int numeroart; // el cliente ingresa ese numero de articulo
    int _i;
    list<Articulos>::iterator it = catalogo.begin(); // nuestra idea sabiendo lo que hay que hacer pero no como ejecutarlo 
    for (int i = 0; i < _i; i++)
    {                          
        it++;
        cout << "Ingrese numero del articulo que desee agregar la lista" << endl;
        cin >> numeroart;
        if (numeroart == catalogo[i].numart)
            Lista.push_front(Articulos); //

    }

    return this -> Lista;
}


