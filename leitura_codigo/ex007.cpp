// Exemplo 6: Cálculo com Decisão (Sequencial e Condicional)

#include <iostream>
#include <string> // Adicionado para std::string, caso não esteja implícito com iostream em alguns compiladores mais antigos

int main() {
    double precoProduto, precoFinal;
    std::string categoria;

    std::cout << "Digite o preco do produto: R$ ";
    std::cin >> precoProduto;
    std::cout << "Digite a categoria (A, B ou C): ";
    std::cin >> categoria;

    if (categoria == "A" || categoria == "a") {
        precoFinal = precoProduto * 0.90; // Desconto de 10%
        std::cout << "Categoria A: Desconto de 10% aplicado." << std::endl;
    } else if (categoria == "B" || categoria == "b") {
        precoFinal = precoProduto * 0.95; // Desconto de 5%
        std::cout << "Categoria B: Desconto de 5% aplicado." << std::endl;
    } else if (categoria == "C" || categoria == "c") {
        precoFinal = precoProduto; // Sem desconto
        std::cout << "Categoria C: Sem desconto." << std::endl;
    } else {
        precoFinal = precoProduto;
        std::cout << "Categoria invalida. Nenhum desconto aplicado." << std::endl;
    }

    std::cout << "Preco final: R$ " << precoFinal << std::endl;

    return 0;
}
