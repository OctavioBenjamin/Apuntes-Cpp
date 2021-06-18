#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string res;

    while(n != 0){

        int digito = n%10;
        res.push_back(digito+'0');
        n = n/10;
    }

    reverse(res.begin(), res.end()); //Incluida en Algorithm

    cout<<res<<endl;
    return 0;
}
