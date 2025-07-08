#include <iostream>
#include <string>
#include <iomanip> // Para usar std::fixed e std::setprecision para formatar o preço

// --- DEFINIÇÃO DA CLASSE (A "ETIQUETA" PADRÃO DE UM PRODUTO) ---
// A classe Produto é nosso molde. Todo produto em nossa loja seguirá este modelo.
class Produto {
public:
    // --- ATRIBUTOS (O que um produto TEM) ---
    // As informações que todo produto precisa ter.
    std::string nome;
    float preco;
    int quantidadeEmEstoque;

    // --- MÉTODOS (O que podemos FAZER com um produto) ---

    // 1. Método para exibir os detalhes do produto de forma organizada.
    void mostrarDetalhes() {
        std::cout << "--- Detalhes do Produto ---" << std::endl;
        std::cout << "Nome: " << nome << std::endl;
        
        // std::fixed e std::setprecision(2) são usados para formatar o preço
        // para sempre exibir duas casas decimais (ex: 2.50 em vez de 2.5).
        std::cout << "Preco: R$ " << std::fixed << std::setprecision(2) << preco << std::endl;
        
        std::cout << "Estoque: " << quantidadeEmEstoque << " unidades" << std::endl;
        std::cout << "---------------------------\n" << std::endl;
    }

    // 2. Método que responde a uma pergunta: "Este produto tem estoque?".
    //    Ele retorna 'true' (verdadeiro) se a quantidade for maior que 0,
    //    e 'false' (falso) caso contrário.
    bool temEstoque() {
        if (quantidadeEmEstoque > 0) {
            return true;
        } else {
            return false;
        }
    }
};


// --- FUNÇÃO PRINCIPAL ---
// É aqui que nossa "loja" funciona. Vamos criar e gerenciar nossos produtos.
int main() {
    
    // --- CRIAÇÃO DO PRIMEIRO OBJETO: um caderno ---
    Produto caderno;
    caderno.nome = "Caderno Universitario";
    caderno.preco = 15.99f;
    caderno.quantidadeEmEstoque = 20;

    // --- CRIAÇÃO DO SEGUNDO OBJETO: uma caneta ---
    Produto caneta;
    caneta.nome = "Caneta Azul";
    caneta.preco = 2.50f;
    caneta.quantidadeEmEstoque = 0; // Esta caneta está fora de estoque!

    // Agora, vamos usar os métodos dos nossos objetos.
    std::cout << "Bem-vindo a nossa papelaria!\n" << std::endl;

    // Pedimos para cada produto se apresentar.
    caderno.mostrarDetalhes();
    caneta.mostrarDetalhes();

    // Agora vamos usar o método 'temEstoque' para tomar decisões.
    std::cout << "Verificando disponibilidade..." << std::endl;

    // Para o caderno...
    if (caderno.temEstoque() == true) {
        std::cout << "O produto '" << caderno.nome << "' esta disponivel!" << std::endl;
    } else {
        std::cout << "O produto '" << caderno.nome << "' esta fora de estoque." << std::endl;
    }

    // Para a caneta...
    if (caneta.temEstoque() == true) {
        std::cout << "O produto '" << caneta.nome << "' esta disponivel!" << std::endl;
    } else {
        std::cout << "O produto '" << caneta.nome << "' esta fora de estoque." << std::endl;
    }

    return 0;
}