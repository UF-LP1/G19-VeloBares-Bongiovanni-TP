/**
 * Project Untitled
 */


#ifndef _FERRETERIA_H
#define _FERRETERIA_H

class Ferreteria {
public: 
    
/**
 * @param ubicacion
 */
void set(void ubicacion);
    
bool get();
    
void llamarcerrajero();
    
void llamarplomero();
    
void llamardespachante();
    
string getnombref();
    
/**
 * @param horario
 */
void set(void horario);
private: 
    string nombref;
    string ubicacion;
    string horario;
    bool abierto;
};

#endif //_FERRETERIA_H