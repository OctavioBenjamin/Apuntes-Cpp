/**
Dado un n´umero entero N, calcular la suma de todos los n´umeros pares hasta N, menos la suma de todos
los impares hasta N.
**/
#include <iostream>
using namespace std;

int resultadoP;
int resultadoI;

int main()
{
    int n;
    cin>>n;

    for(int p = 0; p <= n; p = p+2){     /// P contador de impares
        resultadoP += p;
   }

    for(int i = 1; i <= n; i = i+2){     /// I contador de impares
        resultadoI += i;
   }


    int resultadoFinal = resultadoP-resultadoI;
    cout<<resultadoFinal;
    return 0;
}
