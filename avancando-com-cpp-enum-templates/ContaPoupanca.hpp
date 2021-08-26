#pragma once
#include "Conta.hpp"

// Final nao pode ser herdada
class ContaPoupanca final : public Conta
{
public:
    ContaPoupanca(std::string numero, Titular titular);
    float taxaSaque() const override;

};

