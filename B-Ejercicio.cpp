
#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    string palabra;

    for(int i = 0; i < N; i++) {
        cin >> palabra;

        bool esPalindromo = true;
        int n = palabra.length();

        for(int j = 0; j < n / 2; j++) {
            if(palabra[j] != palabra[n - 1 - j]) {
                esPalindromo = false;
                break;
            }
        }

        if(esPalindromo) {
            cout << "P" << endl;
        } else {
            cout << "NP" << endl;
        }
    }

    return 0;
}