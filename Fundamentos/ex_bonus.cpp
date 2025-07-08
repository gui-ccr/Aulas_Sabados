#include <iostream>
#include <string>
#include <vector>

//typedef

/*
A palavra typedef vem de "type definition" (definição de tipo). A sintaxe é:
typedef tipo_original novo_nome_alias;

Em C++, typedef e os aliases com using são basicamente isso: dar um 'apelido' para um tipo de dado. Você não está criando um tipo novo, só está dando um nome alternativo, mais simples ou mais significativo, para um tipo que já existe.
*/

int main() {

    // jeito antigo
    typedef int IdadeUsuario; // Agora 'IdadeUsuario' é um apelido para 'int'

    IdadeUsuario idadeMilena = 21;
    IdadeUsuario idadeGuilherme = 18;

    std::cout << "Idade de Milena: " << idadeMilena << std::endl;
    std::cout << "Idade de Guilherme: " << idadeGuilherme << std::endl;

    // idadeGuilherme continua sendo um int por baixo dos panos
    // int outraIdade = idadeMilena; // Isso funciona perfeitamente

    // -----------------------------------------------------------------------



    // jeito novo 
    #include <iostream>


    using IdadeUsuario = int; // 'IdadeUsuario' é um apelido para 'int'

    IdadeUsuario idadeJoao = 30;
    std::cout << "Idade de Joao: " << idadeJoao << std::endl;
    

    // exemplo mais complexo 

    using ListaDeNomes = std::vector<std::string>;
    {
    ListaDeNomes nomesAlunos;
    nomesAlunos.push_back("Beatriz");
    nomesAlunos.push_back("Daniel");

    for (const std::string& nome : nomesAlunos) { // Usando um range-based for loop, mais moderno também!
        std::cout << nome << std::endl;
    }
    }

    /*
    typedef vs using para aliases:
    Ambos fazem a mesma coisa para tipos simples. O using é considerado mais moderno e é mais flexível quando se trata de templates (um conceito mais avançado de C++). Para começar, ela pode usar qualquer um dos dois que achar mais fácil de ler. Muitos projetos novos preferem using.
    */


    return 0;
}
