#include <iostream>
#include "Biblioteca.h"

using namespace std;

Biblioteca::Biblioteca(int cap) {
    capacidade = cap;
    quantidade = 0; //sem nenhhum livro
    topo = -1; // pilha vazia
    livros = new Livro[capacidade]; // cria vetor dinamico 
}

Biblioteca::~Biblioteca() { // destrutor 
    delete[] livros;
}

void Biblioteca::adicionar(string nome) { 
    if (quantidade >= capacidade) { // verifica se ta cheia
        cout << "Biblioteca cheia.\n";
        return;
    }

    livros[quantidade].setTitulo(nome);
    livros[quantidade].setEmprestado(false);
    quantidade++; 
}

void Biblioteca::listar() {
    if (quantidade == 0) { // se nao tiver livro
        cout << "Nenhum livro cadastrado.\n";
        return;
    }

    for (int i = 0; i < quantidade; i++) { // percorre o vetor
        cout << i << " - " << livros[i].getTitulo();

        if (livros[i].getEmprestado()) // verifica se ta emprestado
            cout << " (Emprestado)\n";
        else
            cout << " (Disponivel)\n";
    }
}

void Biblioteca::emprestar(string nome) {
    for (int i = 0; i < quantidade; i++) { 

        if (livros[i].getTitulo() == nome) {

            if (livros[i].getEmprestado()) { // verifica se ja ta emprestado
                cout << "Livro ja emprestado.\n";
                return;
            }

            livros[i].setEmprestado(true);
            topo = i;  // posição do último livro emprestado, controle de pilha
            cout << "Emprestado com sucesso.\n";
            return;
        }
    }

    cout << "Livro nao encontrado.\n";
}

void Biblioteca::devolver() {
    if (topo == -1) { //se nao tiver livro emprestado
        cout << "Nenhum livro para devolver.\n";
        return;
    }

    livros[topo].setEmprestado(false); // coloca como disponivel
    topo = -1; // pilha fica vazia
    cout << "Livro devolvido.\n";
}