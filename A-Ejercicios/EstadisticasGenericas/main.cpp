/**
Escribir un programa que lea N numeros, y visualice el maximo, el mınimo y la suma
**/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int lista[n];

    for (int i = 0;i < n;i++){
        cin>>lista[i];
    }


    ///MAXIMO
    int max = lista[0];

    for (int i = 0; i < n;i++){
        if(max < lista[i]){
            max = lista[i];
        }
    }
    cout << max << endl;


    ///MINIMO
    int min = lista[0];

    for (int i = 0; i < n;i++){
        if(min > lista[i]){
            min = lista[i];
        }
    }
    cout << min << endl;



    ///SUMA
    int sum = lista[0];

    for (int i = 1; i < n; i++){

        sum = sum + lista[i];
    }

    cout<<sum<<endl;

    return 0;

}
