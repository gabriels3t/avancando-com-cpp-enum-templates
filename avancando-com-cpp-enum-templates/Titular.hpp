#pragma once
#include <string>
#include "Pessoa.hpp"
#include "Cpf.hpp"
#include "Autenticavel.hpp"

// Criando uma herança entre  as classes Titular e pessoa
class Titular:public Pessoa, public Autenticavel
{
public:
    Titular(Cpf cpf, std::string nome,std::string senha);
};

