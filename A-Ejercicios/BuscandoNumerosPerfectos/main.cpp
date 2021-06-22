// Los numeros son perfectos cuando la suma de sus divisores es igual al mismo numero
// Determinar 
// 
#include <iostream>
using namespace std;

int divisores(int n){

    int s = 0;
    for (int i = 1; i < n; i++) {
        if (n%i == 0){
            s += i;
        }
    }
    return s;
}

int main() {

    int n;
    cin>>n;

    for (int i = 0; i <+ n; i++) {
        if(divisores(i) == i){
            cout << i << endl;
        }
    }
    

    return 0;
}