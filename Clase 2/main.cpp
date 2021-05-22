/*
Segunda Clase de C++
Documentacion: http://webdiis.unizar.es/asignaturas/PROG1/doc/materiales/sintaxis_cpp.pdf
*/


#include <iostream>
using namespace std;

int main()
{

    cout<<"Hola mundo";

    int edad;
    string nombre;

    cout << "Ingrese su nombre" << endl;
    cin >> nombre;
    cout << "Ingrese su edad" << endl;
    cin >> edad;

    cout<< "Tu nombre es " << nombre << ", y tu edad es " << edad << " a�os." << endl;

    return 0;
}

/*
Tipos de variables
INT - Enteros
FLOAT - Numeros con comas
STRING - Cadenas de texto
BOOL - Verdadero Falso

Cout - Salida de datos
Cin - Entrada de datos
*/
