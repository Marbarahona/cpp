#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	

	double total = 0;
	double subtotal = 0;
	double impuesto = 0;
	int descuento = 0;
	char estaexenta;
	
	cout << "Ingrese el total de la compra: " ;
	cin >> subtotal;
	
	cout << "Ingrese el descuento (0, 10, 15, 20)";
	cin >> descuento;
	
	cout << "La factura esta exenta de impuesto ? s/n";
	cin >> estaexenta;
	
	if (estaexenta == 'n' || estaexenta == 'N')
	
	{
		impuesto = subtotal * 0.15;
		total = subtotal + impuesto;
		
	}
	
	 else
	 if (estaexenta == 's' || estaexenta == 'S')
	 
	 {
	 	total = subtotal;
	 }
	 
	 cout << "El total a pagar es de : " << total;
	 
	return 0;
}
