#include "Titular.hpp"
#include <iostream>

// construtor com herança
Titular::Titular(Cpf cpf, std::string nome,std::string senha):Pessoa(cpf,nome), Autenticavel(senha){

}
