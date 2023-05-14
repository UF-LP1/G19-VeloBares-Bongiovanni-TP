/**
 * Project Untitled
 */

#include "Duenyo.h"
#include "customEx.h"
#include "Cliente.h"
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
       
        acumdescuento = acumdescuento + it->getdescuentos(true);
        
    }

    total = acumprecio - acumdescuento;

    // if(total < 0) throw std::exception("el presupuesto es negativo.");
    if (total < 0) throw NegValue ( );

    return total;
}

/**
 * @param Cliente.lista
 * @return int
 */

/**
 * @return void
 */

void Duenyo::atendercliente() 
{
    return;
}

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

 ostream& operator <<(ostream& out,list<Articulos> lista, Cliente General)
{
 
    out << General.get_lista() << endl;
    return out;
}

void hacerticket(list<Articulos>Lista, Ferreteria LaLola, float total, Cliente General) 
{cout << LaLola.getnombref() << endl;
    cout << LaLola.getubic( ) << endl;
    cout << General.get_lista (  ) << endl;
    //cout << General.get_lista() << endl; (sobrecarga)
    cout << total << endl;

    return;
}
    

    