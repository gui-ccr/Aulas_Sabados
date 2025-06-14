#include <iostream> // Para usar std::cout
#include <vector>   // Para usar std::vector, nossa lista moderna

int main() {
    // Criamos um vetor (lista) de inteiros com algumas notas.
    std::vector<int> notas = {8, 10, 7, 9, 5, 6};

    std::cout << "Exibindo todas as notas do aluno:" << std::endl;

    // Este é o laço for "range-based".
    // Leia-se como: "Para cada 'nota' do tipo 'int' DENTRO da lista 'notas'..."
    for (int nota : notas) {
        // Dentro do laço, a variável 'nota' recebe uma CÓPIA de um elemento da lista a cada iteração.
        // Na primeira volta, 'nota' será 8.
        // Na segunda volta, 'nota' será 10.
        // E assim por diante, até o final da lista.
        
        std::cout << "- A nota eh: " << nota << std::endl;
    }

    std::cout << "\nFim da lista de notas." << std::endl;

    return 0;
}