#include <iostream>
//#include <string>
#include "Conta.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
//#include "Funcionario.hpp"
using namespace std;

void ExibirSaldo(const Conta& conta) {
    cout.precision(2);
    cout << fixed;
    cout << "Seu saldo e de R$:" << conta.getSaldo() << endl;

}
/*void RealizarSaque(Conta& conta) {
    conta.sacar(200);
}*/
//teste
/*void fazLogin(Autenticavel& alguem,string senha){
    if(alguem.autentica(senha)){
        cout <<"Login realizado com sucesso"<< endl;
    }else{
        cout << "senha invalida" << endl;
    }
}
*/
int main()
{
    //ContaPoupanca* umaconta = new ContaPoupanca("48931-5", Titular(Cpf("163.897.000-91"), "jorge"));
    ContaPoupanca outraConta("48931-5", Titular(Cpf("169.740.548-84"), "jorge","senha"));
    outraConta.depositar(600);
    //outraConta.sacar(200);

    ContaCorrente umaConta("4931-5", Titular(Cpf("163.897.000-91"), "gabriel","senha"));
    umaConta.depositar(500);
    //umaConta.tranferePara(outraConta,250);
    ContaCorrente outraContaCorrente("4491-5", Titular(Cpf("163.897.860-91"), "Thiago","1234"));
    //umaConta.sacar(200);
    umaConta.tranferePara(outraContaCorrente,200);
    ExibirSaldo(umaConta);
    ExibirSaldo(outraConta);
    ExibirSaldo(outraContaCorrente);
    // pode-se utilizar nomeDaClasse:: quando o metodo for estatico
    cout << "Numero de contas  : " << Conta::getNumeroDeContas() << endl;

    //Funcionario funcionario(Cpf("474.124.770-80"), "Jorge", 450.4);
    //cout << " Nome do funcionario " << funcionario.getNome() << endl;
}