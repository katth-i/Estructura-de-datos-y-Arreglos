#include <iostream>
using namespace std;

int main() {
    string jugadores[5] = {"Ana", "Luis", "Pedro", "Sara", "Juan"};
    int puntos[5]        = {1500,  800,   2300,    450,    1100};

    cout << "Jugador: " << jugadores[2] << endl;  // Pedro  -> posicion 2
    cout << "Puntos:  " << puntos[1]   << endl;   // 800    -> Luis en posicion 1
    cout << "Jugador: " << jugadores[3] << endl;  // Sara   -> posicion 3
    cout << "Puntos:  " << puntos[4]   << endl;   // 1100   -> ultimo indice es 4

    return 0;
}
