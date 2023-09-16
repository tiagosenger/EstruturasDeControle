#include <iostream>

using namespace std;

int main() {
    int numero;
    int somaDivisores = 0;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    for (int divisor = 1; divisor < numero; divisor++) {
        if (numero % divisor == 0) {
            somaDivisores += divisor;
        }
    }

    if (somaDivisores == numero) {
        cout << numero << " eh um numero perfeito." << endl;
    } else {
        cout << numero << " nao eh um numero perfeito." << endl;
    }

    return 0;
}