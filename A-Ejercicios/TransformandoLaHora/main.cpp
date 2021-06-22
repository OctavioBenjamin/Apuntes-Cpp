// Transformar la hora de AM a PM

#include <iostream>
#include <vector>
using namespace std;

int main() {

    string s;
    cin>>s;

    int h = (s[0]- '0')*10 + s[1] - '0';
    int m = (s[3]- '0')*10 + s[4] - '0';

    if (h < 12){

        if (h == 0){
            h = 12;
        }
        if (h < 10){
            cout<< "0";
        }
        cout<< h << ":";
        if (m < 10){
            cout<<"0";
        } 
        cout<< m << "AM";
    } else {

        if (h > 12){
            h -= 12;
        }
        
        if (h < 10){
            cout<< "0";
        }
        cout<< h << ":";
        if (m < 10){
            cout<<"0";
        } 
        cout<< m << "PM";

    }

    return 0;
}