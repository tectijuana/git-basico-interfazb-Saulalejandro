// Problema 8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
using namespace std;


/*
* Problema 8
*
*49.	Introducir varios valores de A y B para probar la veracidad de la expresión
IA + BI + I Al + IBI
*
*/

//@Autor Saulalejandro
//@Date 24/03/2022


class MyClass
{
public:

	void Pro8()
	{
		float A, B;
		cout << "Escribe un numero para A: ";
		cin >> A;
		cout << "Escribe un numero para B: ";
		cin >> B;
		float valorAbsoluto = abs(A + B) + abs(A) + abs(B);
		cout << "El valor absoluto es " << valorAbsoluto;
	}

};

int main()
{
	MyClass pro8;
	pro8.Pro8();
}