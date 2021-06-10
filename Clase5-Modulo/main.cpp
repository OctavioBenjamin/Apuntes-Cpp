/**

Clase 5 sobre modulos, vectores y sus usos

    Modulo es el resto de una division

    5529%30
    El resto de la division de 5529 sobre 30 es 9

    int resto = 5529%30

    Resto es igual a 9

**/

#include <iostream>
using namespace std;

int main()
{
    //Determinar si un numero es par o impar
    int n;
    cin>>n;

    if(n%2 == 0) {
        cout<<"Es divisible";
    }
    else {
        cout<<"No es divisible";
    }

    return 0;
}
