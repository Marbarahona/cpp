#include <iostream>
#include <string>
using namespace std;

int main()
{

	int op, cont=0;
	string nom[100], ape[100];
	int mate[100], espa[100], ingl[100], cienc[100];
	double prom;
	
	
	do
	{
		cout<<"Menu"<<endl;
		cout<<"1. Ingresar Nota"<<endl;
		cout<<"2. Ver Notas"<<endl;
		cout<<"0. Salir"<<endl;
		cin>>op;
		
		switch(op)
		{
			case 1:
			
				cout<<"Ingrese el nombre y apellido del alumno: "<<endl;
				cin>>nom[cont]>>ape[cont];
				cout<<"Ingrese el acumulado de la clase de Matematicas: "<<endl;
				cin>>mate[cont];
				cout<<"Ingrese el acumulado de la clase de Espanol: "<<endl;
				cin>>espa[cont];
				cout<<"Ingrese el acumulado de la clase de Ingles: "<<endl;
				cin>>ingl[cont];
				cout<<"Ingrese el acumulado de la clase de Ciencias Naturales: "<<endl;
				cin>>cienc[cont];
				cont++;
				break;
			case 2:
				for(int i=0; i<cont; i++)
				{	
					
					cout<<"\nAlumno: "<<nom[i]<<" "<<ape[i]<<endl;
					cout<<"Matematicas: "<<mate[i]<<endl;
					cout<<"Espanol: "<<espa[i]<<endl;
					cout<<"Ingles: "<<ingl[i]<<endl;
					cout<<"Ciencias Naturales: "<<cienc[i]<<endl;
					//Calculo del promedio de las clases del alumno
					prom=(mate[i]+espa[i]+ingl[i]+cienc[i])/4;
					cout<<"El promedio del Alumno es: "<<prom<<endl;
				}
				break;
			case 0:
				break;
			default:
				cout<<"Opcion no valida"<<endl;
		}
		cout<<endl;
	}
	while(op!=0);
	
	return 0;
}
