#include <stdio.h>

//Recursividade, essa função é chamada para fazer o movimento das peças
void movimentoPeca(int n, char movimento[30], int bispo) 
{
    if(n <= 5 && bispo == 0)
    {
        printf("%d %s\n", n, movimento);
        movimentoPeca(n += 1, movimento, bispo = 0);
    }
    else if (bispo == 1)
    {
        printf("%s", movimento);
    }
}

int main() {
    int opcao;
    
    printf("Selecione uma peca para mover: \n");
    printf("Bispo: 1\nTorre: 2\nRainha: 3\nCavalo: 4\n");
    scanf("%d", &opcao);
    

    switch (opcao)
    {
        case 1:
            // Movimentação do Bispo
            printf("\n----MOVIMENTACAO DO BISPO----\n");
                int verdadeiroBispo = 1;
                for (int i = 1; i <= 5; i++)
                {
                    for (int j = 1; j <= 1; j++)
                    {
                        for (int k = 1; k <= 1; k++)
                        {
                            int movimentosBispo = 1;
                            int verdadeiroBispo = 1;
                            char descricaoBispo[30] = "direita,";
                            movimentoPeca(movimentosBispo, descricaoBispo, verdadeiroBispo);    
                        }
                        int movimentosBispo = 1;
                        int verdadeiroBispo = 1;
                        char descricaoBispo[30] = " cima\n";
                        movimentoPeca(movimentosBispo, descricaoBispo, verdadeiroBispo);
                    }
                }
            break;
        case 2:
            // Movimentação da Torre
            printf("\n----MOVIMENTACAO DA TORRE----\n");
            int movimentosTorre = 1;
            verdadeiroBispo = 0;
            char descricaoTorre[30] = "direita";
            movimentoPeca(movimentosTorre, descricaoTorre, verdadeiroBispo);
            break;
        case 3:
            // Movimentação da Rainha
            printf("\n----MOVIMENTACAO DA RAINHA----\n");
            int movimentosRainha = 1;
            verdadeiroBispo = 0;
            char descricaoRainha[30] = "esquerda";
            movimentoPeca(movimentosRainha, descricaoRainha, verdadeiroBispo);
            break;
        case 4:
            // Movimentação do Cavalo
            printf("\n----MOVIMENTACAO DO CAVALO----\n");
            for( int i = 1; i <= 1; i++ )
            {
                for (int j = 1, k = 1; j <= 2 && k <= 2; j++ , k++)
                {
                    printf("Cima\n");
                }
                printf("Direita");
            }
            break;
        default:
            printf("Nenhuma peca valida selecionada. Saindo...\n");
            break;
    }

    return 0;
}
