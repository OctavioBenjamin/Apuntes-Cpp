/**

Dada una cierta palabra, y un n´umero positivo, se debe escribir la misma palabra pero con ese n´umero
de letra cambiado por una ’X’ (may´uscula).
Por ejemplo:
    Si se recibe ’papa’ y un 4, se convierte en ’papX’
    Si se recibe ’papa’ y un 2, se convierte en ’pXpa’
    Si se recibe ’MenGano’ y un 1, se convierte en ’XenGano’

**/


#include <iostream>

using namespace std;

int main()
{
    string palabra;
    cin>> palabra;
    int n;
    cin>>n;

    if (n > 0 && n <= palabra.size()) {
        palabra[n-1] = 'X';
    }
    cout<<palabra;
    return 0;
}
