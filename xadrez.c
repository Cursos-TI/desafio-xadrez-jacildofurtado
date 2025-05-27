#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
    // Variáveis de inicialização da movimentação das peças
    int movimentoBispo = 0;
    int movimentoTorre = 0;
    int movimentoRainha = 0;
    int movimentoCavalo;

    // Implementação de Movimentação do Bispo
    printf("Movimentação do Bispo\n");

    while (movimentoBispo < 5) { 
        // Move o Bispo na diagonal superior direita 5 casas
        printf("Cima, Direita\n");
        movimentoBispo++;
    }

    printf("\n"); // Deixa uma linha em branco

    // Implementação de Movimentação da Torre
    printf("Movimentação da Torre\n");

    do {
        // Move a torre para a direita 5 casas
        printf("Direita\n");
        movimentoTorre++;
    } while (movimentoTorre < 5);

    printf("\n"); // Deixa uma linha em branco

    // Implementação de Movimentação da Rainha
    printf("Movimentação da Rainha\n");

    for(movimentoRainha; movimentoRainha < 8; movimentoRainha++) { 
        // Move a Rainha 8 para a esquerda 8 casa
        printf("Esquerda\n");
    }

    printf("\n"); // Deixa uma linha em branco

    // Nível Aventureiro - Movimentação do Cavalo
    printf("Movimentação do Cavalo\n");

    for (movimentoCavalo = 0; movimentoCavalo < 1; movimentoCavalo++) { // Eixo vertical
        int i = 0; // Variável de inicialização

        while (i < 2) { // Eixo Horizontal
            printf("Baixo\n"); // Movimento 2 vezes para baixo
            i++;
        }

        printf("Esquerda\n"); // Movimento 1 vez para a esquerda
    } 

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
