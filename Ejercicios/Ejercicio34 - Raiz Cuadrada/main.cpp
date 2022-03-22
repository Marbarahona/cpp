#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
  float valor,raiz;
 
  cout << "Ingrese un numero para obtener la raiz cuadrada:";
  cin >> valor;
 
  raiz = sqrt(valor);
 
  cout << "La raiz cuadrada de " << valor << " es " << raiz << endl;
 
  return 0;
}
