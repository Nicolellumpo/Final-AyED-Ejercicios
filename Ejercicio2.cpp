#include <stdio.h>
#include <iostream>

using namespace std;

//practica de la unidad 2

// Declaración (prototipo) de la función
//int sumar(int numero1 , int numero2);


int sumar(int numero1 , int numero2){
    int numero3 = numero1 + numero2 ;
    return numero3;
}

int main(){

    int a = 2;
    int b = 8;
    int resultado = sumar(a,b);

    cout << "La suma de a y b es: " << resultado << endl;
        
    return 0;
}

// Definición de la función
/*int sumar(int numero1 , int numero2){
    int numero3 = numero1 + numero2 ;
    return numero3;
}*/


