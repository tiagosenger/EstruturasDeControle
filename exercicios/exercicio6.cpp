#include <iostream>

using namespace std;

int main() {
    int matricula;
    double nota1, nota2, nota3;
    char continuar, iniciar;

    cout << "Deseja cadastrar as notas de um aluno? (S/N) " << endl;
    cin >> iniciar;

    while (iniciar == 'S' || iniciar == 's') {
    
        cout << "Digite a matricula do aluno: " << endl;
        cin >> matricula;

        cout << "Digite a nota 1 do aluno: "<< endl;
        cin >> nota1;

        cout << "Digite a nota 2 do aluno: "<< endl;
        cin >> nota2;

        cout << "Digite a nota 3 do aluno: "<< endl;
        cin >> nota3;

        double media = (nota1 + nota2 + nota3) / 3.0;

        cout << "MATRICULA NOTA1 NOTA2 NOTA3 MEDIA" << endl;
        cout << "===========================================" << endl;
        cout << matricula << " " << nota1 << " " << nota2 << " " << nota3 << " " << media << endl;

        cout << "Deseja cadastrar outro aluno (S/N)? ";
        cin >> continuar;

        if (continuar != 'S' && continuar != 's') {
            break;
        }

        cout << "Deseja cadastrar notas de outro aluno? (S/N) ";
        cin >> iniciar;
    }

    if (iniciar != 'S' && iniciar != 's') {
        cout << "Operacao Encerrada" << endl;
    }
    
    return 0;
}
