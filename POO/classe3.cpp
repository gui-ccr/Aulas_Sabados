#include <iostream>
#include <string>
#include <iomanip>

// --- DEFINIÇÃO DA CLASSE (O "PROJETO" DA CONTA BANCÁRIA) ---
class ContaBancaria {
// 'private:' significa que os membros abaixo só podem ser acessados
// e modificados pelos métodos da PRÓPRIA classe. Ninguém de fora pode tocar neles.
// Isso protege a integridade dos nossos dados.
private:
    std::string titular;
    std::string numeroDaConta;
    double saldo; // O saldo é o nosso dado mais crítico!

// 'public:' define a interface, o "painel de controle" da nossa classe.
// É como o mundo exterior vai interagir com nossos objetos de forma segura.
public:
    // --- CONSTRUTOR ---
    // Este método especial tem o mesmo nome da classe e não tem tipo de retorno.
    // Ele é chamado automaticamente quando um objeto ContaBancaria é criado.
    // Sua missão é inicializar o objeto com os dados essenciais.
    ContaBancaria(std::string nomeDoTitular, std::string numConta) {
        titular = nomeDoTitular;
        numeroDaConta = numConta;
        saldo = 0.0; // Toda conta nova começa com saldo zerado. É uma regra de negócio!
        std::cout << "Conta criada para " << titular << "! Bem-vindo(a)!" << std::endl;
    }

    // --- MÉTODOS PÚBLICOS (OPERAÇÕES DA CONTA) ---

    // Método para depositar dinheiro. Ele recebe um valor e o adiciona ao saldo.
    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor; // saldo = saldo + valor;
            std::cout << "Deposito de R$ " << valor << " realizado com sucesso." << std::endl;
        } else {
            std::cout << "Valor de deposito invalido. Por favor, insira um valor positivo." << std::endl;
        }
    }

    // Método para sacar dinheiro.
    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor; // saldo = saldo - valor;
            std::cout << "Saque de R$ " << valor << " realizado com sucesso." << std::endl;
        } else if (valor <= 0) {
            std::cout << "Valor de saque invalido. Por favor, insira um valor positivo." << std::endl;
        } else {
            std::cout << "Saque nao realizado. Saldo insuficiente." << std::endl;
        }
    }

    // Método para exibir os detalhes da conta.
    void exibirDetalhes() {
        std::cout << "\n--- Detalhes da Conta ---" << std::endl;
        std::cout << "Titular: " << titular << std::endl;
        std::cout << "Numero da Conta: " << numeroDaConta << std::endl;
        std::cout << "Saldo Atual: R$ " << std::fixed << std::setprecision(2) << saldo << std::endl;
        std::cout << "-------------------------" << std::endl;
    }
};

// --- FUNÇÃO PRINCIPAL ---
// Vamos simular as operações em um caixa eletrônico.
int main() {
    // Criando um objeto (uma conta para o "Guilherme") usando o CONSTRUTOR.
    // Note que os dados são passados diretamente na criação.
    ContaBancaria contaDoGui("Guilherme", "12345-6");
    
    // Criando um segundo objeto (uma conta para a "Milena").
    ContaBancaria contaDeMilena("Milena", "98765-4");

    // Exibindo o estado inicial das contas. O saldo será 0.0.
    contaDoGui.exibirDetalhes();
    contaDeMilena.exibirDetalhes();

    // Vamos tentar manipular o saldo diretamente (NÃO VAI FUNCIONAR!)
    //! contaDoGui.saldo = 1000000; // <- ESTA LINHA GERARIA UM ERRO DE COMPILAÇÃO!
    // O erro seria "saldo is private". Isso mostra que nosso encapsulamento funciona!

    std::cout << "\n--- Realizando Operacoes ---\n" << std::endl;

    // Usando os métodos públicos para interagir com o objeto de forma segura.
    contaDoGui.depositar(1500.50);
    contaDoGui.sacar(300.00);
    contaDoGui.sacar(2000.00); // Tentativa de saque maior que o saldo
    contaDoGui.sacar(-50.00); // Tentativa de saque inválida

    contaDeMilena.depositar(500.00);
    
    // Exibindo o estado final das contas
    contaDoGui.exibirDetalhes();
    contaDeMilena.exibirDetalhes();

    return 0;
}