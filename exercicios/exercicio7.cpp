#include <iostream>

using namespace std;

int main() {
    int altura;

    cout << "Digite a altura do padrao (ate 7): ";
    cin >> altura;

    if (altura > 7) {
        cout << "A altura maxima eh 7. Usando altura 7." << endl;
        altura = 7;
    }

    char caractere = 'A';

    for (int linha = 1; linha <= altura; linha++) {
        for (int coluna = 1; coluna <= linha; coluna++) {
            cout << caractere;
            caractere++;
        }
        cout << endl;
    }

    return 0;
}
