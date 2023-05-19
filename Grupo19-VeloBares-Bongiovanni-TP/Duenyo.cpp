/**
 * Project Untitled
 */

#include "Duenyo.h"
#include "customEx.h"
#include "Cliente.h"
#include "Articulos.h"
#include "Ferreteria.h"

using namespace std;

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

void Duenyo::set(string horariotrabajo) 
{
    return;
}

/**
 * @param DNI
 * @return string
 */

string Duenyo::get(string DNI)
{
    return this->DNI;
}

/**
 * @return void
 */

void Duenyo::abrirlocal() 
{
    cout<<"Bienvenidos a la ferreteria Lalolla, aca se paga solo en efectivo. Te pasamos el presupuesto de lo que desees, para que vuelvas con el efectivo necesario. "<< endl;
    cout << "Que tenga buen dia :)" << endl; //con esto sabemos que el cliente tiene la plata necesaria para hacer la compra 
    return;
}

float Duenyo::generarPresupuesto(list<Articulos> Lista)
{
    float acumprecio = 0;
    float acumdescuento = 0;
    float total = 0; 
    int i=0;
    int _i=0;
    list <Articulos> ::iterator it = Lista.begin();

    for (list<Articulos>::iterator it = Lista.begin(); it != Lista.end(); ++it)

    //asumimos que no es necesario chequear el stock ya que el presupuesto no depende de ello sino que del precio final de la cant de articulos que el cliente desee
    
    {
        acumprecio = acumprecio + it->getpreciodeart();
        acumdescuento = acumdescuento + it->getdescuentos();
    }

    total = acumprecio - acumdescuento;

    if (total < 0) throw NegValue ();

    return total;
}

/**
 * @param Cliente.lista
 * @return int
 */

/**
 * @return void
 */

/*void Duenyo::atendercliente() //no varia 
{
    return;
}*/

/**
 * @return string
 */

string Duenyo::getnombred()
{
    return this->nombred;
}

string Duenyo::getapellidod()
{
    return this->apellidod;
}

ostream& operator<<(ostream& out, Cliente* General)
{
     
     void verprecio(Articulos precioArt);
     list<Articulos> Lista = General->get_lista();
     int _i = 0;
     //list<Articulos>::iterator it = Lista.begin();
     for (list<Articulos>::iterator it = Lista.begin(); it != Lista.end(); ++it)
     {
         out << it->getpreciodeart() << endl;
         it->mostrar();
     }

     //imprimir virtual
     //Por cada uno de los elementos impriman el precio
     return out;
}

void Duenyo:: hacerticket(Ferreteria LaLolla)
{
    cout << "                                                    " << LaLolla.getnombref() <<  endl;
    cout << "                                                    " << LaLolla.getubic( ) << endl;
    return;
}

/*void Articulos::alquilar(bool stock)
{
    if (900 < getpreciodeart() && getstockproducto() = true)
    {
        cout << "Podrá alquilarla. Se le cobrará un seguro que en caso de devolver en iguales condiciones, se le devolverá." << endl;
    }
    return;
}*/

/*void Duenyo::imprimirtotal(float total)
{
    cout << "El total es:" << total << endl;
    return;
}*/



