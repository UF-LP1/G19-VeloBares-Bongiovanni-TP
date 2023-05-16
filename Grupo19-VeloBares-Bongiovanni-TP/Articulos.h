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
    Articulos( string nombreart, int precio_, bool repuesto_, unsigned int tamanyo_, unsigned int numart_, bool envoltorio_, bool stock_, bool descuento_);
    ~Articulos()
 
/**
 * @param precio
 */;

virtual void mostrar(); //agregamos virtual

void setpreciodeart( int precio);
    
/**
 * @param num-art
 */

unsigned int getnumerodeart();
    
/**
 * @param stock
 */

bool getstockproducto();
    
void reponerstock();
    
/**
 * @param descuento
 */

void setdescuentos(bool descuento);

bool getdescuentos();

 int getpreciodeart();

bool chequearenvoltorio(bool envoltorio);

static int cantdeart(); //agregamos static

string getnombreart();//nombre

unsigned int gettamanyo();//tamanyo

bool getenvoltorio();//envoltorio

bool getrepuesto();//repuesto

protected:   
    string nombreart;
    int precio;
    bool repuesto;
    unsigned int tamanyo;
    unsigned int numart;
    bool envoltorio;
    bool stock;
    bool descuento;
 
};

#endif //_ARTICULOS_H