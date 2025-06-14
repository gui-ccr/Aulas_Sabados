#include <iostream> // Para usar std::cout

// --- DEFINIÇÃO DA FUNÇÃO ---
// Aqui nós criamos nosso "trabalhador especializado".
// Esta função se chama 'somar', precisa de dois números inteiros para trabalhar,
// e promete que vai devolver um número inteiro como resultado.
int somar(int a, int b) {
    // 1. A função recebe os números nos "parâmetros" 'a' and 'b'.
    
    // 2. Ela realiza sua tarefa: somar os dois números.
    int resultado = a + b;
    
    // 3. A palavra-chave 'return' envia o resultado de volta para quem chamou a função.
    return resultado;
}


// --- FUNÇÃO PRINCIPAL ---
// O 'main' é a função principal, o ponto de partida de todo programa C++.
int main() {
    
    std::cout << "Vamos usar nossa funcao para somar numeros!" << std::endl;

    // --- CHAMADA DA FUNÇÃO ---
    // Aqui, estamos "chamando" ou "invocando" nossa função 'somar'.
    // - Passamos os valores 5 e 3 para ela.
    // - A função 'somar' vai executar, calcular 5 + 3 = 8.
    // - Ela vai retornar o valor 8.
    // - Esse valor 8 será armazenado na nossa variável 'resultado_da_soma'.
    int resultado_da_soma = somar(5, 3);
    
    // Agora podemos usar o resultado que a função nos deu.
    std::cout << "O resultado da soma de 5 e 3 eh: " << resultado_da_soma << std::endl;

    // Podemos reutilizar a função quantas vezes quisermos!
    int outro_resultado = somar(100, 50);
    std::cout << "O resultado da soma de 100 e 50 eh: " << outro_resultado << std::endl;

    return 0; 
}