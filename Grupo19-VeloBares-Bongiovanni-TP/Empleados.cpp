/**
 * Project Untitled
 */

#include <string>
#include "Empleados.h"

/**
 * Empleados implementation
 */

Empleados::Empleados(string nombree_, string horarioatencion_, unsigned int preciotrabajo_, bool disponible_,  unsigned int dnis_, string apellidos_, string duracion_)
{
    this->nombree = nombree_;
    this->horarioatencion = horarioatencion_;
    this->preciotrabajo = preciotrabajo_;
    this->disponible = disponible_;
    this->dnis = dnis_;
    this->apellidos = apellidos_;
    this->duracion = duracion_;
   
}

Empleados::~Empleados()
{
}

/**
 * @param preciotrabajo
 * @return void
 */

void Empleados::set(unsigned int preciotrabajo) 
{
    return;
}

/**
 * @param disponible
 * @return bool
 */

bool Empleados::set(bool disponible) 
{ 
    return false;
}

/**
 * @param horariodeatencion
 * @return void
 */

void Empleados::set(string horariodeatencion) 
{
    return;
}

/**
 * @return string
 */

string Empleados::getnombree()
{
    return this->nombree;
}

string Empleados::getapellidos()
{
    return this->apellidos;
}

unsigned int Empleados::getdnis()
{
    return this->dnis;
}

/**
 * @return void
 */

void Empleados::definirfecha() 
{
    return;
}