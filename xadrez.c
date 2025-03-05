#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int bispo = 0, torre = 0, rainha, escolha;

    printf("Escolha qual peça deseja mover:\n");
    printf("\n1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("Escolha o número da peça:\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
     // Implementação de Movimentação do Bispo
        printf("\nMovimento do Bispo:\n");

        while (bispo < 5)
        {
            printf("Frente, Direita\n");
            bispo++;
        }
        
        break;

    case 2:
        // Implementação de Movimentação da Torre
        printf("\nMovimento da Torre:\n");

        do
        {
            printf("Direita\n");
            torre++;
        } while (torre < 5);

        break;

    case 3:
    // Implementação de Movimentação da Rainha
        printf("\nMovimento da Rainha:\n");

        for (rainha = 0; rainha < 8; rainha++)
        {
            printf("Direita\n");
        }

        break;
        
    default:    printf("\nOpção inválida, por favor insira um número de 1 a 3\n");
        break;
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
