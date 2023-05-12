/**
 * Project Untitled
 */

#include "Ferreteria.h"
using namespace std;
#include <string>

/**
 * Ferreteria implementation
 */

Ferreteria::Ferreteria(string nombref_, string ubicacion_, string horario_, bool abierto_)
{
    this->nombref = nombref_;
    this->ubicacion = ubicacion_;
    this->horario = horario_;
    this->abierto = abierto_;
}

Ferreteria::~Ferreteria()
{
}

/**
 * @param ubicacion
 * @return void
 */

/**
 * @return bool
 */

void Ferreteria::setubic(string ubicacion)
{
    return;
}

void Ferreteria::setabierto(bool abierto)
{
    return ;
}

/**
 * @return void
 */

void Ferreteria::llamarcerrajero() 
{
    return;
}

/**
 * @return void
 */

void Ferreteria::llamarplomero() 
{
    return;
}

/**
 * @return void
 */

void Ferreteria::llamardespachante()
{
    return;
}

/**
 * @return string
 */

string Ferreteria::getnombref() 
{
    return this->nombref;
}

string Ferreteria::getubic()
{
    return this->ubicacion;
}

void Ferreteria::sethora(string horario)
{
    return;
}

/**
 * @param horario
 * @return void
 */



