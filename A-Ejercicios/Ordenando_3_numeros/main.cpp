/**

Dados tres numeros enteros A, B, C, se deben escribir esos numeros nuevamente en la salida, pero ordenados de menor a mayor.

**/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int a, b, c;
    cin>> a>>b>>c;
    vector <int> numeros = {a, b, c}; //Entrada

    sort(numeros.begin(), numeros.end()); //Ordena

    for (int i = 0; i < 3; i++) { //Salida
        cout<< numeros[i]<< " ";
    }

    return 0;
}
