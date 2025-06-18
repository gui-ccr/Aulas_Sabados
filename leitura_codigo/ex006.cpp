// Exemplo 5: Operadores Lógicos (&&, ||)

#include <iostream>

int main() {
    int valor;
    std::cout << "Digite um valor entre 1 e 100: ";
    std::cin >> valor;
    if (valor >= 1 && valor <= 100) {
        std::cout << "Valor valido." << std::endl;
        if (valor < 10 || valor > 90) {
            std::cout << "O valor esta nos extremos do intervalo." << std::endl;
        }
    } else {
        std::cout << "Valor invalido." << std::endl;
    }
    return 0;
}