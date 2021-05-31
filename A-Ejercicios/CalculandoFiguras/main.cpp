/**

Dado el nombre de una figura, y sus dimensiones caracter´ısticas, se debe calcular el ´area total de la figura.
Las figuras que se podr´ıan recibir son (siempre en min´usculas):

’cuadrado’: Se recibir´a la longitud del lado.

’rectangulo’: Se recibir´an las longitudes de los dos lados.

’cubo’: Se recibir´a la longitud del lado. Notar que un cubo tiene seis caras que completan todo el ´area.

’caja’: Se recibir´an las tres dimensiones de la caja (ancho, largo y alto). Notar que al igual que el
cubo, una caja tiene seis caras, aunque no son iguales como en el cubo.

**/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int long1, long2, long3, area;
    string figura;

    cin>>figura;

    if (figura == "cuadrado") {
        cin>>long1;

        if (long1 < 150 && long1 >  0) {

            area = pow(long1, 2);
            cout<<area<<endl;
        }
    }

    else if (figura == "rectangulo") {
        cin>> long1 >> long2;

        if (long1 < 150 && long1 >  0) {
            if (long2 < 150 && long2 >  0) {

                area = long1*long2;
                cout<<area<<endl;
            }
        }
    }

    else if( figura == "cubo") {
        cin>>long1;

        if (long1 < 150 && long1 >  0) {
            area = pow(long1, 2)*6;
            cout<<area<<endl;
        }
    }

    else if (figura == "caja") {
        cin>>long1>>long2>>long3;

        if (long1 < 150 && long1 >  0){
            if (long2 < 150 && long2 >  0){
                if (long3 < 150 && long3 >  0) {

                    int cara = long1 * long2;
                    int lado = long2 * long3;
                    int superior = long1 * long3;
                    int sumaArea = cara+lado+superior;
                    area = sumaArea*2;
                    cout<<area;
                }
            }

        }
    }
    return 0;
}
