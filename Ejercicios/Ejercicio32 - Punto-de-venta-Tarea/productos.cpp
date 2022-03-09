#include <iostream>

using namespace std;

extern void agregarproducto(string descripcion, int cantidad, double precio);

                       
void productos(int opcion) 
 { 
 system("cls");
  int opcionproducto = 0;
  switch (opcion)
      {
          case 1:  
            {
           cout << "bebidas calientes" << endl;
            cout << "****************" << endl;
           cout << "1 capuchino - L 25.00" << endl;
           cout << "2 cafe - L 15.00" << endl;
           cout << "3 chocolate caliente - L 35.00" << endl;
           cout << endl;

           cout << "ingrese una opcion: ";
         
           cin >> opcionproducto;
            switch (opcionproducto)
            {
            case 1:
              agregarproducto("1 capuchino - L 25.00", 1, 25);
              break;
            case 2:
              agregarproducto("1 cafe - L 15.00", 1, 15);
              break;
            case 3:
              agregarproducto("1 chocolate caliente - L 35.00", 1, 35);
              break;  
            default:
            {
             cout << "opcion no valida";
             return;
              break;
              }
            }
              cout << endl; 
             cout << "producto agregado" << endl << endl;
             system("pause");
             break;
          }
          
     case 2:
     {
           cout << "*******" << endl;
          cout << "bebidas frias" << endl;
          cout << "*******" << endl;
           cout << "1 granita de cafe - L 30.00" << endl;
           cout << "2 coctel - L 15.00" << endl;
           cout << "3 limonada - L 20.00" << endl;
           cout << endl;

           cout << "ingrese una opcion: ";
         
           cin >> opcionproducto;
            switch (opcionproducto)
            {
            case 1:
              agregarproducto("1 granita de cafe - L 30.00", 1, 30);
              break;
            case 2:
              agregarproducto("1 coctel - L 15.00", 1, 15);
              break;
              case 3:
              agregarproducto("1 limonada - L 20.00", 1, 20);
              break;
            default:
            {
             cout << "opcion no valida";
             return;
              break;
              }
            }
              cout << endl; 
             cout << "producto agregado" << endl << endl;
             system("pause");
             break;
          }
                    
           break;
           } 
   switch (opcion)       
   
     case 3:
        {
           cout << "*******" << endl;
           cout << "reposteria" << endl;
            cout << "*******" << endl;
           cout << "1 pastel de chocolate - L 150.00" << endl;
            cout << "2 pay de manzana - L 15.00" << endl;
            cout << "3 brownies - L 15.00" << endl;
            cout << endl;
           cout << "ingrese una opcion: ";
         
           cin >> opcionproducto;
          switch (opcionproducto)
            {
          case 1:
           agregarproducto("1 pastel de chocolate - L 150.00", 1, 150);
            break;
            case 2:
             agregarproducto("1 pay de manzana - L 15.00", 1, 15);
             break;
             case 3:
             agregarproducto("1 brownies - L 15.00", 1, 15);
             break;
            default:
            
            {
           cout << "opcion no valida";
           return;
             break;
            }
            }
             cout << endl; 
             cout << "producto agregado" << endl << endl;
             system("pause");
             break;
          }       
}

