#include <stdio.h>

// Desafio de Xadrez - MateCheck

// funções recursivas para o movimentos das peças

// Movimento do Bispo
void moverBispo (int casasVerticais, int casasHorizontais) {

    for (casasVerticais; casasVerticais > 0; casasVerticais--) { // Controla o movimento vertical
        printf("Cima, ");

        for (casasHorizontais; casasHorizontais == casasVerticais; casasHorizontais--) { // Controla o movimento horizontal
            printf("Direita\n");
        }
    }

}

// Movimento da Torre
void moverTorre (int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre (casas - 1);
    }
}

// Movimento da Rainha
void moverRainha (int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha (casas - 1);
    }
}

int main() {

    // Implementação de Movimentação do Bispo
    printf("Movimentação do Bispo\n");

    moverBispo(5, 5); // Move o Bispo 5 casas (um parâmetro para a vertical e outro para horizontal)


    printf("\n"); // Deixa uma linha em branco

    // Implementação de Movimentação da Torre
    printf("Movimentação da Torre\n");

    
    moverTorre(5); // Move a torre 5 casas

    printf("\n"); // Deixa uma linha em branco

    // Implementação de Movimentação da Rainha
    printf("Movimentação da Rainha\n");

    moverRainha(8); // Move a Rainha 8 casas

    printf("\n"); // Deixa uma linha em branco

    // Implementação de Movimentação do Cavalo
    printf("Movimentação do Cavalo\n");

    for (int casasVerticais = 2; casasVerticais > 0; casasVerticais--) { // Movimento na vertical
        printf("Cima\n");
        if (casasVerticais == 2) continue; // Pula a interação quando casasVerticais for igual a 2
        

        for (int casasHorizontais = 1; casasHorizontais > 0; casasHorizontais--) { // Movimento na horizontal
            printf("Direita\n");
            if (casasHorizontais == 0) break; // Sai do loop quando casasHorizontais for igual a 0
        }
    }

    return 0;
}
