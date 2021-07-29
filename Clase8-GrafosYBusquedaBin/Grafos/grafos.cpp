#include <iostream>
#include <vector>

using namespace std;

int main() {

    /* Como suelen venir los grafos
        NODOS ARISTAS
        NodoOrigen  NodoDestino
        NodoOrigen  NodoDestino
        NodoOrigen  NodoDestino
        etc.

        Ejemplo
        5 5
        1 4
        2 4
        4 5
        5 2
        5 3
    */

    int nodos, aristas;

    cin>>nodos>>aristas;


    /*Matriz de Adyacencia
    int grafo[nodos][nodos] = {0};
    for (int i = 0; i<aristas; i++){
        int n1,n2;
        cin>>n1>>n2;
        grafo[n1-1][n2-1] = 1;
        //Linea Opcional si mi grafo es no dirigido
        //grafo[n2-1][n1-1] = 1;
    }
    */


    //Lista de Adyacencia
    /*
    A: {D}
    B: {D}
    C:
    D: {F}
    F: {B;C}
    */

    vector <int> grafo [1000];

    for (int i = 0; i < aristas; i++){
        int n1, n2;
        cin>> n1 >> n2;

        grafo[n1-1].push_back(n2-1)
        //Si no fuera dirigido
        //grafo[n2-1].push_back(n1-1)
    }

    return 0;
}