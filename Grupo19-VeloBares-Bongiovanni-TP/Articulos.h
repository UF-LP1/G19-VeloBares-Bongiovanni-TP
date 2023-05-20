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

virtual void mostrar(); 

void setpreciodeart(int precio);

void setdescuentos(bool descuento);
    
/**
 * @param num-art
 */

unsigned int getnumerodeart();
    
/**
 * @param stock
 */

bool getstockproducto();
    
/**
 * @param descuento
 */

bool getdescuentos();

int getpreciodeart();

string getnombreart();

unsigned int gettamanyo();

bool getenvoltorio();

bool getrepuesto();

void reponerstock();

bool chequearenvoltorio(bool envoltorio);

static int cantdeart(); 

void cambios(bool envoltorio);

void alquilar(bool stock);

protected:   
    string nombreart;
    int precio;
    bool repuesto;
    unsigned int tamanyo;
    unsigned int numart;
    bool envoltorio;
    bool stock;
    bool descuento; //al fin y al cabo no sirve de nada 
};

#endif //_ARTICULOS_H