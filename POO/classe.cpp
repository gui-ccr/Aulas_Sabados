#include <iostream>
#include <string>

// --- DEFINIÇÃO DA CLASSE (A PLANTA DO CARRO) ---
// A palavra-chave 'class' inicia a criação da nossa "planta".
// Tudo que estiver aqui dentro define o que é um Carro.
class Carro {
// 'public:' significa que esta parte da planta é acessível por qualquer um
// que queira "construir" ou "usar" o carro.
public:
    // --- ATRIBUTOS (O que um carro TEM) ---
    // Estas são as características que todo objeto Carro terá.
    std::string marca;
    std::string modelo;
    int ano;

    // --- MÉTODOS (O que um carro FAZ) ---
    // Este é um método (uma função dentro de uma classe).
    // A tarefa dele é mostrar as informações do próprio carro.
    // Note que ele pode acessar diretamente os atributos 'marca', 'modelo' e 'ano'.
    // METODOS sao basicamente FUNÇÕES so que quando vc usa uma FUNCAO dentro de uma CLASSE ela se torna um METODO da CLASSE
    void mostrarInformacoes() {
        std::cout << "------------------------" << std::endl;
        std::cout << "Marca: " << marca << std::endl;
        std::cout << "Modelo: " << modelo << std::endl;
        std::cout << "Ano: " << ano << std::endl;
        std::cout << "------------------------" << std::endl;
    }
}; // A definição da classe sempre termina com ponto e vírgula.


// --- FUNÇÃO PRINCIPAL ---
// Agora vamos usar nossa planta para construir carros de verdade (objetos).
int main() {
    
    // --- CRIAÇÃO DO OBJETO (INSTANCIAÇÃO) ---
    // Aqui estamos criando nosso primeiro objeto a partir da classe Carro.
    // 'meuFusca' é uma "instância" da classe Carro.
    Carro meuFusca; 
    
    // Agora, vamos definir as características (atributos) deste objeto específico.
    // Usamos o operador '.' para acessar os atributos do objeto.
    meuFusca.marca = "Volkswagen";
    meuFusca.modelo = "Fusca";
    meuFusca.ano = 1975;
    
    // --- CRIAÇÃO DE UM SEGUNDO OBJETO ---
    // Podemos criar quantos objetos quisermos a partir da mesma planta.
    Carro minhaFerrari;
    minhaFerrari.marca = "Ferrari";
    minhaFerrari.modelo = "F8";
    minhaFerrari.ano = 2022;

    std::cout << "Informacoes dos carros na garagem:\n" << std::endl;

    // --- CHAMADA DOS MÉTODOS ---
    // Agora pedimos para cada objeto executar sua ação de "mostrarInformacoes".
    // Cada carro irá mostrar suas próprias informações.
    meuFusca.mostrarInformacoes();
    minhaFerrari.mostrarInformacoes();

    return 0;
}