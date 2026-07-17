#include <stdio.h>
#include <iostream>

using namespace std;

//practica de la unidad 1

int main(){

    string nombre, apellido;
    int edad, numero_favorito1, numero_favorito2;

    cout << "Ingrese su Nombre: ";
    cin >> nombre;

    cout << "Ingrese su Apellido: ";
    cin >> apellido;

    cout << "Ingrese su Edad: ";
    cin >> edad;

    cout << "Ingresa tu primer Numero Favorito: ";
    cin >> numero_favorito1;

    cout << "Ingresa tu segundo Numero Favorito: ";
    cin >> numero_favorito2;

    int suma_favoritos = numero_favorito1 + numero_favorito2;

    cout << endl;

    cout << "Tu nombre es: " << nombre << endl;
    cout << "Tu apellido es: " << apellido << endl;
    cout << "Tu edad es: " << edad << endl;
    cout << "La suma de tus numeros favoritos es: " << suma_favoritos << endl;
    
    
    return 0;
}
