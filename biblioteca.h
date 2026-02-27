#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "Livro.h" 

class Biblioteca {
private: // encapsulamento
    Livro* livros; //ponteiro pra criar um vetor dinamico de livros
    int capacidade;
    int quantidade;
    int topo; // controla a posição do último livro inserido, uso como se fosse uma pilha

public:
    Biblioteca(int cap); // construtor, aqui inicializo as variaveis
    ~Biblioteca(); // destrutor pra liberar a memoria

    void adicionar(string nome);
    void listar();
    void emprestar(string nome);
    void devolver();
};

#endif