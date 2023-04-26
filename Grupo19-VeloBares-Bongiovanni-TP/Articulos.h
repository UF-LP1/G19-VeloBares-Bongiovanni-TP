/**
 * Project Untitled
 */

#include <string> 
#ifndef _ARTICULOS_H
#define _ARTICULOS_H
using namespace std
class Articulos {
public:
    Articulos::Articulos(string caracteristicas; unsigned int precio; bool repuesto; const unsigned int tamanyo; unsigned int num-art; bool envoltorio; bool stock;
    bool descuento)
    
/**
 * @param precio
 */
void set(void precio);
    
/**
 * @param num-art
 */
unsigned int get(void num-art);
    
/**
 * @param stock
 */
bool get(void stock);
    
void reponerstock();
    
/**
 * @param descuento
 */
void set(void descuento);
bool getdescuento();
unsigned int getprecio();
protected:   // ATRIBUTOS DEL ARTICULOSSS
    string caracteristicas;
    unsigned int precio;
    bool repuesto;
    const unsigned int tamanyo;
    unsigned int num-art;
    bool envoltorio;
    bool stock;
    bool descuento;
};

#endif //_ARTICULOS_H