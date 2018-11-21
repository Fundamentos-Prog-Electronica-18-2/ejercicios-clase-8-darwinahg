#include <iostream>

using namespace std;

int main()
{
    int a,b,c,suma,producto,opcion;
    cout << "ingrese el valor a" << endl;
    cin >> a;
    cout << "ingrese el valor b" << endl;
    cin >> b;
    cout << "ingrese el valor c" << endl;
    cin >> c;
    cout<<"si desea hacer la suma ingrese 1 y para la multiplicacion el 2 "<< endl;
    cin >> opcion;


    switch(opcion){
        case 1:

            suma=a+b+c;
            cout << "la suma es"<<" "<<suma<< endl;
            cin>>suma;
            break;
        case 2:

            producto=a*b*c;
            cout << "el producto es"<<" "<<producto<< endl;
            cin>>producto;
            break;


    }
    return 0;
}
