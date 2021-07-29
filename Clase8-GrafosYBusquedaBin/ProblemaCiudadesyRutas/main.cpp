/* Ejercicio (ver foto)
4 Ciudades 2 Caminos
Input 
    10 8 
    1 2
    1 3
    2 3
    4 5
    6 7
    6 8
    7 8
    7 10
*/

#include <bits/stdc++.h>
using namespace std;

vector <vector<int>> ady;
vector <bool> visit; //Declara si visito o no visito un nodo

void DFS(int nodo){ //Algoritmo para llamar a la busqueda en profundidad

    visit[nodo] = true;

    for(int i = 0; i < ady[nodo].size(); i++){
        if(visit[ady[nodo][i]] == false){
            DFS(ady[nodo][i]);
        }
    }
}

int main(){

    int n, m;
    cin >> n >> m;
    ady.resize(n+1);
    visit = vector <bool> (n+1, false);

    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;

        ady[a].push_back(b);
        ady[b].push_back(a);
    }


    vector <int> rep;
    for(int i = 1; i<+n; i++){
        if (visit[i] == false){
            DFS(i);
            rep.push_back(i)
            //cout<<"Llamada a DFS en el nodo: " << i <<endl;
        }
    }

    for (int i = 1; i<rep.size();i++){
        cout<< rep[i-1] << " " << rep[i] << endl;
    }

    return 0;
}
