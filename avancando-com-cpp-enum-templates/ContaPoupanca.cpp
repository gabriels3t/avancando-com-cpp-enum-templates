#include "ContaPoupanca.hpp"
#include <iostream>
ContaPoupanca::ContaPoupanca(std::string numero, Titular titular) :Conta(numero, titular) {

}


float ContaPoupanca::taxaSaque() const{
    return 0.03;
}