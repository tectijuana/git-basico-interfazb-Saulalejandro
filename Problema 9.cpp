// Problema 9.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
using namespace std;

/*
* Problema 9
*
*51.	Imprimir los elementos de la función definida por f(x) IxI , para x =  -8, -7, -6, +8, +7, +6.
*
*/

//@Autor Saulalejandro
//@Date 24/03/2022

class MyClass
{
public:

	void Pro9()
	{
		float n1 = -8, n2 = -7, n3 = -6, n4 = 8, n5 = 7, n6 = 6, suma = 0;
		cout << "\nLos valores absolutos son: " << "\n" << abs(n1) << " , " << abs(n2) << " , " << abs(n3) << " , " << abs(n4) << " , " << abs(n5) << " y " << abs(n6) << endl;
		suma = abs(n1) + abs(n2) + abs(n3) + abs(n4) + abs(n5);
		cout << "\nLa suma de los valores absolutos es: " << suma << endl;
	}

};

int main()
{
	MyClass pro9;
	pro9.Pro9();
}