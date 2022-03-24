// Problema 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
using namespace std;

/*
* Problema 2
*
* 41.	Si dos ciudades están a 80 km una de otra y usted conduce a 90 km/h ¿cuántos minutos necesitará para ir de una ciudad a otra?
*
*/

//@Autor Saulalejandro
//@Date 20/03/2022


class MyClass
{
public:

    void Pro2()
    {
        float x = 80, v = 90;
        float t = x / v;
        cout << t;
    }

};


int main()
{
    MyClass pro2;
    pro2.Pro2();
}

