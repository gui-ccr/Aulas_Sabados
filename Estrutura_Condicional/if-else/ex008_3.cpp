#include <iostream>


// if - else if - else (Se - Senão se - Senão)

int main() {
    std::cout << "--- Exemplo 3: 'if - else if - else' ---" << std::endl;
    int hora = 0;
    
    std::cout << "informe que horas sao (0-23h)" ;
    std::cin >> hora;
    
    std::cout << "Hora atual informada: " << hora << "h." << std::endl;

    if (hora < 0 || hora > 23) { // || significa OU
        std::cout << "Hora invalida!" << std::endl;
    } else if (hora < 12) {
        std::cout << "Bom dia!" << std::endl;
    } else if (hora < 18) {
        std::cout << "Boa tarde!" << std::endl;
    } else { // Se nenhuma das anteriores for verdadeira (hora >= 18 e <=23)
        std::cout << "Boa noite!" << std::endl;
    }
    std::cout << "------------------------------------" << std::endl << std::endl;


    // Outro exemplo com notas
    double nota = 7.5; 
    std::cout << "Nota do aluno: " << nota << std::endl;

    if (nota >= 9.0) {
        std::cout << "Conceito: A (Excelente)" << std::endl;
    } else if (nota >= 7.0) {
        std::cout << "Conceito: B (Bom)" << std::endl;
    } else if (nota >= 5.0) {
        std::cout << "Conceito: C (Regular)" << std::endl;
    } else {
        std::cout << "Conceito: D (Precisa melhorar)" << std::endl;
    }
    std::cout << "------------------------------------" << std::endl << std::endl;
    return 0;
}