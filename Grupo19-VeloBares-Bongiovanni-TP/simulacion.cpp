#include <iostream>
#include <list>
#include <cmath>
#include <stack>
#include <vector>

#include "Duenyo.h"
#include "Cliente.h"
#include "ArtHerramienta.h"
#include "ArtCerrajeria.h"
#include "ArtFerreteria.h"
#include "ArtElectricidad.h"
#include "Empleados.h"
#include "Ferreteria.h"

//enum dias{lunes=0,martes,miercoles,jueves,viernes,sabado,domingo};
using namespace std;

const vector<string> nomCli = { // creamos un vector con nombres de clientes random
    "Emma", "Liam", "Olivia", "Noah", "Ava", "Sophia", "Isabella", "Mia", "Charlotte", "Amelia", "Harper", "Evelyn", "Abigail", "Emily", "Elizabeth", "Mila", "Ella", "Avery", "Sofia", "Camila", "Aria", "Scarlett", "Victoria", "Madison", "Luna", "Grace", "Chloe", "Penelope", "Layla", "Riley", "Zoey", "Nora", "Lily", "Eleanor", "Hannah", "Lillian", "Addison", "Aubrey", "Ellie", "Stella", "Natalie", "Zoe", "Leah", "Hazel", "Violet", "Aurora", "Savannah", "Audrey", "Brooklyn", "Bella", "Claire", "Skylar", "Lucy", "Paisley", "Everly", "Anna", "Caroline", "Nova", "Genesis"
};

const vector<string> dirCli = { //lo mismo pero con direcciones
    "123 Main Street", "456 Elm Avenue", "789 Oak Lane", "10 Pine Street", "11 Maple Avenue", "12 Cedar Lane", "13 Birch Road", "14 Willow Court", "15 Spruce Drive", "16 Juniper Lane", "17 Chestnut Street", "18 Walnut Avenue", "19 Ash Lane", "20 Sycamore Road", "21 Magnolia Court", "22 Poplar Drive", "23 Hawthorn Lane", "24 Cypress Street", "25 Redwood Avenue", "26 Cedar Lane", "27 Birch Road", "28 Willow Court", "29 Spruce Drive", "30 Juniper Lane", "31 Chestnut Street", "32 Walnut Avenue", "33 Ash Lane", "34 Sycamore Road", "35 Magnolia Court", "36 Poplar Drive", "37 Hawthorn Lane", "38 Cypress Street", "39 Redwood Avenue", "40 Cedar Lane", "41 Birch Road", "42 Willow Court", "43 Spruce Drive", "44 Juniper Lane", "45 Chestnut Street", "46 Walnut Avenue", "47 Ash Lane", "48 Sycamore Road", "49 Magnolia Court", "50 Poplar Drive", "51 Hawthorn Lane", "52 Cypress Street", "53 Redwood Avenue", "54 Cedar Lane", "55 Birch Road", "56 Willow Court", "57 Spruce Drive", "58 Juniper Lane", "59 Chestnut Street", "60 Walnut Avenue"
};

unsigned int randint(unsigned int min, unsigned int max) {
    return rand() % (max - min) + min; //
}

stack<Cliente*> generador_clientes(unsigned int cantidad) { //me genero una "pila" de clientes  con todos sus atributos random
    stack<Cliente*> MisClientes;

    for (unsigned int i = 0; i < cantidad; i++)
        MisClientes.push(new Cliente (nomCli[randint(0, nomCli.size())], dirCli[randint(0, dirCli.size())],randint(1000000000, 9999999999),to_string(randint(1000000000, 9999999999)), (bool)randint(0,2)));

    return MisClientes; //me devuelve la lista de clientes que se crea de manera random
}

int main() {
    srand(time(NULL)); //simulacion todo randommm
	
    stack<Cliente*> MisClientes = generador_clientes(10); //lista de 10 clientes qu entraran hoy
	//se van a imprimir 10 clientes distintos pero con los mismos articulos porque nostras los declaramos 
    bool flag = true; //ferretería abierta
    unsigned int hora = 8; //arrancamos el dia a las 8 de la mañana

	list<Articulos> liista;
	Ferreteria* LaLolla = new Ferreteria("LaLolla", "av Santa Fe", "8am-18pm", true);
	Duenyo* josesito = new Duenyo("josesito", "4509872", "8am-18pm", "mirabilit");

	josesito->abrirlocal(); //josesito abre la ferreteria

	ArtHerramienta a1("Martillo", 200, true, 50, 1, true, true, true);
	ArtFerreteria a2("tabla", 1000, true, 80, 2, true, true, false);
	ArtCerrajeria a3("Cortina", 88, false, 190, 3, false, true, false);
	ArtElectricidad a4("Clavo", 300, true, 55, 4, false, true, true);
	bool alquiler=false;
	bool hacercambios = false;
    while (!(MisClientes.empty()) && flag) { //mientras tenga clientes y la ferreteria esté abierta, van a ocurrir cosas de ferreteria
		
    /*cout << "Desea alquilar una herramienta? Ponga 1 si lo desea, 0 si NO lo desea." << endl;
	cin >> alquiler ;
	if (alquiler == 1)
	{
		josesito->alquilar(alquiler); 
	}*/
		
		Cliente* miCliente = MisClientes.top();
		MisClientes.pop();

		miCliente->agregarcarrito(a1);
		miCliente->agregarcarrito(a2);
		miCliente->agregarcarrito(a3);
		miCliente->agregarcarrito(a4);

		cout << "----------------------------------------------------------------------------------------------" << endl;
		
		cout << "Desea alquilar una herramienta? Ponga 1 si lo desea, 0 si NO lo desea." << endl;
		cin >> hacercambios;
		if (hacercambios == true)
		{
			miCliente->cambios(hacercambios);
		}

		LaLolla->llamarcerrajero();
		LaLolla->llamardespachante();
		LaLolla->llamarplomero();

		float preciototal = josesito->generarPresupuesto(miCliente->get_lista());

		josesito->hacerticket(*LaLolla);
		cout << miCliente << endl;
		//josesito->imprimirtotal(preciototal);//sino se imprime dos veces el total

		try
		{
			cout << "El presupuesto total es: $" << josesito->generarPresupuesto(miCliente->get_lista()) << endl;
		}
		catch (exception& NegValue)
		{
			cerr << "exception->" << NegValue.what();
		}

        if ((!(hora >= 8 && hora <= 20))) //todo termina cuando cierra la ferreteria 
            flag = false;

        hora++;
    }

	delete LaLolla;
	delete josesito;

	return 0;
}