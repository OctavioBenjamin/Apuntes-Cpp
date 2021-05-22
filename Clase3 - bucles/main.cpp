/**
Clase 3

Bucles

While
    Repite el codigo si una condicion se cumple

For
    Declara o inicia variables y las incrementa

    for (parte_1;parte_2;parte_3)

        Parte 1: Crea las variables
        Parte 2: Indica una condicion
        Parte 3: Si la condicion se cumple, incrementa

    for (int i = 1; i < 10; i++){

    }
**/

#include <iostream>
using namespace std;

int main()
{

    int inicio, limite;
    cout<<"Ingrese valor de inicio"<< endl;
    cin >> inicio;
    cout<<"Ingrese valor final"<< endl;
    cin >> limite;


    //Imprime todos los numeros del valor inicial hasta el valor final

    /**
    while (inicio <= limite){
        cout << inicio << endl;
        inicio++; // Suma 1
    }
    **/

    //Ciclo FOR

    for (int i = 1; i < 10; i++){           //I es igual a 1, si I es menor a 10, incrementa 1 y ejecuta el codigo
        cout<< i <<" Ciclo for"<< endl;
    }

    return 0;
}
