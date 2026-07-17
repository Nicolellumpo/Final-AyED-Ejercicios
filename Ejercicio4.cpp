#include <iostream>
using namespace std;

// Prueba de paso de parámetros por valor, referencia y puntero

//-----------------------------------------por Valor----------------------------------------------
void porValor(int x) {
    x = x + 10; // solo modifica la copia
    cout << "Dentro de la función x valor: " << x << endl;
}

//-----------------------------------------por Referencia----------------------------------------------
void porReferencia(int &x) {
    x = x + 10; // modifica la variable original
    cout << "Dentro de la función x referencia: " << x << endl;
}

//-----------------------------------------por Puntero----------------------------------------------
void porPuntero(int *x) {
    *x = *x + 10; // modifica la variable original
    cout << "Dentro de la función x puntero: " << *x << endl;
}

int main() {
    int numero = 5;

    porValor(numero);
    cout << "Fuera de la función x valor: " << numero << endl << endl; // ahora es 15
    
    porReferencia(numero);
    cout << "Fuera de la función x Referencia: " << numero << endl << endl; // sigue siendo 5
    
    porPuntero(&numero);
    cout << "Fuera de la función x puntero: " << numero << endl << endl; // ahora es 15

    return 0;
}



