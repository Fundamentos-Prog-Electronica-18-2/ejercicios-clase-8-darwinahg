#include <iostream>

using namespace std;

int main()
{

    int tabla =12 ;
    int limite = 99999;
    int contador = 0;
    int operacion = 0;
    cout << "tabla de multiplicar" << endl;

    while(contador <= limite){

        operacion = tabla * contador;
        cout << tabla <<" * " <<contador <<" = " << operacion << endl;
        contador = contador + 1;
    }

    return 0;
}
