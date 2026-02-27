#include "Livro.h"

Livro::Livro() { // contrutor padrão dessa classe
    titulo = ""; 
    emprestado = false; // inicializo que nao esta emprestado pra todo livro add estar disponivel
}

void Livro::setTitulo(string nome) {
    titulo = nome;
}

string Livro::getTitulo() {
    return titulo;
}

void Livro::setEmprestado(bool status) {
    emprestado = status;
}

bool Livro::getEmprestado() {
    return emprestado;
}