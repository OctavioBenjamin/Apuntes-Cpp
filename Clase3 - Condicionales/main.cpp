/**Clase 3 De OIA
Introduccion a C++ Parte2

Condicionales - IF


If (condicion)
    instrucción
else if (condicion)
    instruccion
else
    instruccion


    && - And - "Y" logico / Ej: edad == 18 && edad2 == 30 // edad == 18 and edad2 == 30
                                Busca comparar dos valores, deben de ser verdaderos los dos

    || - Or - "O" logico / Ej: edad == 18 || edad2 == "30" // edad == 18 or edad2 == 30
                                Busca comprar dos valores, uno de ellos debe de ser verdadera

    COMPARADORES

    == Igual
    != Desigual
    <  Menor que
    >  Mayor que
    <= Menor que
    >= Mayor que

**/

#include <iostream>
using namespace std;

int main()
{
    int dia, mes;
    cout<< "Ingrese el dia que nacio"<<endl;
    cin >> dia;
    cout<< "Ingrese el mes que nacio"<<endl;
    cin >> mes;

    // Si cumple años antes o despues del 25 de mayo

    if (mes == 25 and dia != 25 ){                        //Condicional (Si tu edad es mayor o igual a 18, realiza la instruccion de abajo)
            cout<< "Cumple en mayo, pero no el 25" << endl;
    }

    else if (mes == 5 and dia == 25) {
        cout << "cumple el 25 de mayo" << endl;
    }
    else if (mes < 5 or (mes == 5 and dia < 25)) {
        cout<< "Cumple antes del 25 de mayo" << endl;
    }

     else {                                                         //Si la condicion de arriba no se cumple, realiza la instruccion de abajo
        cout << "cumple despues del 25 de Maayo" << endl;
    }

    return 0;
}
