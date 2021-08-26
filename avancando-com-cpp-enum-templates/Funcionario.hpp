#pragma once
#include<string>
#include "Cpf.hpp"
#include "Pessoa.hpp"
class Funcionario : public Pessoa
{
protected:
    float salario;
public:
    Funcionario(Cpf cpf, std::string nome,float salario);
    std::string getNome() const;
    virtual float bonificacao() const = 0;

};

