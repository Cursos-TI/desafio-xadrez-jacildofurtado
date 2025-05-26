#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
    // Variáveis de inicialização da movimentação das peças
    int movimentoBispo = 0;
    int movimentoTorre = 0;
    int movimentoRainha = 0;

    // Implementação de Movimentação do Bispo
    printf("Movimentação do Bispo\n");

    while (movimentoBispo < 5) { 
        // Move o Bispo na diagonal superior direita 5 casas
        printf("Cima Direita\n");
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




    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
