// Exemplo 3: Condicional Composta (if-else)

#include <iostream>

int main() {
    double nota;
    std::cout << "Digite a nota do aluno: ";
    std::cin >> nota;
    if (nota >= 7.0) {
        std::cout << "Aluno aprovado!" << std::endl;
    } else {
        std::cout << "Aluno reprovado." << std::endl;
    }
    return 0;
}