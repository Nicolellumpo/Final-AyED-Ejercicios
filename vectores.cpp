#include <iostream>

using namespace std;

int main (){
    int vector[5] = {1,2,3,4,5};
    //int i = 0 ;

    cout <<"El valor de la posicion 0 es: "<< vector[0]<< endl;
    cout <<"El valor de la posicion 1 es: "<< vector[1]<< endl;
    cout <<"El valor de la posicion 2 es: "<< vector[2]<< endl;
    cout <<"El valor de la posicion 3 es: "<< vector[3]<< endl;
    cout <<"El valor de la posicion 4 es: "<< vector[4]<< endl;

    /*
    while(i<5){
        cout << "El valor de la posicion " << i << "es: " << vector[i]<< endl;
        i++;
    }
    */

    char nombre[4];

    nombre[0]= 'N';
    nombre[1]= 'I';
    nombre[2]= 'K';
    nombre[3]= 'I';

    cout <<"El nombre es: ";

    for(int i = 0 ; i < 4 ;  i++ ){
        cout << nombre[i];
    }

    cout << endl;
    return 0 ;
}