#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
		int nota  = 0;

     cout << "Ingrese la nota que obtuvo: ";
     cin >> nota;
     
     if (nota > 100 || nota < 0){
     	cout << "Ingrese una nota entre 0 - 100";
     	return 0;
	 }
     if (nota > 95 && nota <= 100){
         cout << "Obtuviste una A";
     }
     if (nota > 85 && nota <= 94){
         cout << "Obtuviste una B";
     }
     if (nota > 75 && nota <= 94){
         cout << "Obtuviste una C";
     }
     if (nota > 65 && nota <= 74){
         cout << "Obtuviste una D";
     }
     if (nota > 60 && nota <= 64){
         cout << "Obtuviste una E";
     }
     if (nota > 60){
         cout << "Obtuviste una F";
     }
	return 0;
}
