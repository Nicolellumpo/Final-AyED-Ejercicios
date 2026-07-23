#include <iostream>

using namespace std;

typedef struct{
    int edad;
    char nombre[20];
    float promedio;
} Alumno;

int main() {

//================================================================================================================
//                          CON STRUCTS
//================================================================================================================
    Alumno niki;
    
    cout << "Ingrese nombre :";
    cin >> niki.nombre;
    
    cout << "Ingrese edad :";
    cin >> niki.edad;
    
    cout << "Ingrese promedio :";
    cin >> niki.promedio;
    
    cout << "El nombre del alumno es: " << niki.nombre << endl;
    cout << "La edad del alumno es: " << niki.edad << endl;
    cout << "El promedio del alumno es: " << niki.promedio << endl;

    cout << endl;

//================================================================================================================
//                          Vectores de STRUCTS
//================================================================================================================

    Alumno alumno[3];
    
    for(int i = 0; i < 3; i++){
        cout << "Ingrese nombre :";
        cin >> alumno[i].nombre;
        
        cout << "Ingrese edad :";
        cin >> alumno[i].edad;
        
        cout << "Ingrese promedio :";
        cin >> alumno[i].promedio;
    }
    
    cout << endl;
    
    for(int j = 0; j < 3; j++){

        cout << "Alumno Numero " << j + 1 << endl;
        cout << "El nombre del alumno " << alumno[j].nombre << endl;
        cout << "La edad del alumno " << alumno[j].edad << endl;
        cout << "El promedio del alumno " << alumno[j].promedio << endl;
    }

    cout << endl;
    
    return 0;
}
