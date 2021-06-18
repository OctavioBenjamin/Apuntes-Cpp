/**
    Se crea una funcion para encontrar el string mas largo dentro de un vector que los contenga y su posicion
    Ejemplos

    este
    es
    un
    input
    al
    problema

**/

#include <iostream>
#include <Vector>
using namespace std;

void masLargo(vector <string> v, int &pos, string &res){

    res = v[0];
    pos = 0;

    for (int i = 1;i<v.size();i++){
        if (v[i].size() > res.size()){
            res = v[i];
            pos = i+1;
        }
    }
}

int main() {

    int n;
    cin>>n;
    vector <string> v (n);

    for (int i=0; i<n ;i++){
        cin>> v[i];
    }

    //string resultado = masLargo(v);

    int pos;
    string res;

    masLargo(v, pos, res);

    cout<<"El string mas largo es: "<< res<<endl;
    cout<<"Esta en la posicion: "<< pos<<endl;

    return 0;
}
