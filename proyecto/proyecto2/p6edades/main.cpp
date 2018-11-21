#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nombres;
    string apellidos;
    int edad;

    cout << "ingrese sus nombres por favor" << endl;
    cin  >> nombres;

    cout << "ingrese sus apellidos por favor" << endl;
    cin  >> apellidos;

    cout << "ingrese su edad por favor" << endl;
    cin  >> edad;

    if (edad<10){
        cout <<nombres << " "<<apellidos << endl ;
        cout <<"con "<<edad<< " anos " << endl ;
        cout << "pertenece al basica " << endl ;
    }else{
        if ((edad>=10) & (edad <14)){
            cout <<nombres<<" "<<apellidos<< endl ;
            cout <<"tiene "<<edad<<" anos " << endl ;
            cout << "pertenece al basica superior " << endl ;
        }else{
        if ((edad>=14) & (edad<=17)){
        cout <<nombres<<" "<<apellidos<<" "<<"tiene"<<" "<<edad<<" "<<"anos"<< endl ;
        cout <<"pertenece al bacillerato unificado " << endl ;
    }else{
            cout <<"fuera de rango";
            }


        }
    }

 return 0 ;
}
