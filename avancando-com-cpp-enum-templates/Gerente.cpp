#include "Gerente.hpp"
Gerente::Gerente(Cpf cpf, std::string nome, float salario,DiaDaSemana diaDoPagamento,std::string senha): Funcionario(cpf,nome,salario,diaDoPagamento),
                                                                              Autenticavel(senha) {

}

float Gerente::bonificacao() const {
    return  salario*0.5;
}
