// Problema 10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
using namespace std;


/*
* Problema 7
*
*52.	Evaluar la función y = (Rais de X) cuando x toma valores enteros desde 1 a 10 inclusive.
*
*/

//@Autor Saulalejandro
//@Date 24/03/2022


class MyClass
{
public:

    void Pro10()
    {
        double a, b;
        cout << "ingrese un numero del 1 al 10:"; cin >> a;
        b = sqrt(a);
        cout << "la raiz cuadra de " << a << " es:" << b;
    }

};
int main()
{
    MyClass pro10;
    pro10.Pro10();
}
