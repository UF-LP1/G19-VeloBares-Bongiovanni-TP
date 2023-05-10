/**
 * Project Untitled
 */

#include "Despachante.h"

/**
 * Despachante implementation
 */

/**
 * @return void
 */
Despachante::Despachante(string transporte_, string nombree_, string horarioatencion_, unsigned int preciotrabajo_, bool disponible_, unsigned int dnis_, string apellidos_, string duracion_) :Empleados(nombree_, horarioatencion_, preciotrabajo_, disponible_, dnis_, apellidos_, duracion_)
{
    this-> transporte= transporte_;
}
Despachante::~Despachante()
{
}

void Despachante::entregarproducto(Cliente Camila) 
{
    string ubic = Camila.getubicacion();
    return;
}

/**
 * @param transporte
 * @return void
 */

void Despachante::set(string transporte) 
{
    return;
}