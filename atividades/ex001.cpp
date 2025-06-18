/* 1- solictar ao usauario duas notas reais
2- calcular a media aritmetica simples
3- exiba o resultaddo
*/
#include <iostream>
main() {
// declaracao das variaveis
int NotaUm,NotaDois;
int Resultado; 

// Entrada de dados
std::cout << "------Calculadora media simples------" << std::endl;
std::cout << "Infome o primeiro numero: ";
std::cin >> NotaUm;

std::cout << "Infome o segundo  numero: ";
std::cin >> NotaDois;
// Processamento de dados 
Resultado = (NotaUm + NotaDois) / 2; 
if (Resultado>=7){ 
    std::cout << "  o aluno foi bem Aprovado!!" << std::endl;
}
else{
    std::cout << " o aluno foi mal Reprovado!! " << std::endl; 
}

// Saida de dados 
std::cout << "media dos dois numeros é: " << Resultado;







}