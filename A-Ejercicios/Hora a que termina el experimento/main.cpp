/**

Enunciado
Federico quiere que lo ayudemos a saber a que hora debe dejar de jugar y volver al laboratorio. Para
esto debemos hacer un programa que reciba la hora exacta (con horas, minutos y segundos) de comienzo de
la reacci´on, y la duraci´on total de la misma (en segundos). El programa deber´a calcular
la hora exacta de finalizacion de la reaccion.


ENTRADA
consta de h, m, s, que indican respectivamente las horas, minutos y segundos
de comienzo de la reaccion, en formato de 24 horas.
Luego de esto se recibe una segunda lınea con un unico entero d, la duracion
total de la reaccion quımicaen segundos.

SALIDA
debe contener exactamente una lınea con tres numeros enteros
separados por espacios: estos deben indicar, en orden, las horas, minutos y segundos
correspondientes a la hora de fin de la reaccion.

**/




#include <iostream>
using namespace std;

int conversionH_S(int h, int m, int s) { //Convierte el tiempo en segundos
    h = h * 3600;
    m = m * 60;

    int segundos = h + m + s;

    return segundos;
}


int main()
{
    int h, m, s, duracion;
    cin >> h >> m >> s;
    cin >> duracion;



//---------------Pasa duracion a h m s------------------
    int s_diferencia, m_diferencia, h_diferencia;

    int div = duracion/60;

    if (duracion > 60){
        s_diferencia = duracion%60;
        m_diferencia = div%60;
        h_diferencia = div/60;

    } else if (duracion < 60){
        s_diferencia = duracion;
        m_diferencia = 0;
        h_diferencia = 0;
    }

//------------------------------------------------------



//----------------Calcular hora de finalizacion del experimento---------------

    // H M S Se le suma las diferencias

    h += h_diferencia;
    m += m_diferencia;
    s += s_diferencia;

    int segundosFinal = conversionH_S(h,m,s); // Se convierte a segundos para facilitarme la conversion a horas

    int div2 = segundosFinal/60;
    if (segundosFinal > 60){
        s = segundosFinal%60;
        m = div2%60;
        h = div2/60;

        if (h >= 24) {
            h -= 24;
        }

    } else if (segundosFinal < 60){
        s = segundosFinal;
        m = 0;
        h = 0;
    }

//--------------------------------------------------------------------------


    cout << h << " " << m << " " << s;

    return 0;
}
