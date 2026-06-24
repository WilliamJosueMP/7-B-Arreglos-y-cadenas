#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    char letras[200];
    int k = 0;

    // Guardar solo letras
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            letras[k] = s[i];
            k++;
        }
    }

    // Ordenar letras (burbuja simple)
    for (int i = 0; i < k - 1; i++) {
        for (int j = 0; j < k - 1; j++) {
            if (letras[j] > letras[j + 1]) {
                char temp = letras[j];
                letras[j] = letras[j + 1];
                letras[j + 1] = temp;
            }
        }
    }

    // Reemplazar en el string
    int pos = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = letras[pos];
            pos++;
        }
    }

    // Mostrar resultado
    cout << s << endl;

    return 0;
}