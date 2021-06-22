#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

struct Provincia  {             // Generas una estructura llamada provincia, se compone de:
    string nombre, abrev;       // Nombre y Abreviatura
    int poblacion, superficie;  // Poblacion y Superficie
};

bool operator < (const Provincia &a, const Provincia &b) {
    float d1 = a.poblacion/a.superficie;
    float d2 = b.poblacion/b.superficie;
    return d1 < d2;
}

int main()
{
    /**
    Provincia mas poblada y la menos poblada
    **/

    ifstream cin("provincias.txt");

    int n;
    cin >> n;
    vector <Provincia> prov;

    for(int i=0; i<n; i++) {
        string nombre, abrev;
        int poblacion, superficie;
        cin >> nombre >> abrev >> poblacion >> superficie;
        prov.push_back({nombre, abrev, poblacion, superficie}); 
    }

    sort(prov.begin(), prov.end());

    for(int i=0; i<n; i++)
    {
        cout << prov[i].nombre << " " << prov[i].abrev << " " << prov[i].poblacion << " " << prov[i].superficie << endl;
    }

    return 0;
}