#include <iostream> // Para usar std::cout (imprimir na tela).
#include <vector>   // É essencial incluir esta biblioteca para usar o std::vector.
#include <string>   // Vamos fazer uma lista de strings (textos).

int main() {
    // 1. CRIAÇÃO DA LISTA (VETOR)
    //    Aqui, criamos uma lista chamada 'lista_de_compras' que irá armazenar textos (std::string).
    //    Inicialmente, ela está vazia.
    std::vector<std::string> lista_de_compras;

    std::cout << "Criando a lista de compras..." << std::endl;

    // 2. ADICIONANDO ITENS À LISTA
    //    O método 'push_back()' adiciona um item ao FINAL da lista.
    lista_de_compras.push_back("Macarrao");
    lista_de_compras.push_back("Molho de tomate");
    lista_de_compras.push_back("Queijo ralado");
    lista_de_compras.push_back("Manjericao");

    std::cout << "Itens adicionados a lista!" << std::endl;
    std::cout << "----------------------------------" << std::endl;

    // 3. ACESSANDO UM ITEM ESPECÍFICO
    //    Os itens da lista são numerados a partir do 0 (índice).
    //    Para acessar o primeiro item, usamos o índice 0.
    std::cout << "O primeiro item da lista eh: " << lista_de_compras[0] << std::endl;

    // Acessando o terceiro item (índice 2).
    std::cout << "O terceiro item da lista eh: " << lista_de_compras[2] << std::endl;
    std::cout << "----------------------------------" << std::endl;

    // 4. MOSTRANDO O TAMANHO DA LISTA
    //    O método '.size()' retorna a quantidade de itens que a lista possui no momento.
    std::cout << "A lista tem " << lista_de_compras.size() << " itens." << std::endl;
    std::cout << "----------------------------------" << std::endl;


    // 5. PERCORRENDO E MOSTRANDO TODOS OS ITENS DA LISTA
    //    Esta é a forma mais moderna e simples de usar um 'for' para percorrer uma lista.
    //    Leia-se como: "Para cada 'item' do tipo 'string' DENTRO de 'lista_de_compras', faça:"
    std::cout << "Itens na lista de compras:" << std::endl;
    for (const std::string& item : lista_de_compras) {
        // A cada volta do laço, a variável 'item' recebe o valor de um elemento da lista.
        std::cout << "- " << item << std::endl;
    }

    return 0; // Fim do programa.
}