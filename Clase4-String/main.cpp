/**
CLASE 4 DE OIA

Strings
Cadenas de texto

Char - Tipo de dato

char letra = 'a';
cout << letra << endl;
la variable char puede operarse con numeros para usar valores ascii


String = nombre = "nombre";
String guarda mas de un valor
**/


#include <iostream>
using namespace std;

int main()
{
    /** EJEMPLO DE USO DE VARIABLES CHAR CON OPERACIONES (ASCII)
    char letra;
    cin>> letra;


    if ('A' <= letra && letra <= 'Z') {
        cout << "La letra es mayuscula"<<endl;
        letra+=32;
        cout << "Mininuscula: " << letra << endl;
        cout << "Su valor ascii es: " << int(letra) << endl;
    }

    else if ('a' <= letra && letra <= 'z') {
        cout<< "La letra es miniscula" << endl;
        letra-=32;
        cout << "Mayuscula: " << letra << endl;
        cout << "Su valor ascii es: " << int(letra) << endl;
    }

    else {
        cout << "No es una letra";
    }
    **/


    string palabra;
    cin >> palabra;

    //variable.size() para saber la cantidad de letras
    cout << palabra << " Tiene: " << palabra.size() << " letras" <<endl;
    cout << "La segunda letra es: " << palabra[1] <<endl; //Accede a la letra indicada en [ ]

    for (int i = 0; i <= palabra.size(); i++) { // Imprime todas las letras una por una
        cout<< palabra[i]<<endl;
    }

    /** Otras operaciones con string
    palabra[5] = "X" - Cambia el valor en el 5to lugar

    palabra += "+" - Agrega un caracter al final

    palabra.s_back('+'); - Agrega un caracter al final (otro ejemplo)

    palabra.pop_back(); - Saca el caracter final
    **/

    string palabra2;
    cin>>palabra2;

    if (palabra == palabra2) { //Comparaciones
        cout<< "Son iguales"<<endl;
    } else if (palabra < palabra2) {
        cout<< "La primera va antes que la segunda"<<endl;
    } else {
        cout<< "La primera va despues que la segunda"<<endl;
    }

    return 0;
}
