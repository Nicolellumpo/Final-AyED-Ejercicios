/*  Ejercicio 5 

Un programa, que multiplique 2 valores cualesquiera, le cambie el valor a uno de estos valores a 20 y luego imprima a todos los valores.
Entonces, si lo  pensamos modularmente, tendríamos que tener:
una función que multiplique valores y retorne su resultado.
una acción que cambie el valor de un número a 20, porque no me interesa qué devuelva; ya se que la variable va a salir valiendo 20.
una acción que imprima valores

*/

#include <iostream>

using namespace std;

void cambiarValor(int &valor) {
    valor = 20;
}

int multiplicar(int a, int b) {
    return (a * b);
}

void imprimirValores(int a) {
    cout << "Valor a: " << a << endl;
}

int main() {
    int a = 5, b = 10;
    int resultado = multiplicar(a, b);

    cambiarValor(a);

    imprimirValores(a);
    imprimirValores(b);
    imprimirValores(resultado);
    
    return 0;
}