// Problema 4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
using namespace std;

/*
* Problema 4
*
* 48.	Determinar el valor absoluto de un número. Usar la función de valor absoluto.
*
*/

//@Autor Saulalejandro
//@Date 20/03/2022

class MyClass
{
public:

    void Pro4()
    {
        float valor;
        cout << "Escribe un numero: ";
        cin >> valor;
        float valorAbsoluto = abs(valor);
        cout << "El valor absoluto es " << valorAbsoluto;
    }

};
int main()
{
    MyClass pro4;
    pro4.Pro4();
}

