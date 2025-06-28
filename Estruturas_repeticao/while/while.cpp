#include <iostream> // Inclui a biblioteca para podermos usar o std::cout (para imprimir no console)

int main() {
    int contador = 1; 
    // Declara e inicia uma variável inteira chamada 'contador' com o valor 1.

    // Início do laço while
    // A condição é: "enquanto a variável 'contador' for menor ou igual a 5"
    while (contador <= 5) {
        // O código dentro destas chaves {} será executado repetidamente

        // Imprime o valor atual do contador na tela
        std::cout << "O valor do contador e: "  << contador << std::endl;

        // INCREMENTA o contador. Isso é MUITO importante!
        // Somamos 1 ao valor do contador a cada repetição.
        // Sem isso, o loop seria infinito, pois 'contador' seria sempre 1.
         contador = contador + 1; // ou de forma mais curta: contador++;
    }

    // Esta linha só será executada quando o laço while terminar
    std::cout << "Fim do programa!" << std::endl;

    return 0; // Indica que o programa terminou com sucesso
}