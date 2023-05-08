/**
 * Project Untitled
 */
#include <list>
#include <string> 
#ifndef _ARTICULOS_H
#define _ARTICULOS_H
using namespace std;
class Articulos {
public:
    Articulos(string caracteristicas, unsigned int precio, bool repuesto, unsigned int tamanyo, unsigned int numart, bool envoltorio, bool stock, bool descuento,  list <Articulos> catalogo);
    ~Articulos()
/**
 * @param precio
 */;
void setpreciodeart(unsigned int precio);
    
/**
 * @param num-art
 */
unsigned int getnumerodeart(unsigned int numart);
    
/**
 * @param stock
 */
bool getstockproducto(bool stock);
    
void reponerstock();
    
/**
 * @param descuento
 */
void setdescuentos(bool descuento);

bool getdescuentos(bool descuento);

unsigned int getpreciodeart();

protected:   // ATRIBUTOS DEL ARTICULOSSS
    string caracteristicas;
    unsigned int precio;
    bool repuesto;
    unsigned int tamanyo;
    unsigned int numart;
    bool envoltorio;
    bool stock;
    bool descuento;
    list <Articulos> catalogo;

};

#endif //_ARTICULOS_H