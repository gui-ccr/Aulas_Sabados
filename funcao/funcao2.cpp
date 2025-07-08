#include <iostream>
#include <string> // Para usar std::string

// --- DEFINIÇÃO DA FUNÇÃO 1: calcularMedia ---
// Esta função é especialista em calcular a média de duas notas.
// - Recebe duas notas (que podem ter casas decimais, por isso 'float').
// - Retorna a média, que também é um 'float'.
float calcularMedia(float nota1, float nota2) {
    // A tarefa dela é simples: somar as duas notas e dividir por 2.
    float media = (nota1 + nota2) / 2.0f; // Usamos 2.0f para garantir a divisão de floats
    return media;
}

// --- DEFINIÇÃO DA FUNÇÃO 2: verificarSituacao ---
// Esta função é a "gerente". Ela usa outras funções para dar um veredito final.
// - Recebe a média final do aluno.
// - Retorna uma string: "Aprovado" ou "Reprovado".
std::string verificarSituacao(float mediaFinal) {
    // Ela toma uma decisão baseada na média recebida.
    if (mediaFinal >= 6.0) {
        return "Aprovado"; // Se a média for 6.0 ou maior, retorna "Aprovado".
    } else {
        return "Reprovado"; // Caso contrário, retorna "Reprovado".
    }
}

// --- FUNÇÃO PRINCIPAL ---
// O 'main' orquestra as chamadas para as outras funções.
int main() {
    // Definimos as notas de dois alunos para testar nosso sistema.
    float notas_aluno1_n1 = 7.5f;
    float notas_aluno1_n2 = 8.0f;
    
    float notas_aluno2_n1 = 4.0f;
    float notas_aluno2_n2 = 5.5f;

    std::cout << "--- Analisando situacao do Aluno 1 ---" << std::endl;

    // --- CHAMADA EM CADEIA ---
    // 1. Chamamos 'calcularMedia' para o Aluno 1 e guardamos o resultado.
    float media_aluno1 = calcularMedia(notas_aluno1_n1, notas_aluno1_n2);
    
    // 2. Usamos o resultado da primeira função como entrada para a segunda.
    //    Passamos a média calculada para a função 'verificarSituacao'.
    std::string situacao_aluno1 = verificarSituacao(media_aluno1);

    // 3. Exibimos os resultados obtidos.
    std::cout << "A media do Aluno 1 foi: " << media_aluno1 << std::endl;
    std::cout << "Situacao do Aluno 1: " << situacao_aluno1 << std::endl;

    std::cout << "\n--- Analisando situacao do Aluno 2 ---" << std::endl;

    // Podemos até mesmo chamar uma função dentro da outra para um código mais enxuto!
    // O resultado de 'calcularMedia' é passado DIRETAMENTE para 'verificarSituacao'.
    std::string situacao_aluno2 = verificarSituacao(calcularMedia(notas_aluno2_n1, notas_aluno2_n2));

    std::cout << "A media do Aluno 2 foi: " << calcularMedia(notas_aluno2_n1, notas_aluno2_n2) << std::endl;
    std::cout << "Situacao do Aluno 2: " << situacao_aluno2 << std::endl;

    return 0;
}