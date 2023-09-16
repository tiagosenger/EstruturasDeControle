#include <iostream>

using namespace std;

int main() {
    int numero;
    int primeiro = 0, segundo = 1, proximo;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    cout << "Sequencia de Fibonacci ate " << numero << ":" << endl;

    while (primeiro <= numero) {
        cout << primeiro << " ";

        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }

    cout << endl;

    return 0;
}