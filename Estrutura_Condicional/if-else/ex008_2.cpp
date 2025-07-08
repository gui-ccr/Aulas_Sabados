#include <iostream>
#include <locale>


// if-else (Se - Senão)



int main() {
    std::setlocale(LC_ALL, "Portuguese_Brazil");

    std::cout << "--- Exemplo 2: 'if-else' ---" << std::endl;
    double saldoEmConta = 50.00;
    double precoProduto = 75.00;

    std::cout << "Saldo em conta: R$" << saldoEmConta << std::endl;
    std::cout << "Preço do produto: R$" << precoProduto << std::endl;

    // Condição: o saldo é suficiente para comprar o produto?
    if (saldoEmConta >= precoProduto) {
        std::cout << "Saldo suficiente! Compra aprovada." << std::endl;
    } else {
        std::cout << "Saldo insuficiente! Compra negada." << std::endl;
    }
    std::cout << "------------------------------------" << std::endl << std::endl;
    return 0;
}