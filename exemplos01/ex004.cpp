#include <iostream> 

int main() {
    int num1 = 10;
    int num2 = 3;
    int resultado;
    double resultado_divisao; // Para a divisão, que pode ter casas decimais

    // --- SOMA (+) ---
    resultado = num1 + num2;
    std::cout << "SOMA (+): " << num1 << " + " << num2 << " = " << resultado;
    std::cout << " // O operador + soma os dois numeros." << std::endl;

    // --- SUBTRACAO (-) ---
    resultado = num1 - num2;
    std::cout << "SUBTRACAO (-): " << num1 << " - " << num2 << " = " << resultado;
    std::cout << " // O operador - subtrai o segundo numero do primeiro." << std::endl;

    // --- MULTIPLICACAO (*) ---
    resultado = num1 * num2;
    std::cout << "MULTIPLICACAO (*): " << num1 << " * " << num2 << " = " << resultado;
    std::cout << " // O operador * multiplica os dois numeros." << std::endl;

    // --- DIVISAO (/) ---
    // Se ambos forem inteiros, a divisão será inteira (sem casas decimais)
    // Para ter divisão com casas decimais, pelo menos um dos números precisa ser double/float,
    // ou fazemos um 'cast'.
    resultado_divisao = static_cast<double>(num1) / num2; // Convertendo num1 para double antes da divisão
    std::cout << "DIVISAO (/): " << num1 << " / " << num2 << " = " << resultado_divisao;
    std::cout << " // O operador / divide o primeiro numero pelo segundo." << std::endl;

    // Demonstração da divisão inteira
    int resultado_divisao_inteira = num1 / num2;
    std::cout << "DIVISAO INTEIRA (/): " << num1 << " / " << num2 << " = " << resultado_divisao_inteira;
    std::cout << " // (Resultado e " << resultado_divisao_inteira << " porque ambos sao inteiros, a parte decimal e descartada)" << std::endl;


    // --- MODULO (%) ou RESTO DA DIVISAO ---
    // Este operador só funciona com números inteiros.
    resultado = num1 % num2;
    std::cout << "MODULO (%): " << num1 << " % " << num2 << " = " << resultado;
    std::cout << " // O operador % da o RESTO da divisao inteira do primeiro numero pelo segundo." << std::endl;
    // Explicacao: 10 dividido por 3 é 3, com resto 1 (3*3 + 1 = 10).

    return 0;
}