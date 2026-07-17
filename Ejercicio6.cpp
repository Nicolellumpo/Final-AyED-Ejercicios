#include <iostream>
using namespace std;

// Prototipos de funciones
void compararVariables(int numero1, int numero2);
void bucleWhile(int numero1, int numero2);
void bucleFor(int numero1, int numero2);
int  pedirNumeroPositivo();
void menuSwitch();

int main() {
    int numero1 = 0, numero2 = 0;

    // Comparación de variables
    compararVariables(numero1, numero2);

    // Modificación de variables en un bucle while
    bucleWhile(numero1, numero2);

    // Uso de un bucle for
    bucleFor(numero1, numero2);

    // con el Do while
    int numero = pedirNumeroPositivo();
    cout << "Número válido: " << numero << endl;

    // Ejemplo con switch case
    menuSwitch();

    return 0;
}

// Definiciones de funciones
void compararVariables(int numero1, int numero2) {
    if (numero1 > numero2) {
        cout << "numero1 es mayor que numero2" << endl;
    } else {
        cout << "numero1 no es mayor que numero2" << endl;
    }
}

void bucleWhile(int numero1, int numero2) {
    while (numero1 < 6) {
        numero2 = numero2 + 10;
        numero1++;
    }
    cout << "El valor de numero2 con WHILE es: " << numero2 << endl;
}

void bucleFor(int numero1, int numero2) {
    for (numero1 = 0; numero1 < 6; numero1++) {
        numero2 = numero2 + 10;
    }
    cout << "El valor de numero2 con FOR es: " << numero2 << endl;
}

int pedirNumeroPositivo() {
    int numero;
    do {
        cout << "Ingrese un número positivo: ";
        cin >> numero;
    } while (numero <= 0);
    return numero;
}

void menuSwitch() {
    int opcion;
    cout << "Ingrese un número (1-3): ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Elegiste la opción 1" << endl;
            break;
        case 2:
            cout << "Elegiste la opción 2" << endl;
            break;
        case 3:
            cout << "Elegiste la opción 3" << endl;
            break;
        default:
            cout << "Opción inválida" << endl;
    }
}
