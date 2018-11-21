#include <iostream>

using namespace std;

int main()
{
    cout <<"resolucion de una ecuacion de primer grado" << endl ;
    double a=0;
    double b=0;
    double resultado = 1;
    if (a!=0){
        resultado = -b/a;
        cout <<"el resultao es :" << resultado << endl;
    }else{
        if (b!=0){
            cout <<"solucion imposible" << endl;

        }else{
        cout <<"solucion indeterminada "<< endl;}
     }

}
