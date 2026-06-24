#include <iostream>
using namespace std;

int main() {
    int P, n;
    cin >> P >> n;

    int freq[101]; // máximo 100 profesores

    // Inicializar en 0
    for (int i = 1; i <= P; i++) {
        freq[i] = 0;
    }

    int F;

    // Leer los alumnos y contar
    for (int i = 0; i < n; i++) {
        cin >> F;
        freq[F]++;
    }

    // Mostrar resultados
    for (int i = 1; i <= P; i++) {
        cout << i << " " << freq[i] << endl;
    }

    return 0;
}