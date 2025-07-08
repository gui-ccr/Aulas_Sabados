#include <iostream> 
#include <string>   

int main() {
    
    int idade; 

    std::cout << "Por favor, digite sua idade: ";
    std::cin >> idade;

 
    std::cout << "Legal! Voce tem " << idade << " anos." << std::endl;
    std::cout << "------------------------------------" << std::endl << std::endl; // Apenas para separar

    std::string nome; 
    std::cout << "Agora, por favor, digite seu primeiro nome: ";
    std::cin >> nome; //  std::cin >> nome; pega apenas UMA PALAVRA (até o primeiro espaço)

    // 3. Mostra o valor que foi guardado
    std::cout << "Ola, " << nome << "! Bem-vindo(a) ao mundo do C++!" << std::endl;

    // Se você precisar ler um nome completo (com espaços, ex: "Guilherme de Carvalho"),
    // o `std::cin >> nome;` sozinho não vai funcionar pois ele para no primeiro espaço.
    // Para ler uma linha inteira de texto, tem que usar `std::getline(std::cin, nome);`

    return 0; 
}