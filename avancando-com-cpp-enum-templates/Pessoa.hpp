#pragma once
#include "Cpf.hpp"
#include <string>

class Pessoa
{
protected: // apenas a classe e as herderias dela poderam utilizar os parametros
    std::string nome;
    Cpf cpf;
public:
    Pessoa(Cpf cpf, std::string nome);
    std::string getNome()const;

private:
    void verificaTamanhoDoNome();
};
