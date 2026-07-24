#include <iostream>
#include <cstdio>
using namespace std;

struct Producto {
    int id;
    int valor;
    char tipo;
};

// Funciones CRUD
void listarArchivo(FILE* f) {
    Producto p;
    int i = 0;
    rewind(f);
    while (fread(&p, sizeof(Producto), 1, f)) {
        cout << "Registro " << i++ << ":\n";
        cout << "ID: " << p.id << "\nValor: " << p.valor << "\nTipo: " << p.tipo << "\n\n";
    }
}

bool existeStruct(FILE* f, int id_buscado) {
    Producto p;
    rewind(f);
    while (fread(&p, sizeof(Producto), 1, f)) {
        if (p.id == id_buscado) return true;
    }
    return false;
}

Producto buscarStruct(FILE* f, int id_buscado) {
    Producto p;
    rewind(f);
    while (fread(&p, sizeof(Producto), 1, f)) {
        if (p.id == id_buscado) return p;
    }
    p.id = -1;
    return p;
}

void modificarArchivo(FILE* f, int id_buscado, int nuevoValor) {
    Producto p;
    rewind(f);
    while (fread(&p, sizeof(Producto), 1, f)) {
        if (p.id == id_buscado) {
            p.valor = nuevoValor;
            long pos = ftell(f) - sizeof(Producto);
            fseek(f, pos, SEEK_SET);
            fwrite(&p, sizeof(Producto), 1, f);
            cout << "Registro modificado correctamente.\n";
            return;
        }
    }
    cout << "No existe un producto con dicho ID.\n";
}

// Programa principal con menú
int main() {
    FILE* f = fopen("productos.txt", "rb+");
    if (!f) {
        f = fopen("productos.txt", "wb+");
        if (!f) {
            cout << "Error al abrir/crear el archivo.\n";
            return 1;
        }
    }

    int opcion;
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Listar productos\n";
        cout << "2. Verificar existencia por ID\n";
        cout << "3. Buscar producto por ID\n";
        cout << "4. Modificar producto\n";
        cout << "5. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            listarArchivo(f);
        } else if (opcion == 2) {
            int id;
            cout << "Ingrese ID a verificar: ";
            cin >> id;
            if (existeStruct(f, id)) cout << "El producto existe.\n";
            else cout << "El producto NO existe.\n";
        } else if (opcion == 3) {
            int id;
            cout << "Ingrese ID a buscar: ";
            cin >> id;
            Producto p = buscarStruct(f, id);
            if (p.id != -1)
                cout << "Encontrado -> ID: " << p.id << ", Valor: " << p.valor << ", Tipo: " << p.tipo << "\n";
            else
                cout << "No se encontro el producto.\n";
        } else if (opcion == 4) {
            int id, nuevoValor;
            cout << "Ingrese ID a modificar: ";
            cin >> id;
            cout << "Ingrese nuevo valor: ";
            cin >> nuevoValor;
            modificarArchivo(f, id, nuevoValor);
        }
    } while (opcion != 5);

    fclose(f);
    return 0;
}
