/**
 * Project Untitled
 */


#include "Cliente.h"

/**
 * Cliente implementation
 */


Cliente::Cliente(string nombrec_, string domicilio_, unsigned int telefono_,  string dni_, bool permiso_, list<Articulos> Lista_)
{
    this->nombrec = nombrec_;
    this->domicilio = domicilio_;
    this->telefono = telefono_;
    this->dni = dni_;
    this->permiso = permiso_;
    this->Lista = Lista_;
    
}

Cliente::~Cliente()
{
}

/**
 * @param telefono
 * @return void
 */
void Cliente::settelefono(unsigned int telefono) { //cambie el nombre
    return;
}

/**
 * @param permiso
 * @return bool
 */
bool Cliente::getpermiso(bool permiso) { //cambie el nombre
    return false;
}

/**
 * @param unsigned int num-art
 * @return void
 */
void Cliente::comprarart( unsigned int numart) {
    return;
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
void Cliente::pagar(Duenyo josecito) { 

    /* hacer Duenyo.cobrar() en el main, lo guardan en una variable (ej:cobrofinal) y la pasan a pagar de Cliente. */
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
    int _i=0;

        list<Articulos>::iterator it = Lista.begin();
        for (int i = 0; i < _i; i++) 
        {
            it++;
            cout << it->getpreciodeart() << endl;
        }
    

    return; 
}

/**
 * @return void
 */

Articulos Cliente::agregarcarrito(list <Articulos> Lista, Articulos a1, Articulos a2, Articulos a3, Articulos a4 ) {
    Lista.push_back(a1);
    Lista.push_back(a2);
    Lista.push_back(a3);
    Lista.push_back(a4);

    return Lista;// que devuelve?
}


/*Articulos Cliente::agregaralista() {
    int numeroart; 
    int _i;
    list<Articulos>::iterator it = catalogo_.begin();  
    for (int i = 0; i < _i; i++)
    {                          
        it++;
        cout << "Ingrese numero del articulo que desee agregar la lista" << endl;
        cin >> numeroart;
        if (numeroart == catalogo_[i].numart)
            Lista.push_front(Articulos); //
    }
    return this -> Lista;
}*/


