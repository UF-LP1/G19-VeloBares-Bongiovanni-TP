/**
 * Project Untitled
 */

#include <string> 
#ifndef _ARTICULOS_H
#define _ARTICULOS_H
using namespace std;
class Articulos {
public:
    Articulos(string caracteristicas, unsigned int precio, bool repuesto,  unsigned int tamanyo, unsigned int numart, bool envoltorio, bool stock, bool descuento);
    ~Articulos()
/**
 * @param precio
 */;
void set(unsigned int precio);
    
/**
 * @param num-art
 */
unsigned int get(unsigned int numart);
    
/**
 * @param stock
 */
bool get(bool stock);
    
void reponerstock();
    
/**
 * @param descuento
 */
void set(bool descuento);
bool getdescuento();
unsigned int getprecio();
protected:   // ATRIBUTOS DEL ARTICULOSSS
    string caracteristicas;
    unsigned int precio;
    bool repuesto;
    const unsigned int tamanyo;
    unsigned int numart;
    bool envoltorio;
    bool stock;
    bool descuento;
};

#endif //_ARTICULOS_H