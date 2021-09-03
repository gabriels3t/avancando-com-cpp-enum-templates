#include <iostream>
#include <string>
#include "Conta.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"
#include "Gerente.hpp"
#include "DiaDaSemana.hpp"
using namespace std;

void ExibirSaldo(const Conta& conta) {
    cout.precision(2);
    cout << fixed;
    cout << "Seu saldo e de R$:" << conta.getSaldo() << endl;

}
/*void RealizarSaque(Conta& conta) {
    conta.sacar(200);
}*/

/*void fazLogin(Autenticavel& alguem,string senha){
    if(alguem.autentica(senha)){
        cout <<"Login realizado com sucesso"<< endl;
    }else{
        cout << "senha invalida" << endl;
    }
}
*/

ostream& operator<<(ostream& cout, const Conta& conta){
    Pessoa titular = conta.titular;
    cout << "(operador )Seu saldo e de R$:" << conta.getSaldo() << endl;
    cout<<"o titular da conta é : "<<titular.getNome() <<endl;
    return cout;
}

int main()
{
    //ContaPoupanca* umaconta = new ContaPoupanca("48931-5", Titular(Cpf("163.897.000-91"), "jorge"));
    ContaPoupanca outraConta("48931-5", Titular(Cpf("169.740.548-84"), "jorge","senha"));
    outraConta.depositar(600);
    //outraConta.sacar(200);

    ContaCorrente umaConta("4931-5", Titular(Cpf("163.897.000-91"), "gabriel","senha"));
    ContaCorrente outraContaCorrente("4491-5", Titular(Cpf("163.897.860-91"), "Thiago","1234"));
    umaConta.depositar(500);
    (Conta&) umaConta+=300; // assim passando como referencia a conta e nao a conta corrente
    outraContaCorrente+= umaConta;
    //umaConta.tranferePara(outraConta,250);

    //umaConta.sacar(200);
    //umaConta.tranferePara(outraContaCorrente,200);
    //ExibirSaldo(umaConta);
    cout<<umaConta;
    ExibirSaldo(outraConta);
    ExibirSaldo(outraContaCorrente);
    // pode-se utilizar nomeDaClasse:: quando o metodo for estatico
    cout << "Numero de contas  : " << Conta::getNumeroDeContas() << endl;

    //Funcionario funcionario(Cpf("474.124.770-80"), "Jorge", 450.4);
    //cout << " Nome do funcionario " << funcionario.getNome() << endl;
    Gerente umGerente(Cpf("000.000.000-54"), "Paulo ",1500,DiaDaSemana::Terca,"123456");

}