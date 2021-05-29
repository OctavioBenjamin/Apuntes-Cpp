/**
Funciones

        Una funcion es un conjunto de instrucciones para poder realizar cierta tarea

    + Tipos de funciones

        void - no devuelve nada
        int - devuelve un int
        string - devuelve un string
        etc.

    + ejemplo de VOID

            void imprimirHolaMundo(){
                cout << "Hola mundo desde la funcion";
            }
                Para ejecutar esta funcion se debe de llamarla dentro del main() como imprimitHolaMundo();

            -------------------

            void imprimirNombre(string nombre) {
                cout<< "el nombre es " << nombre << endl;
            }
            para llamar a esta funcion debe de ser:
                    string n = "Octavio"
                    imprimirNombre(n); //Recibe n como para parametros

    + Ejemplo de funciones Int

            int sumar(int a, int b) {
                int resultado = a+b;
                return resultado;   //Devuelve resultado que es INT
            }

            int minimoN(int a, int b, int c){
                return min(a,b,c);  // Retorna con una funcion min
            }

            int mian() {

                sumar(1, 2); //llama a la funcion y se le da los parametros

                minimoN(123, 65, 8);

                return 0;
            }

**/

#include <iostream>
using namespace std;

void imprimirHolaMundo(){
    cout<< "Hola mundo";
}

int main()
{

    imprimirHolaMundo();
    return 0;
}
