#include <iostream> // Inclui a biblioteca para podermos imprimir no console (usar std::cout)

int main() {
    // A estrutura do laço 'for' tem 3 partes dentro dos parênteses, separadas por ponto e vírgula ';'.
    //
    // 1ª parte: int i = 1;
    //   -> INICIALIZAÇÃO: Cria uma variável 'i' (de 'iterador' ou 'índice') e a define com o valor inicial 1.
    //      Isso acontece apenas UMA VEZ, no início do laço.
    //
    // 2ª parte: i <= 5;
    //   -> CONDIÇÃO: Antes de cada repetição, o programa verifica se esta condição é verdadeira.
    //      Enquanto 'i' for menor ou igual a 5, o código dentro do laço continuará a ser executado.
    //
    // 3ª parte: i++
    //   -> INCREMENTO: Ao FINAL de cada repetição, esta parte é executada.
    //      'i++' é uma forma curta de escrever 'i = i + 1'. Ele soma 1 ao valor de 'i'.
    //
    for (int i = 1; i <= 5; i++) {
        // Este é o bloco de código que será repetido.
        // Ele vai imprimir o valor atual da variável 'i' em cada volta do laço.
        std::cout << "O numero eh: " << i << std::endl;
    }

    // Esta linha só será executada quando o laço 'for' terminar.
    // Isso acontece quando a condição (i <= 5) se torna falsa (ou seja, quando 'i' chega a 6).
    std::cout << "Contagem terminada!" << std::endl;

    return 0; // Indica que o programa terminou com sucesso.
}