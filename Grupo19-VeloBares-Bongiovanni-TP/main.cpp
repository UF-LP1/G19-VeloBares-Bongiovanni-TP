

#include <iostream>
#include <math.h>
#include "Duenyo.h"
#include "Cliente.h"
#include "Articulos.h"
#include "Empleados.h"
#include "Ferreteria.h"

#include <list>

using namespace std;
//ostream& operator<<(ostream& out, Cliente& lol);

//void hacerticket(list<Articulos>Lista, Ferreteria LaLola, float total, Cliente General);


/*El cliente entra por la puerta, agarra artículos y los mete al changuito, (puede consultar el precio, fijarse que este en buenas condiciones, pedir cosas del deposito(stock)). 
Va a la caja a que le cobre el duenyo; este calcula el precio con el descuento, los va sumando y al final le genera un presupuesto (lo imprime para que el cliente lo vea, como un ticket)*/

int main() {

	list<Articulos> liista;
	//Ferreteria* LaLolla;
	Cliente* Saul = new Cliente("Saul", "Lib. 2086", 159976083, "4578932", true, liista);
	Cliente* Mateo = new Cliente("Mateo", "Heras. 2086", 159978463, "5578932", true, liista);
	Duenyo* josesito = new Duenyo ("josesito", "4509872", "8am-18pm", "mirabilit");

	Articulos a1 (200, true, 50, 1, true, true, true);
	Articulos a2(1000, true, 80, 2, true, true, false);
	Articulos a3(88, false, 190, 3, false, true, false);
	Articulos a4(300, true, 55, 4, false, true, true);

	Saul->agregarcarrito(a1);
	Saul->agregarcarrito(a2);
	Saul->agregarcarrito(a3);
	Saul->agregarcarrito(a4);

	Articulos a5(200, true, 50, 1, true, true, true);
	Articulos a6(-1000, true ,80, 2, true, true, false);
	Articulos a7(88, false, 190, 3, false, true, false);
	Articulos a8(300, true, 55, 4, false, true, true);

	Mateo->agregarcarrito(a5);
	Mateo->agregarcarrito(a6);
	Mateo->agregarcarrito(a7);
	Mateo->agregarcarrito(a8);

	josesito->generarPresupuesto(Saul->get_lista());
	josesito->generarPresupuesto(Mateo->get_lista());

	//float preciototal = josesito->generarPresupuesto(Saul->get_lista());
	//hacerticket(liista,*LaLolla,preciototal,*Saul);

	//try de nullptr
	//try de memoria
	//class NO_STOCK : public exception{ (va dentro de un .h y un cpp, junto con las demas exceptions)

	try
	{//nunca va a fallar 
		cout << "el presupuesto es: $" << josesito->generarPresupuesto(Saul->get_lista()) << endl;
		cout << "el presupuesto es: $" << josesito->generarPresupuesto(Mateo->get_lista()) << endl;
	}
	catch (exception &NegValue)
	{
		cerr << "exception->" << NegValue.what();
	}

	return 0;
}

/**ostream& operator<<(ostream& out, Cliente& lol) {
	list<Articulos> ::iterator it = lol.get_lista().begin();
	for (it = lol.get_lista().begin(); it != lol.get_lista().end(); it++) {
		unsigned int f = it->getpreciodeart();
		out << f << endl;


	}

	return out;
}/* igualaar el iterator al inicio de la lista de saul y con un for imprimir...

void hacerticket(list<Articulos>Lista, Ferreteria LaLola, float total, Cliente General) //hacerla en duenyo
{
	cout << LaLola.getnombref() << endl;
	cout << LaLola.getubic() << endl;
	//cout << General.get_lista() << endl; (sobrecarga)
	cout << total << endl;

	return;
}*/
