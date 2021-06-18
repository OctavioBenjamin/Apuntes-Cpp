#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    //pair <tipoDeDato, tipoDeDato2> nombreDelPair
    pair<string,int>datos("hola",2);

    //para acceder al primer y segundo dato
    cout<<datos.first<<endl<<datos.second;

    ifstream entrada ("archivo.txt"); //entrada por archivo, ifstream nombreDeEntrada ("nombre del archivo")
    entrada>>pair.first; //en vez de poner cin va el nombre que le pusimos a la entrada

    ofstream salida ("archivo2.txt");
    salida<<pair.first;

  return 0;

}
