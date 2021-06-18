#include <iostream>
#include <algorithm>
using namespace std;

int toInt (string s){

    int n = 0;
    for (int i = 0; i<s.size(); i++) {
       int digito = (s[i] - '0'); 
       n = n*10 + digito; //Agrega un decimal y agrega el digito al final

       // n = n*10 + (s[i] + '0')
    }

    // i = 0; n = 6
    // i = 1; n = 65
    // i = 3; n = 651
    // etc...

    return n;
}

int main () {

    string s;
    cin >> s;

    int n = toInt(s);
    cout<<n<<endl;     

    return 0;
}