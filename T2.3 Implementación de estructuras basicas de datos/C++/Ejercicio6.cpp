#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Ingrese el tamano del arreglo A: ";
    cin >> n;
    int A[n];

    cout << "Ingrese los elementos de A:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Ingrese el tamano del arreglo B: ";
    cin >> m;
    int B[m];

    cout << "Ingrese los elementos de B:\n";
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    int resultado[n];
    int k = 0;

    for (int i = 0; i < n; i++) {
        bool enB = false;

        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                enB = true;
                break;
            }
        }

        bool repetido = false;
        for (int r = 0; r < k; r++) {
            if (resultado[r] == A[i]) {
                repetido = true;
                break;
            }
        }

        if (enB && !repetido) {
            resultado[k] = A[i];
            k++;
        }
    }
    if (k == 0) {
        cout << "No hay interseccion entre los arreglos.";
    } else {
        cout << "Interseccion: ";
        for (int i = 0; i < k; i++) {
            cout << resultado[i] << " ";
        }
    }

    return 0;
}
