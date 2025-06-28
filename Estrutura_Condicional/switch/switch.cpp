#include <iostream> // Inclui a biblioteca para entrada (std::cin) e saída (std::cout)

int main() {
    int opcao; // Variável que guardará o número da opção escolhida pelo usuário.

    // Exibe o menu na tela para o usuário.
    std::cout << "--- MENU DE OPCOES ---" << std::endl;
    std::cout << "1: Salvar arquivo" << std::endl;
    std::cout << "2: Carregar arquivo" << std::endl;
    std::cout << "3: Sair" << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << "Digite o numero da sua opcao: ";

    std::cin >> opcao; // Lê o número que o usuário digitou e armazena na variável 'opcao'.

    // A estrutura switch começa aqui. Ela vai analisar o valor que está dentro da variável 'opcao'.
    switch (opcao) 
    {
        // 'case 1:' é como perguntar "A variável 'opcao' tem o valor 1?".
        case 1:
            // Se a resposta for sim, o código abaixo é executado.
            std::cout << "Voce escolheu: Salvar arquivo." << std::endl;
            // O 'break' é ESSENCIAL. Ele interrompe o switch e impede que o código
            // continue executando os casos abaixo (o chamado "fallthrough").
            break;

        // 'case 2:' verifica se 'opcao' tem o valor 2.
        case 2:
            // Se sim, executa esta linha.
            std::cout << "Voce escolheu: Carregar arquivo." << std::endl;
            // O 'break' novamente previne a execução do próximo caso.
            break;

        // 'case 3:' verifica se 'opcao' tem o valor 3.
        case 3:
            // Se sim, executa esta linha.
            std::cout << "Voce escolheu: Sair. Ate logo!" << std::endl;
            break;

        // O 'default:' é o bloco de código executado se o valor de 'opcao'
        // não corresponder a NENHUM dos 'case' acima (por exemplo, se o usuário digitar 5).
        default:
            std::cout << "Erro: Opcao invalida!" << std::endl;
            // O 'break' aqui é opcional, pois é o último item, mas é boa prática usá-lo.
            break;
    }

    // Esta linha será executada depois que o switch for concluído.
    std::cout << "Fim do programa." << std::endl;

    return 0; // Indica que o programa terminou com sucesso.
}