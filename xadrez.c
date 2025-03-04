#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int opcao;

    printf("Selecione uma peca para mover: \n");
    printf("Bispo: 1\nTorre: 2\nRainha: 3\nCavalo: 4\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            // Implementação de Movimentação do Bispo
            // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
            printf("\n----MOVIMENTACAO DO BISPO----\n");
            for ( int i = 1; i <= 5; i++)
            {
                printf("%d cima, direita\n", i);
            }
            break;
        case 2:
            // Implementação de Movimentação da Torre
            // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
            printf("\n----MOVIMENTACAO DA TORRE----\n");
            for ( int i = 1; i <= 5; i++)
            {
                printf("%d direita\n", i);
            }
            break;
        case 3:
            // Implementação de Movimentação da Rainha
            // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
            printf("\n----MOVIMENTACAO DA RAINHA----\n");
            for ( int i = 1; i <= 5; i++)
            {
                printf("%d esquerda\n", i);
            }
            break;
        case 4:
            // Nível Aventureiro - Movimentação do Cavalo
            // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
            // Um loop pode representar a movimentação horizontal e outro vertical.
            printf("\n----MOVIMENTACAO DO CAVALO----\n");
            for( int i = 1; i <= 1; i++ )
            {
                int j = 1;
                while (j <= 2 )
                {
                    printf("Baixo,\n");
                    j++;
                }
                printf("Esquerda");
            }
            break;
        default:
            printf("Nenhuma peca valida selecionada. Saindo...\n");
            break;
    }


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
