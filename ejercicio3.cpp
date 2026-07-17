#include <stdio.h>
#include <iostream>

using namespace std;

//practica de la unidad 2


int devolverC(){ // devolverC es una FUNCION
    return 'C';
}

void imprimir(int a){
 cout << a << endl;
}

int main(){

    char letra;
    int a = 2;
    int b = 3;
    
    letra = devolverC(); // asi se llama a una FUNCION 

    cout << "La letra es: " << letra << endl;

    imprimir(a); //asi se llama a un void (funcion sin nada q retorne)
    imprimir(b);
        
    return 0;
}



