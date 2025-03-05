#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
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
        printf("\nMovimento do Bispo:\n");

        while (bispo < 5)
        {
            printf("Frente, Direita\n");
            bispo++;
        }
        
        break;

    case 2:
        printf("\nMovimento da Torre:\n");

        do
        {
            printf("Direita\n");
            torre++;
        } while (torre < 5);

        break;

    case 3:
        printf("\nMovimento da Rainha:\n");

        for (rainha = 0; rainha < 8; rainha++)
        {
            printf("Direita\n");
        }

        break;
        
    default:    printf("\nOpção inválida, por favor insira um número de 1 a 3\n");
        break;
    }

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

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
