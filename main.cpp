
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    
    int a = 8;
    int b = 2;
    int aux = 3;
    int variablePorUsuario;
    
    cin >> variablePorUsuario;
    
    //b=a;
    //a=b;
    
    aux=b;
    b=a;
    a=aux;
    
    cout <<"El valor a es: " << a << endl;
    cout <<"El valor b es: " << b << endl;
    cout <<"El valor aux es: " << aux << endl;
    cout << "El valor ingresado por el usuario: " <<variablePorUsuario <<endl;
    
    
    return 0;
}