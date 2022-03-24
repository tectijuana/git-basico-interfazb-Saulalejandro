// Problema 3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
using namespace std;

/*
* Problema 3
*
* 23.	Dado el número de triunfos y derrotas de un equipo de beisboi, calcularsu porcentaje deganancias. Suponer que no hubo empates.
*
*/

//@Autor Saulalejandro
//@Date 20/03/2022


class MyClass
{
public:

    void Pro3()
    {
        int total, t, d, pt, pd;
        cout << "ingresar cantidad de triunfos: "; cin >> t;
        cout << "ingresar cantidad de derrotas: "; cin >> d;
        total = t + d;
        pt = t * 100 / total;
        pd = d * 100 / total;
        cout << "El total de triunfos y derrotas: " << total << endl;
        cout << "El pocentaje truinfos: " << pt << "%" << endl;
        cout << "El pocentaje derrotas: " << pd << "%" << endl;
    }
    
};


int main()
{
    MyClass pro3;
    pro3.Pro3();
}
