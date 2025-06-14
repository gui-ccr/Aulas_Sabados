#include <iostream> // Biblioteca para entrada e saída de dados.
#include <cctype>   // Biblioteca que contém funções para manipulação de caracteres, como o tolower().

int main() {
    char letra; // Variável para armazenar a letra digitada pelo usuário.

    std::cout << "Digite uma letra do alfabeto: ";
    std::cin >> letra; // Armazena a letra digitada.

    // A função tolower() converte a letra para minúscula.
    // Isso simplifica nosso switch, pois não precisamos testar 'a' e 'A', 'e' e 'E', etc.
    // Estamos passando o resultado da função diretamente para o switch avaliar.
    switch (tolower(letra)) {
        // Início do agrupamento de casos (Fallthrough).
        // Como não há 'break' após o 'case 'a'', a execução "cai" para o próximo caso.
        case 'a':
        // O mesmo acontece aqui, caindo para o próximo...
        case 'e':
        // ...e aqui...
        case 'i':
        // ...e aqui...
        case 'o':
        // ...até encontrar um bloco de código com um 'break'.
        case 'u':
            // Todos os casos acima (a, e, i, o, u) executarão este mesmo bloco de código.
            std::cout << "'" << letra << "' eh uma vogal." << std::endl;
            // O break aqui é fundamental para separar o bloco das vogais do bloco default.
            break;

        // O default será acionado para qualquer outra letra que não seja uma vogal.
        default:
            // Antes de afirmar que é uma consoante, vamos verificar se é realmente uma letra.
            // A função isalpha() retorna true (verdadeiro) se o caractere for uma letra do alfabeto.
            if (isalpha(letra)) {
                std::cout << "'" << letra << "' eh uma consoante." << std::endl;
            } else {
                std::cout << "'" << letra << "' nao eh uma letra valida." << std::endl;
            }
            break;
    }

    return 0; // Fim do programa.
}