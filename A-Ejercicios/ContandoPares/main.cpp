#include <iostream>
#include <vector>
using namespace std;

int main () {

    int n;
    cin >> n;

    vector <int>v(n);

    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    int respuesta = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; i++){
            if ((v[i]+v[j])%10 == 0){
                respuesta++;
            }
        }
        
    }
    
    cout << respuesta << endl;

    return 0;
}