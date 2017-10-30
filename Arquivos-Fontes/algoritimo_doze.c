#include <stdio.h>
#include <stdlib.h>
#define CONTADOR 20
int main(int argc, char *argv[])
{
    int contador, vetor[CONTADOR];
    for (contador = 1; contador <= CONTADOR; contador++)
    {
        int resto = contador % 2;
        if (!resto)
        {
            vetor[CONTADOR] = contador;
        }
        else
        {
            printf("\n[%d] nao e par",contador);
        }
    }
    for (contador = 1; contador <= CONTADOR; contador++)
    {
        printf("\n[%d] valor [%d]", contador, vetor[CONTADOR]);
    }
}