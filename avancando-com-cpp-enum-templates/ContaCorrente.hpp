#pragma once
#include "Conta.hpp"

class ContaCorrente final: public Conta
{
public:
    ContaCorrente(std::string numero, Titular titular);
    void tranferePara(Conta& conta,float valor);
private:
    float taxaSaque() const override;

};