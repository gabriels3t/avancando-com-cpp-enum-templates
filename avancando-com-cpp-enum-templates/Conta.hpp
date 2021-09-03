#pragma once
#include <string>
#include "Titular.hpp"


//struct tudo é publico e uuma class tudo é privado
class Conta
{
protected:
    float saldo;
private:
    static int numeroDeContas;
    std::string numeroConta;
    Titular titular;

public:
    Conta() = delete; //deletando o construtor padrão
    Conta(std::string numero, Titular titular); //construtor
    virtual ~Conta();//destrutor (virtual para saber q a classe filho pode usar um destrutor)
    void sacar(float valorSaque);
    void depositar(float valordeposito);
    float getSaldo() const; // deixando a função constante
    std::string getNumeroConta() const;
    static int getNumeroDeContas();
    virtual float taxaSaque() const =0;  // pode-se ser definito na classe pai quanto filha
    // quando recebe o = 0 quer dizer que nessa classe nao foi implementado. mas sim nas herdeiras
    void operator+=(float valorADepositar);  // para sobreescever um operador
    friend std::ostream& operator<<(std::ostream& cout, const Conta& conta); // Função externa que tem acesso a todos os metodos
};
