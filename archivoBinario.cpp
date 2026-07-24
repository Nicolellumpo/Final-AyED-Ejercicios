#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>

using namespace std;

struct Alumno{
    char nombre[20];
    int edad;
};

void cargarDatos(Alumno v[], int n){
    for(int i=0; i<n; i++){

        cout << "Ingrese los datos del alumno " << i+1 << endl;

        cout << "Ingrese el nombre del alumno: ";
        cin >> v[i].nombre;
        cout << "Ingrese la edad del alumno: ";
        cin >> v[i].edad;

        cout << endl;
    }
}

void guardarDatos(Alumno v[], int n, FILE* archivo){
    fseek(archivo, 0, SEEK_SET);
    int i = 0 ;

    while(i<n){
        fwrite(&v[i], sizeof(Alumno), n ,archivo);
        i++;
    }
    fflush(archivo);
}

void leerDatos(FILE* archivo , Alumno t[], int n){
    
    int i = 0;
    fseek(archivo, 0, SEEK_SET);

    while(fread(&t[i], sizeof(Alumno), n ,archivo) && i<n){
        cout << endl;
        cout << "Nombre del alumno: " << t[i].nombre << endl;
        cout << "Edad del alumno: " << t[i].edad << endl;
        i++;
    }
}

int main(){

    Alumno v[3];
    cargarDatos(v, 3);
    cout << endl;  
    cout << endl;  
    
    FILE* archivo;
    archivo = fopen("alumnos.txt", "wb+");
    guardarDatos(v, 3, archivo);
    fclose(archivo);

    archivo = fopen("alumnos.txt", "rb");
    Alumno t[3];
    leerDatos(archivo , t , 3);

    fclose(archivo);
    return 0;
}