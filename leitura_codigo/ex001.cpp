#include <iostream>

//Exemplo 1: Operações Básicas (Sequencial)



int main() {
    double num1, num2, soma, produto;
    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;
    soma = num1 + num2;
    produto = num1 * num2;
    std::cout << "A soma e: " << soma << std::endl;
    std::cout << "O produto e: " << produto << std::endl;
    return 0;
}