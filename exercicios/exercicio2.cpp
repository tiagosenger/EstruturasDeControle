#include <iostream>

using namespace std;

int main() {
    int numero, original, inverso = 0, resto;

    cout << "Digite um numero inteiro: ";
    cin >> numero;
    
    original = numero;

    while (numero > 0) {
        resto = numero % 10;
        inverso = inverso * 10 + resto;
        numero /= 10;
    }

    if (original == inverso) {
        cout << "Eh palindrono" << endl;
    } else {
        cout << "Nao eh palindrono" << endl;
    }

    return 0;
}