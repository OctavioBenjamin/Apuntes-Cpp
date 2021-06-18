#include <iostream>
#include <vector>
//  #include <bits/stdc++.h> Biblioteca para poder agregar un conjunto mas grande de bibliotecas
using namespace std;

int sumaEnteros (vector<int>v,int a, int b){ //Suma Valores entre una posicion A y una posicion B
    int suma=0;
    for (int i=a; i<=b; i++)    //Toma A como posicion inicial, y suma los valores hasta que el contador llegue a B
        suma+=v[i];             //Cuando un for lleva una sola linea no necesita llaves

    return suma;
}

int main() {
    /*
    * Suma entre dos posiciones de uin vector
    */

    int n, a, b;
    cin>>n>>a>>b;
    vector <int> v(n);

    for (int i=0; i<n;i++){
        cin>>v[i];
    }

    cout<<sumaEnteros(v, a, b)<<endl;
    return 0;
}
