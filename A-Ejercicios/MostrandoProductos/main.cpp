/**
Dados dos n´umeros de hasta 2 dıgitos decimales, se debe imprimir una “cuenta”
del producto (multiplicacion) de ambos. La cuenta debe estar bien alineada a derecha.
**/

#include <iostream>
using namespace std;

int funProducto(int a, int b){
    int producto = a*b;

    cout<<"----"<<endl;
    if (producto < 10){
        cout<<" "<<" "<<" "<<producto<<endl;
    }
    else if (producto >= 10 && producto < 100){
         cout<<" "<<" "<<producto<<endl;
    }
    else if (producto >= 100 and producto < 1000){
         cout<<" "<<producto<<endl;
    }
    else if (producto >= 1000){
         cout<<producto<<endl;
    }

    return producto;
}

int main()
{
    int a, b;
    cin>>a>>b;

    if (a < 10 && a >= 0){
        cout<<" "<<" "<<" "<<a<<endl;
        if (b < 10 && b >= 0 ){
            cout<<"x"<<" "<<" "<<b<<endl;
        }
        else if (b >= 10 && b < 100){
            cout<<"x"<<" "<<b<<endl;
        }
        else if (b == 100){
            cout<<"x"<<b<<endl;
        }
    }

    if (a >= 10 && a < 100){

        cout<<" "<<" "<<a<<endl;
        if (b < 10 && b >= 0){
            cout<<"x"<<" "<<" "<<b<<endl;
        }
            else if (b >= 10 && b < 100){
            cout<<"x"<<" "<<b<<endl;
        }
        else if (b = 100){
            cout<<"x"<<b<<endl;
        }
    }

    if (a == 100){
        cout<<" "<<a<<endl;
        if (b < 10 && b > 0){
            cout<<"x"<<" "<<" "<<b<<endl;
        }
        else if (b >= 10 && b < 100){
            cout<<"x"<<" "<<b<<endl;
        }
        else if (b = 100){
            cout<<"x"<<b<<endl;
        }
    }

    funProducto(a, b);
