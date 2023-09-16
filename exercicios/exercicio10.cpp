#include <iostream>
#include <cmath>

using namespace std;

/*int contarDigitos(int numero) {
    int contador = 0;
    while (numero != 0) {
        numero /= 10;
        contador++;
    }
    return contador;
}*/

int main() {
    int numero, numeroOriginal, resto, soma = 0, n = 0;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    numeroOriginal = numero;
    
    while (numero !=0){
        numero /=10;
        n++;
    }
    
    /*int numDigitos = contarDigitos(numero);*/

    while (numero != 0) {
        resto = numero % 10;
        soma += pow(resto, n);
        numero /= 10;
    }

    if (soma == numeroOriginal) {
        cout << numeroOriginal << " eh um numero de Armstrong." << endl;
    } else {
        cout << numeroOriginal << " nao eh um numero de Armstrong." << endl;
    }

    return 0;
}
