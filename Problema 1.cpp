// Problema 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
using namespace std;

/*
* Problema 1
* 
* 27.	Calcular la altura (h) para t segundos de un cuerpo lanzado hacia arriba a una velocidad inicial r:
En este ejemplo, t 2 y r = 32
* 
*/

//@Autor Saulalejandro
//@Date 20/03/2022

class MyClass
{
public:

    void Pro1()
    {
		float t = 2, r = 32;
		float pow = t * t;
		float h = (r * t) - 16 * pow;
		cout << h;
    }

};

int main()
{
    MyClass pro1;
    pro1.Pro1();
}
