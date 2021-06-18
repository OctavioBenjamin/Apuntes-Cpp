#include <iostream>
#include <vector>
using namespace std;

int cantidadDeElementosMenoresAX (int n,vector <int> v, int x) {

    int cantidad=0;

    for (int i=0;i<n;i++) {
        if (v[i]<x) {
            cantidad++;
        }
    }

    return cantidad;
}

int main() {
    /*
    * Saber cuantos elementos son menores a X
    */
    int n, x;
    cin>>n>>x;
    vector <int> v(n);

    for (int i=0; i<n;i++){
        cin>>v[i];
    }

    cout<<cantidadDeElementosMenoresAX(n, v, x)<<endl;

    return 0;
}
