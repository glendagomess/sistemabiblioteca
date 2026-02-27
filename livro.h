#ifndef LIVRO_H
#define LIVRO_H

#include <string>
using namespace std;

class Livro {  // encapsulamento
private:
    string titulo;
    bool emprestado;

public:
    Livro();

    void setTitulo(string nome);
    string getTitulo();

    void setEmprestado(bool status);
    bool getEmprestado();
};

#endif