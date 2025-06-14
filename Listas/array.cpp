#include <iostream>

int main() {
    // DECLARAÇÃO: Um array de 5 números inteiros.
    // O tamanho [5] é FIXO e não pode ser mudado durante a execução.
    int notas[5] = {10, 8, 9, 7, 5};

    std::cout << "O primeiro aluno tirou nota: " << notas[0] << std::endl; // Acesso por índice

    // PERCORRENDO com um for tradicional
    std::cout << "\nTodas as notas:" << std::endl;
    for (int i = 0; i < 5; ++i) { // Note que precisamos saber o tamanho (5).
        std::cout << "Nota " << i + 1 << ": " << notas[i] << std::endl;
    }
}