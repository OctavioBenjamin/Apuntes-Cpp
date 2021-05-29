#include <iostream>
#include <vector> // Agrega la biblioteca para manejar vectores
using namespace std;

int main()
{
    vector <int> numeros;

    int n;
    cin>>n; // Ingresa el valor de numeros para agregar al vector

    for(int i = 0; i < n; i++){
        int num;
        cin>>num;
        numeros.push_back(num); //Ingresa los valores a la lista
    }

    for(int i = 0; i < n; i++){
        cout << numeros[i] << endl;
    }

    return 0;
}
