#include <iostream>
#include <string>
#include <limits> // Necessário para a limpeza de buffer
#include <locale>  // Necessário para configurar a acentuação
using namespace std;
int main() {
    // Configura o local para português, permitindo acentuação no console
    setlocale(LC_ALL, "Portuguese");

    // Declaração das variáveis
    string marca_carro;
    string estado;
    string nome_comprador;
    int ano_fabricacao;
    double valor_carro;
    double taxa_ipva = 0.0;
    const int ano_atual = 2025; // Ano atual para o cálculo da idade do veículo

    // --- Coleta de Dados do Usuário ---
    cout << "Digite o nome do comprador: ";
    getline(cin, nome_comprador);

    cout << "Digite a marca do carro: ";
    getline(cin, marca_carro);

    cout << "Digite o valor do carro: R$ ";
    cin >> valor_carro;

    cout << "Digite o ano de fabricacao do carro: ";
    cin >> ano_fabricacao;

    // Limpa o buffer de entrada para a próxima leitura de texto
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Digite a sigla do estado onde o carro foi comprado (MG, BA, SP, DF): ";
    getline(cin, estado);

    // --- Lógica de Cálculo do IPVA ---

    // 1. Verifica se o carro é isento de IPVA (mais de 20 anos)
    if (ano_atual - ano_fabricacao > 20) {
        cout << "\n--- Resultado ---\n";
        cout << "Comprador: " << nome_comprador << endl;
        cout << "Carro: " << marca_carro << " (" << ano_fabricacao << ")" << endl;
        cout << "Este veiculo possui mais de 20 anos de fabricacao e, portanto, e ISENTO de IPVA." << endl;
    } else {
        // 2. Se não for isento, determina a taxa com base no estado
        if (estado == "MG" || estado == "mg" || estado == "mG" || estado == "Mg") {
            taxa_ipva = 0.09; // 9%
        } else if (estado == "BA" || estado == "ba") {
            taxa_ipva = 0.12; // 12%
        } else if (estado == "SP" || estado == "sp") {
            taxa_ipva = 0.10; // 10%
        } else if (estado == "DF" || estado == "df") {
            taxa_ipva = 0.06; // 6%
        } else {
            // Se o estado não for um dos previstos, informa o erro.
            cout << "\nEstado invalido. As taxas disponiveis sao apenas para MG, BA, SP e DF." << endl;
            return 1; // Encerra o programa com um código de erro
        }

        // 3. Calcula o valor final do imposto
        double valor_ipva = valor_carro * taxa_ipva;

        // --- Exibição do Resultado ---
        cout << "\n--- Recibo do IPVA ---\n";
        cout << "Nome do Comprador: " << nome_comprador << endl;
        cout << "Marca do Carro: " << marca_carro << endl;
        cout << "Ano do Carro: " << ano_fabricacao << endl;
        cout << "Valor do Veiculo: R$ " << valor_carro << endl;
        cout << "Estado de Compra: " << estado << endl;
        cout << "Taxa de IPVA: " << (taxa_ipva * 100) << "%" << endl;
        cout << "Valor do IPVA a ser pago: R$ " << valor_ipva << endl;
    }

    return 0; // Indica que o programa terminou com sucesso
}