/**
Escribir un programa que lea una palabra, y la imprima encerrada en un recuadro de asteriscos (cartel).
**/

#include <iostream>
using namespace std;

int main()
{
    string palabra;
    cin>>palabra;
    int largo = palabra.size(); //Largo de la parte superior

    cout<<"*";
    for(int i = 0; i < largo; i++){
        cout<<"*";
    }
    cout<<"*"<<endl;
    cout<<"*"<<palabra<<"*"<<endl;

    cout<<"*";
    for(int i = 0; i < largo; i++){
        cout<<"*";
    }
    cout<<"*"<<endl;

    return 0;
}
