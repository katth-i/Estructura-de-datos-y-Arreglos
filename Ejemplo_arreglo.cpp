#include <iostream>
using namespace std;

int main() {
    int numeros[5];
    int suma = 0;
    int mayor;


    cout << "Ingrese 5 numeros:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }


    mayor = numeros[0];


    for (int i = 0; i < 5; i++) {
        suma += numeros[i];
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }


    cout << "Elementos del arreglo: ";
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;
    cout << "Suma total: " << suma << endl;
    cout << "Numero mayor: " << mayor << endl;

    return 0;
}
