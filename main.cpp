#include <iostream>
#include "Biblioteca.h"

using namespace std;

int main() {
    Biblioteca bib(5);

    int opcao;
    string nome;

    do {
        cout << "\n1 - Adicionar\n";
        cout << "2 - Listar\n";
        cout << "3 - Emprestar\n";
        cout << "4 - Devolver ultimo\n";
        cout << "0 - Sair\n";
        cout << "Opcao: ";
        cin >> opcao;
        cin.ignore();

        switch(opcao) {
            case 1:
                cout << "Nome do livro: ";
                getline(cin, nome);
                bib.adicionar(nome);
                break;

            case 2:
                bib.listar();
                break; 

            case 3:
                cout << "Nome do livro: ";
                getline(cin, nome);
                bib.emprestar(nome);
                break;

            case 4:
                bib.devolver();
                break;
        }

    } while(opcao != 0);

    return 0;
} 