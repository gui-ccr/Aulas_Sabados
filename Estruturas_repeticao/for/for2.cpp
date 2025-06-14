#include <iostream> // Para entrada e saída (cout).
#include <vector>   // Para usar o std::vector, uma estrutura de dados dinâmica e moderna.
#include <iomanip>  // Para usar std::setw, que ajuda a formatar a saída.

int main() {
    // Cria um vetor (array dinâmico) de inteiros com algumas notas de alunos.
    std::vector<int> notas = {85, 92, 78, 65, 95, 88};
    
    // Variável para calcular a soma de todas as notas.
    // É importante inicializá-la com 0.
    double soma = 0.0;

    std::cout << "--- Relatorio de Notas dos Alunos ---" << std::endl;

    // 1. Laço 'for' principal para percorrer o vetor 'notas'.
    //
    // - Inicialização: 'size_t i = 0;' -> Começamos no índice 0 (o primeiro elemento de um vetor).
    //   'size_t' é um tipo de inteiro apropriado para representar tamanhos e índices.
    //
    // - Condição: 'i < notas.size();' -> O laço continua enquanto 'i' for menor que o tamanho total do vetor.
    //   'notas.size()' retorna o número de elementos no vetor.
    //
    // - Incremento: 'i++' -> A cada volta, passamos para o próximo índice.
    //
    for (size_t i = 0; i < notas.size(); ++i) {
        
        // Acessa o elemento atual do vetor usando o índice 'i' e o adiciona à soma.
        soma += notas[i]; 

        // Imprime o número do aluno e sua nota. std::setw(2) formata o número para ter 2 espaços.
        std::cout << "Aluno " << std::setw(2) << i + 1 << " | Nota: " << notas[i] << " | Grafico: ";

        // 2. Laço 'for' ANINHADO para criar o gráfico.
        // Este laço depende da nota do aluno atual.
        // A nota é dividida por 5 para o gráfico não ficar gigante.
        int tamanho_barra = notas[i] / 5;
        
        // - j < tamanho_barra -> Este laço interno vai rodar um número de vezes
        //   proporcional à nota do aluno.
        for (int j = 0; j < tamanho_barra; ++j) {
            std::cout << "#"; // Imprime um '#' para cada "ponto" da barra.
        }

        // Após o laço interno terminar, pulamos uma linha para o próximo aluno.
        std::cout << std::endl;
    }

    // Após o laço principal terminar, calculamos a média.
    // 'static_cast<double>' garante que a divisão seja feita com números de ponto flutuante.
    double media = soma / static_cast<double>(notas.size());

    std::cout << "---------------------------------------" << std::endl;
    std::cout << "Relatorio Final:" << std::endl;
    std::cout << "Numero de alunos: " << notas.size() << std::endl;
    std::cout << "Media geral da turma: " << media << std::endl;

    return 0;
}