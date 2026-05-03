#include <iostream>
using namespace std;

int main() {
    int notas[5] = {8, 9, 7, 10, 6};

    // 1. Recorrido
    cout << "Recorrido: ";
    for(int i = 0; i < 5; i++) {
        cout << notas[i] << " ";
    }

    // 2. Búsqueda
    int buscar = 7;
    for(int i = 0; i < 5; i++) {
        if(notas[i] == buscar) {
            cout << "\nEncontrado en posicion: " << i;
        }
    }

    // 3. Inserción (simulada)
    notas[2] = 11; // reemplazo
    cout << "\nNuevo valor en posicion 2: " << notas[2];

    // 4. Eliminación (simulada)
    for(int i = 2; i < 4; i++) {
        notas[i] = notas[i+1];
    }

    cout << "\nArreglo despues de eliminar: ";
    for(int i = 0; i < 4; i++) {
        cout << notas[i] << " ";
    }

    return 0;
}
