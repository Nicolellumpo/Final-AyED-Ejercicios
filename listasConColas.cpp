#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>
using namespace std;

struct Nodo{
    int info;
    Nodo* sgte;
};

void agregar(Nodo* &fte, Nodo* &fin, int v){
    Nodo* p = new Nodo();
    p->info = v;
    p->sgte = NULL;
    if(fte==NULL){
        fte=p;
    } else{
        fin->sgte = p;
    }
    fin=p;
}

int suprimir(Nodo* &fte, Nodo* &fin){
    int v;
    Nodo* p = fte;
    v = p->info;
    fte = p->sgte;
    if(fte==NULL){
        fin=NULL;
    }
    delete p;
    return v;
}

int main()
{
    Nodo* frente = NULL;
    Nodo* fin=NULL;
    agregar(frente,fin,5);
    agregar(frente,fin,6);
    agregar(frente,fin,7);

    while(fin!=NULL){
        cout <<"El valor del primer struct de la lista es: " << suprimir(frente,fin) << endl;
    }
    return 0;
}
