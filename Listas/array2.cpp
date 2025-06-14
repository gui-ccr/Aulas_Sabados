#include <iostream>
#include <array> // Precisa incluir a biblioteca <array>

int main() {
    // DECLARAÇÃO: Um array de 5 inteiros.
    // O tipo e o tamanho são passados como "template parameters" <int, 5>.
    std::array<double, 5> notas = {9.25, 8.12, 9.9, 7.2, 5.1};

    std::cout << "O primeiro aluno tirou nota: " << notas[0] << std::endl;

    // A grande vantagem: ele "sabe" o seu próprio tamanho!
    std::cout << "O numero de notas eh: " << notas.size() << std::endl;
}