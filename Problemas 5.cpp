// Problemas 5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
using namespace std;

/*
* Problema 5
*
* 6.	Encontrar las raices cuadradas de los enteros del 9 y 25. Imprimir el entero y su raiz cuadrada.
*
*/

//@Autor Saulalejandro
//@Date 22/03/2022

class MyClass
{
public:

    void Pro5 ()
    {
		double numero = 9;
		double raizCuadrada = sqrt(numero);
		printf("La raiz cuadrada de %lf es %lf\n", numero, raizCuadrada);
		return 0;
    }

};

int main(int argc, char const* argv[])
{
    MyClass pro5;
    pro5.Pro5();
}