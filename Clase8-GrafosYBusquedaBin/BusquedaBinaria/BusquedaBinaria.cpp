#include <iostream>
#include <vector>
using namespace std;

//Falsa solucionar el codigo
int main() {

    int n, x;
    cin>>n;
    cin>>x;

    vector <int> numeros;

    for (int i = 0; i < n; i++){
        cin>>numeros[i];
    }
    for (int i = 0; i < numeros.size(); i++){
        cout<<numeros[i];
    }

    int L=-1, R=n, m;

    while(R-L>1){
        m = (L + R) / 2;
        if(numeros[m] == x ){
            cout<<"El numero se encontro en la posicion: " << m << endl;
            return 0;
        } else if (numeros[m]<x){
            L=m;
        } else {}
            R=m;
    }

    return 0;
}