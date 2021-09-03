#pragma once
#include<string>
#include "Cpf.hpp"
#include "Pessoa.hpp"
#include "DiaDaSemana.hpp"
class Funcionario : public Pessoa
{
private:
    // 0 = domingo, 1 = segunda,2=terça ,3=quarta,4=quinta,6=sexta , 7 = sábado
    DiaDaSemana diaDoPagamento;
protected:
    float salario;

public:
    Funcionario(Cpf cpf, std::string nome,float salario,DiaDaSemana diaDoPagamento);
    std::string getNome() const;
    virtual float bonificacao() const = 0;

};

