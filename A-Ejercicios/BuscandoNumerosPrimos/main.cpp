#include <iostream>
using namespace std;

bool primo(int n) {
    bool condicion;
    if (n != 1 && n != 0) {
        for (int i = 2; i <= n; i++) {
            if (n % i == 0) {
                if (n == i) {
                    condicion = true;
                } else {
                    condicion = false;
                    return condicion;
                }
            }   
        }
    } else {
        condicion = false;
    }

    return condicion;
}

int main () {

    int limite;
    cin >> limite;

    for (int i = 1; i <= limite; i++){
        if (primo(i)) {
            cout<<i<<endl;
        }
        
    }

    return 0;
}