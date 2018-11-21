#include <iostream>

using namespace std;

int main()
{
    int numero,limite,opcion,opcion1;
    int contador=0;
    int operacion=0;

    cout << "ingrese un numero para operar" << endl;
    cin>>numero;
    cout << "ingrese un limite" << endl;
    cin>>limite;
    cout<<"si desea hacer la multipliacion ingrese 1 y para la suma el  2 "<< endl;
    cin >> opcion;

if (opcion==1){
    while(contador<=limite){

        operacion=numero * contador;
        cout << numero <<" * "<<contador<<" = "<< operacion <<endl;
        contador=contador+1;
    }

}    else{

    if(opcion==2){
        while(contador<=limite){

        operacion= numero+contador;
        cout << numero <<" + "<<contador<<" = "<< operacion <<endl;
        contador=contador+1;
            }
        }else{
        cout <<"opcion incorrecta";
        }

}

    return 0;
}
