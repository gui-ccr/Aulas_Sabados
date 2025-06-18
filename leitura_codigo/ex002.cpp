// Exemplo 2: Condicional Simples (if)

#include <iostream>

int main() {
    int idade;
    std::cout << "Digite sua idade: ";
    std::cin >> idade;
    if (idade >= 18) {
        std::cout << "Voce e maior de idade." << std::endl;
    }
    if (idade < 18 && idade > 0) {
        std::cout << "Voce e menor de idade." << std::endl;
    }
    if (idade <= 0) {
        std::cout << "Idade invalida." << std::endl;
    }
    return 0;
}