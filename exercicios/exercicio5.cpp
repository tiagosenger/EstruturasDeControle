#include <iostream>
#include <ctime>

using namespace std;

int main() {  
    srand(time(nullptr));

    int num_aleatorio = 1 + rand()%100 + 1; 
    int num_usuario;

    cout << "Bem vindo(a) ao jogo de adivinhacao!" << endl;

    while (true){
        cout << "Digite um numero entre 1 e 100: " << endl;
        cin >> num_usuario;

        if(num_aleatorio == num_usuario){
            cout << "Parabens! Voce acertou!" << endl;
            break;
        } else if (num_aleatorio < num_usuario) {
            cout << "O numero que voce digitou esta acima do que eu sorteei, tente de novo!" << endl;  
        } else {
            cout << "O numero que voce digitou esta abaixo do que eu sorteei, tente de novo!" << endl;
        }
    
    }
    return 0;
}