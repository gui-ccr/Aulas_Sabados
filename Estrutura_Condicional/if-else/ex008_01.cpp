#include <iostream>
// if simples (Se)
int main() {
    std::cout << "--- Exemplo 1: 'if' simples ---" << std::endl;
    int idade = 20;

    std::cout << "Idade informada: " << idade << " anos." << std::endl;

    // Condição: a idade é maior ou igual a 18?
    if (idade >= 18) {
        std::cout << "Voce e maior de idade!" << std::endl;
        std::cout << "Pode entrar na festa." << std::endl;
    }

    // Este comando será executado independentemente do 'if' anterior
    std::cout << "Fim da verificacao de maioridade." << std::endl << std::endl;
    std::cout << "------------------------------------" << std::endl << std::endl;
    return 0;

    
}