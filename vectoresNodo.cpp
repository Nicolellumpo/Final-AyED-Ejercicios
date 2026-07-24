#include <iostream>

using namespace std;

struct NodoEntero {
    int valorEntero;
    NodoEntero* siguiente; // tiene guardada la direccion de memoria del siguiente nodo
};
struct NodoCaracter {
    char valorCaracter;
    NodoCaracter* siguiente;
};
struct Ejemplo{
    int valores[5];
    int valor1;
    char valor2;
};
struct NodoStruct {
    Ejemplo valorEjemplo;
    NodoStruct* siguiente;
};


void haceAlgo(){
    cout << "Haciendo algo..." << endl;
}  

int main (){

    NodoEntero* punteroNodo1 = NULL;

    while(punteroNodo1 != NULL){
        haceAlgo();
    }
    return 0 ;

}