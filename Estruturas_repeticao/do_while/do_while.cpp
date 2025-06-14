#include <iostream> // Para usar std::cout e std::cin

int main() {
    // Variável para armazenar a resposta do usuário.
    // Pode ser qualquer tipo, mas 'char' é comum para respostas de um único caractere.
    char resposta; 

    // O laço 'do-while' começa aqui, com a palavra-chave 'do'.
    do {
        // --- ESTE BLOCO DE CÓDIGO SEMPRE EXECUTA PELO MENOS UMA VEZ ---

        // Simula a execução de uma tarefa importante do programa.
        std::cout << "Executando uma tarefa importante..." << std::endl;
        std::cout << "Tarefa concluida com sucesso!" << std::endl;
        
        // Pergunta ao usuário se ele deseja repetir o processo.
        std::cout << "\nDeseja executar novamente? (s/n): ";
        std::cin >> resposta; // Lê a resposta do usuário.

    // A condição só é verificada AQUI, no final do bloco.
    // O laço continuará a ser executado ENQUANTO a 'resposta' for 's' (de "sim").
    } while (resposta == 's' || resposta == 'S'); 
    // Usamos '||' (OU) para aceitar tanto 's' minúsculo quanto 'S' maiúsculo.

    // Esta linha só será executada quando o laço terminar.
    // Ou seja, quando o usuário digitar qualquer coisa diferente de 's' ou 'S'.
    std::cout << "\nEntendido. Encerrando o programa." << std::endl;

    return 0; // Fim do programa.
}