#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
//====================================================================================================
// Abrir un archivo en modo lectura
//====================================================================================================
/* 
    FILE* archivo;
    archivo = fopen("archivo.txt", "r");
    
    if (archivo != nullptr) {
        cout << "El archivo se abrio correctamente." << endl;
    } else {
        cout << "El archivo NO se abrio correctamente." << endl;
        return 1; // Salir del programa con un código de error
    }

    char c;
    cout << "Contenido del archivo:" << endl;
    while ((c = fgetc(archivo)) != EOF) {
        cout << c;
    }

    fclose(archivo);
    return 0;
*/

//====================================================================================================
//Abrir un archivo en modo escritura y lectura
//====================================================================================================
///* 
    FILE* f1;
    f1 = fopen("Ejemplo1.txt", "w+");
    int i = 0;
    char c;

    cout << "Ingrese 10 caracteres, uno por uno" << endl;

    cin >> c;
    while (i < 9) {
        putc(c, f1);
        cin >> c;
        i++;
    }
    putc(c, f1);
    fclose(f1);
    cout << endl;

    f1 = fopen("Ejemplo1.txt", "r+");
    fseek(f1, 0, SEEK_SET);
    char d = fgetc(f1);
    i = 0;
    cout << "La cadena de caracteres es: ";
    while (i < 10) {
        cout << d;
        d = fgetc(f1);
        i++;
    }
    return 0;
    //*/
}