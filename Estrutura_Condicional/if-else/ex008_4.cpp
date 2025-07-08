#include <iostream> 
int main() {
  
    bool estaChovendo = true;
    bool estaVentando = true;

    // Mostrando as condições atuais para clareza
    std::cout << "CONDICOES ATUAIS:" << std::endl;
    if (estaChovendo == true) {
        std::cout << "- Esta chovendo." << std::endl;
    } else {
        std::cout << "- NAO esta chovendo." << std::endl;
    }

    if (estaVentando == true) {
        std::cout << "- Esta ventando." << std::endl;
    } else {
        std::cout << "- NAO esta ventando." << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;


    // AGORA A DECISÃO USANDO && (E lógico)

    // Se estiver chovendo E TAMBÉM estiver ventando...
    if (estaChovendo == true && estaVentando == true) {
        std::cout << "RECOMENDACAO: Esta chovendo E ventando! Leve guarda-chuva E um casaco." << std::endl;
    }
    // Senão, se estiver apenas chovendo (mas não ventando)...
    else if (estaChovendo == true && estaVentando == false) {
        std::cout << "RECOMENDACAO: Esta chovendo, mas nao esta ventando. Leve o guarda-chuva!" << std::endl;
    }
    // Senão, se estiver apenas ventando (mas não chovendo)...
    else if (estaChovendo == false && estaVentando == true) {
        std::cout << "RECOMENDACAO: Nao esta chovendo, mas esta ventando. Leve um casaco!" << std::endl;
    }
    // Senão (se não estiver nem chovendo, nem ventando)...
    else {
        std::cout << "RECOMENDACAO: Tempo bom! vai sair pra caminhar " << std::endl;
    }

    std::cout << "------------------------------------" << std::endl;

    return 0;
}