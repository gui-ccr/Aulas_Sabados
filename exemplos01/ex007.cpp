#include <iostream> 
#include <cmath>    // Para usar as funções matemáticas como std::sqrt, std::pow, etc.
#include <iomanip>  // Para std::fixed e std::setprecision (para formatar a saída)

int main() {
    // Configurar a saída para mostrar casas decimais de forma consistente
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "--- Exemplos de Funcoes Matematicas Importantes ---" << std::endl << std::endl;

    // 1. Raiz Quadrada: std::sqrt()
    // Calcula a raiz quadrada de um número. O número não deve ser negativo.
    double numeroParaRaiz = 25.0;
    double raiz = std::sqrt(numeroParaRaiz);
    std::cout << "A raiz quadrada (std::sqrt) de " << numeroParaRaiz << " e: " << raiz << std::endl;

    // 2. Potência: std::pow()
    // Calcula a base elevada a um expoente (base^expoente).
    double base = 2.0;
    double expoente = 3.0; // 2 elevado a 3
    double potencia = std::pow(base, expoente);
    std::cout << base << " elevado a (std::pow) " << expoente << " e: " << potencia << std::endl;

    // 3. Valor Absoluto: std::fabs() para decimais, std::abs() para inteiros
    // Retorna o valor positivo de um número.
    double numeroNegativoDecimal = -17.56;
    double absolutoDecimal = std::fabs(numeroNegativoDecimal); // fabs para float/double
    std::cout << "O valor absoluto (std::fabs) de " << numeroNegativoDecimal << " e: " << absolutoDecimal << std::endl;

    int numeroNegativoInteiro = -100;
    int absolutoInteiro = std::abs(numeroNegativoInteiro); // abs para inteiros
    std::cout << "O valor absoluto (std::abs) de " << numeroNegativoInteiro << " e: " << absolutoInteiro << std::endl << std::endl;

    // 4. Arredondar para Cima (Teto): std::ceil()
    // Arredonda um número decimal para o próximo inteiro maior ou igual.
    double valorParaCima1 = 7.1;
    double teto1 = std::ceil(valorParaCima1);
    std::cout << "O teto (std::ceil) de " << valorParaCima1 << " e: " << teto1 << std::endl;

    double valorParaCima3 = -7.1; // Atenção com negativos
    double teto3 = std::ceil(valorParaCima3); // Resultado: -7.0
    std::cout << "O teto (std::ceil) de " << valorParaCima3 << " e: " << teto3 << std::endl << std::endl;


    // 5. Arredondar para Baixo (Piso): std::floor()
    // Arredonda um número decimal para o próximo inteiro menor ou igual.
    double valorParaBaixo1 = 7.1;
    double piso1 = std::floor(valorParaBaixo1);
    std::cout << "O piso (std::floor) de " << valorParaBaixo1 << " e: " << piso1 << std::endl;

    double valorParaBaixo3 = -7.1; // Atenção com negativos
    double piso3 = std::floor(valorParaBaixo3); // Resultado: -8.0
    std::cout << "O piso (std::floor) de " << valorParaBaixo3 << " e: " << piso3 << std::endl << std::endl;


    // 6. Arredondar para o Mais Próximo: std::round() (C++11 em diante)
    // Arredonda para o inteiro mais próximo. Se estiver exatamente no meio (ex: 2.5), arredonda para longe de zero.
    double valorParaArredondar1 = 7.4;
    double arredondado1 = std::round(valorParaArredondar1);
    std::cout << "Arredondando (std::round) " << valorParaArredondar1 << " fica: " << arredondado1 << std::endl;

    double valorParaArredondar2 = 7.5;
    double arredondado2 = std::round(valorParaArredondar2);
    std::cout << "Arredondando (std::round) " << valorParaArredondar2 << " fica: " << arredondado2 << std::endl;

    return 0; // Indica que o programa terminou com sucesso
}