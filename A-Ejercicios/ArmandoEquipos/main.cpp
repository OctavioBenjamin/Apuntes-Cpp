/** 
 * Encontrar la diferencia de la suma de las habilidades de los equipos
 * 
 * Habilidades:
 *  4 7 10 20
 * 
 * 4 y 20 = 24
 * 7 y 10 = 17
 * 
 * 24-17 = 7 
 * 
**/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    vector <int>niveles(4);
    
    for (int i = 0; i < niveles.size(); i++) {
        cin>>niveles[i];
    }

    sort (niveles.begin(), niveles.end());

    int equipo1 = niveles[0] + niveles [3];
    int equipo2 = niveles[1] + niveles [2];

    int resultado =  equipo1 - equipo2;

    if (resultado < 0) {
        resultado = -resultado;
        cout<<resultado;
    } else {
        cout<<resultado;
    }

    return 0;
}