#include <iostream>
#include <cstring>
#include<string.h>
#include <string>

using namespace std;

struct Alumno{
    char nombre[20];
    int edad;
    int dni;
    Alumno* sgte;
};

struct NodoAlumno{
    Alumno alumno;
    NodoAlumno* sgte;
};

void push (NodoAlumno*& a, Alumno valor){
    NodoAlumno* aux = new NodoAlumno();
    aux->alumno = valor;
    aux->sgte = a;
    a = aux;
}

Alumno pop(NodoAlumno* &primerElem){

    Alumno retorno = primerElem -> alumno;

    NodoAlumno* q = primerElem;
    primerElem = q->sgte;

    delete q;
    return retorno;
}

int main (){

   NodoAlumno* p = NULL;
    Alumno jose;
    strcpy(jose.nombre, "Jose");
    jose.edad = 52;
    jose.dni = 40214386;

    push(p, jose);

    Alumno aux = pop(p);

    cout << "El nombre es: " << aux.nombre << endl;
    cout << "La edad es: " << aux.edad << endl;
    cout << "El DNI es: " << aux.dni << endl;
    return 0;

}

/*
#include <iostream>

using namespace std;


struct Alumno{
    char nombre[20];
    int edad;
    int dni;
    Alumno* sgte;
};

void push (Alumno*& alumno, int valor){
    Alumno* aux = new Alumno();
    aux->info = valor;
    aux->sgte = alumno;
    alumno = aux;
    return;
}

int pop(Alumno*& primerElem){
    int v;
    Alumno* q = primerElem;
    v = q->info;
    primerElem = q->sgte;
    delete q;
    return v;
}


int main (){

    Alumno* lista = NULL;
    push(lista, 1);
    push(lista, 2); 
    push(lista, 3);

    int aux;

    while(lista != NULL){
        cout << "Valor: " << pop(lista) << endl;
    }
    return 0 ;

}
*/