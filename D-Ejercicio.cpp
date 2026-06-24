#include <iostream>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;

    int vasos[1000001]; // tamaño grande

    // Inicializar en 0
    for (int i = 1; i <= N; i++) {
        vasos[i] = 0;
    }

    int x;

    // Leer canicas
    for (int i = 0; i < C; i++) {
        cin >> x;
        vasos[x]++;
    }

    // Mostrar resultado
    for (int i = 1; i <= N; i++) {
        cout << vasos[i] << endl;
    }

    return 0;
}