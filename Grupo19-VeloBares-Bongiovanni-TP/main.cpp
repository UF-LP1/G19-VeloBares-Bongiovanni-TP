//#define ARCHIVO "Grupo19-VeloBares-Bongiovanni-TP"

#include <iostream>
#include <math.h>
#include "Duenyo.h"
#include "Cliente.h"
#include "Articulos.h"
#include "Empleados.h"
#include <list>


using namespace std;

/*El cliente entra por la puerta, agarra art�culos y los mete al changuito, (puede consultar el precio, fijarse que este en buenas condiciones, pedir cosas del deposito(stock)). 
Va a la caja a que le cobre el duenyo; este calcula el precio con el descuento, los va sumando y al final le genera un presupuesto (lo imprime para que el cliente lo vea, como un ticket)*/

int main() {
	list <Articulos> liista;
	Cliente* Saul = new Cliente("Saul", "Lib. 2086", 159976083, "4578932", true, liista);
	Duenyo* josesito = new Duenyo ("josesito", "4509872", "8am-18pm", "mirabilit");
	Articulos a1 (200, true, 50, 1, true, true, true);
	Articulos a2(1000, true, 80, 2, true, true, false);
	Articulos a3(88, false, 190, 3, false, true, false);
	Articulos a4(300, true, 55, 4, false, true, true);
	Saul -> agregarcarrito(liista, a1, a2, a3, a4);

	josesito->generarPresupuesto(liista);
	try { // nunca va a fallar omg
		cout << "el presupuesto es: $" << josesito->generarPresupuesto(liista) << endl;
		cout << "el presupuesto es: $" << josesito->generarPresupuesto(liista) << endl;

	}
	catch (exception &e)
	{
		cerr << "exception->" << e.what();
	}

	return 0;
}

