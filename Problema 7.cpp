// Problema 7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
using namespace std;

/*
* Problema 7
*
*45.	Calcularlos numeros 2^2, 2^3, 2^4, 2^5; continuar asi hasta 9^2 , 9^3, 9^4 y 9^5.
*
*/

//@Autor Saulalejandro
//@Date 22/03/2022

class MyClass
{
public:

    void Pro7()
    {
        //Las potencias del numero 2
        double numero2 = 2;
        double elevado2 = pow(numero2, 2);
        double numero3 = 2;
        double elevado3 = pow(numero3, 3);
        double numero4 = 2;
        double elevado4 = pow(numero4, 4);
        double numero5 = 2;
        double elevado5 = pow(numero5, 5);
        cout << "El numero " << numero2 << " elevado al cuadrado es " << elevado2;
        cout << "\nEl numero " << numero3 << " elevado al cubo es " << elevado3;
        cout << "\nEl numero " << numero4 << " elevado a la cuarta potencia es " << elevado4;
        cout << "\nEl numero " << numero5 << " elevado a la quinta potencia es " << elevado5;

        //Las potencias del numero 3
        double numero6 = 3;
        double elevado6 = pow(numero6, 2);
        double numero7 = 3;
        double elevado7 = pow(numero7, 3);
        double numero8 = 3;
        double elevado8 = pow(numero8, 4);
        double numero9 = 3;
        double elevado9 = pow(numero9, 5);
        cout << "\nEl numero " << numero6 << " elevado al cuadrado es " << elevado6;
        cout << "\nEl numero " << numero7 << " elevado al cubo es " << elevado7;
        cout << "\nEl numero " << numero7 << " elevado a la cuarta potencia es " << elevado8;
        cout << "\nEl numero " << numero9 << " elevado a la quinta potencia es " << elevado9;

        //Las potencias del numero 4
        double numero10 = 4;
        double elevado10 = pow(numero10, 2);
        double numero11 = 4;
        double elevado11 = pow(numero11, 3);
        double numero12 = 4;
        double elevado12 = pow(numero12, 4);
        double numero13 = 4;
        double elevado13 = pow(numero13, 5);
        cout << "\nEl numero " << numero10 << " elevado al cuadrado es " << elevado10;
        cout << "\nEl numero " << numero11 << " elevado al cubo es " << elevado11;
        cout << "\nEl numero " << numero12 << " elevado a la cuarta potencia es " << elevado12;
        cout << "\nEl numero " << numero13 << " elevado a la quinta potencia es " << elevado13;

        //Las potencias del numero 5
        double numero14 = 5;
        double elevado14 = pow(numero14, 2);
        double numero15 = 5;
        double elevado15 = pow(numero15, 3);
        double numero16 = 5;
        double elevado16 = pow(numero16, 4);
        double numero17 = 5;
        double elevado17 = pow(numero17, 5);
        cout << "\nEl numero " << numero14 << " elevado al cuadrado es " << elevado14;
        cout << "\nEl numero " << numero15 << " elevado al cubo es " << elevado15;
        cout << "\nEl numero " << numero16 << " elevado a la cuarta potencia es " << elevado16;
        cout << "\nEl numero " << numero17 << " elevado a la quinta potencia es " << elevado17;

        //Las potencias del numero 6
        double numero18 = 6;
        double elevado18 = pow(numero18, 2);
        double numero19 = 6;
        double elevado19 = pow(numero19, 3);
        double numero20 = 6;
        double elevado20 = pow(numero20, 4);
        double numero21 = 6;
        double elevado21 = pow(numero21, 5);
        cout << "\nEl numero " << numero18 << " elevado al cuadrado es " << elevado18;
        cout << "\nEl numero " << numero19 << " elevado al cubo es " << elevado19;
        cout << "\nEl numero " << numero20 << " elevado a la cuarta potencia es " << elevado20;
        cout << "\nEl numero " << numero21 << " elevado a la quinta potencia es " << elevado21;

        //Las potencias del numero 7
        double numero22 = 7;
        double elevado22 = pow(numero22, 2);
        double numero23 = 7;
        double elevado23 = pow(numero23, 3);
        double numero24 = 7;
        double elevado24 = pow(numero24, 4);
        double numero25 = 7;
        double elevado25 = pow(numero25, 5);
        cout << "\nEl numero " << numero22 << " elevado al cuadrado es " << elevado22;
        cout << "\nEl numero " << numero23 << " elevado al cubo es " << elevado23;
        cout << "\nEl numero " << numero24 << " elevado a la cuarta potencia es " << elevado24;
        cout << "\nEl numero " << numero25 << " elevado a la quinta potencia es " << elevado25;

        //Las potencias del numero 8
        double numero26 = 8;
        double elevado26 = pow(numero26, 2);
        double numero27 = 8;
        double elevado27 = pow(numero27, 3);
        double numero28 = 8;
        double elevado28 = pow(numero28, 4);
        double numero29 = 8;
        double elevado29 = pow(numero29, 5);
        cout << "\nEl numero " << numero26 << " elevado al cuadrado es " << elevado26;
        cout << "\nEl numero " << numero27 << " elevado al cubo es " << elevado27;
        cout << "\nEl numero " << numero28 << " elevado a la cuarta potencia es " << elevado28;
        cout << "\nEl numero " << numero29 << " elevado a la quinta potencia es " << elevado29;

        //Las potencias del numero 9
        double numero30 = 9;
        double elevado30 = pow(numero30, 2);
        double numero31 = 9;
        double elevado31 = pow(numero31, 3);
        double numero32 = 9;
        double elevado32 = pow(numero32, 4);
        double numero33 = 9;
        double elevado33 = pow(numero33, 5);
        cout << "\nEl numero " << numero30 << " elevado al cuadrado es " << elevado30;
        cout << "\nEl numero " << numero31 << " elevado al cubo es " << elevado31;
        cout << "\nEl numero " << numero32 << " elevado a la cuarta potencia es " << elevado32;
        cout << "\nEl numero " << numero33 << " elevado a la quinta potencia es " << elevado33;
    }

};
int main()
{
    MyClass pro7;
    pro7.Pro7();
}
