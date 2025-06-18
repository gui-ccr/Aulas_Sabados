// tipos de variaveis simples

#include <iostream>
using namespace std;

 main()
{
    // inteiro (numero todo)
    int idade = 21 ;
    int ano = 2025;
    int dias = 23.5;
    int dia = 23;

    // std::cout << dias;
    
    // double (numero que inclui casas decimais)
    double preco = 12.5;
    double temperatura = 27.32;
    
    // std::cout << temperatura;

    // char (unico caracter)
    // char nota = "A";
    char inicial = 'M'; // nota-se que um unico carartere utiliza-se aspas simples ('')

    // std::cout << inicial;

    // boleano (verdadeiro ou falso)
    bool bonita = true;
    bool inteligente = true;
    bool preguicosa = false;

    // std::cout << bonita;

    // string (uma serie de carateres simbolizado por aspas duplas ("") )

    std::string nome = "Milena";

    std::cout << "hoje e dia " << dia << " e " << nome << " esta aprendendo a codificar em c++, ela tem " << idade << " anos a inicial do nome dela e (" << inicial << ")" << endl;

    cout << "milena e bonita ?: " << bonita << endl;
    cout << "milena e inteligente ?: " << inteligente << endl;
    cout << "milena e preguicosa?: " << preguicosa << endl;



    
    
    
    return 0;
}
