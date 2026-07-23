#include <iostream>

using namespace std;

void agregarValor(int v[] , int &cant , int valor){
    v[cant] = valor;
    cant++;
}

void quitarValor(int v[], int &cant, int pos) {
    if (pos < cant) {
        while (pos < cant) {
            v[pos] = v[pos + 1];
            pos++;
        }
        cant--;
    } else {
        cout << "La posición no se encuentra en el vector" << endl;
    }
}

void imprimirVector(int v[] , int cant ){
    for( int i=0 ; i<cant ; i++){
        cout << v[i] << " ";
    }

    cout << endl;

}

int main(){
    int cant = 5;
    int v[cant] = {1, 2, 3, 4, 5};

    //Agregar valor del vector
    cout << "El vector antes de agregar el valor, es: ";
    imprimirVector(v, cant);

    agregarValor(v, cant, 6);

    cout << "Los valores del vector, despues de agregarle el 6, son: ";
    imprimirVector(v, cant);

    cout << endl;

    //Elimiar valor del vector
    cout << "El vector antes de eliminar el valor, es: ";
    imprimirVector(v, cant);

    quitarValor(v, cant, 2);

    cout << "Los valores del vector, despues de eliminar el 3, son: ";
    imprimirVector(v, cant);
    
    return 0;

}
