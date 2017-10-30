#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int vetor[8], i, valor, achei = 0;

    for (i = 0; i < 8; i++)
    {
        printf("\n[%d] Digite um numero: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\n\nInsira um numero, irei verificar!\n");
    scanf("%d", &valor);
    for (i = 0; i < 8; i++)
    {
        if (vetor[i] == valor)
        {
            printf("\nEncontrei!\nO numero que voce escolheu esta na posicao [%d] com  valor [%d]\n",i, vetor[i]);
            achei = 1;
        }
        if(achei != 1){
            printf("\nEsse numero nao esta na posicao : [%d] o valor esta [%d]!",i,vetor[i]);
        }

    }

    system("pause");
    return 0;
}