#include <iostream> // Biblioteca para entrada (std::cin) e saída (std::cout)
#include <cstdlib>  // Biblioteca para gerar números aleatórios (rand, srand)
#include <ctime>    // Biblioteca para acessar o tempo do sistema (time)

int main() {
    // Inicializa o gerador de números aleatórios com um valor "semente" baseado no tempo atual.
    // Isso garante que o número secreto seja diferente a cada vez que o jogo começa.
    srand(time(0)); 
    
    // Gera um número aleatório entre 1 e 100 e o armazena como o número secreto.
    // O operador '%' (módulo) retorna o resto da divisão. rand() % 100 nos dá um número de 0 a 99. Somamos 1.
    int numero_secreto = (rand() % 100) + 1; 

    int palpite = 0; // Variável para armazenar o palpite do usuário. Iniciamos com 0.
    int tentativas = 0; // Variável para contar quantas tentativas o usuário fez.

    std::cout << "--- Jogo de Adivinhar o Numero ---" << std::endl;
    std::cout << "Eu pensei em um numero entre 1 e 100. Tente adivinhar!" << std::endl;

    // O laço 'while' continuará executando enquanto o 'palpite' do usuário for diferente do 'numero_secreto'.
    while (palpite != numero_secreto) {
        std::cout << "\nQual eh o seu palpite? "; // Pede um palpite ao usuário.
        std::cin >> palpite; // Armazena o número digitado pelo usuário na variável 'palpite'.

        // Incrementa o contador de tentativas a cada palpite.
        tentativas++; 

        // Agora, usamos 'if/else' para dar dicas ao usuário dentro do loop.
        if (palpite < numero_secreto) {
            // Se o palpite for menor, avisa o usuário.
            std::cout << "Muito baixo! Tente um numero maior." << std::endl;
        } else if (palpite > numero_secreto) {
            // Se o palpite for maior, avisa o usuário.
            std::cout << "Muito alto! Tente um numero menor." << std::endl;
        }
        // Nota: se o palpite for igual, nenhuma dessas condições será atendida,
        // e o loop 'while' vai parar naturalmente na próxima verificação.
    }

    // Esta parte do código só é executada quando o loop termina, ou seja, quando o usuário acerta.
    std::cout << "\nParabens! Voce acertou o numero!" << std::endl;
    std::cout << "O numero secreto era: " << numero_secreto << std::endl;
    std::cout << "Voce precisou de " << tentativas << " tentativas." << std::endl;

    return 0; // Fim do programa.
}