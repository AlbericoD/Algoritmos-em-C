#include <stdio.h>
#include <stdlib.h>

float produto_notavel(float num_1, float num_2, float num_3)
{
    /*TODO: Lembrar de arrumar os ponteiros*/
    printf("\nCalculo \n");
    float num_result = (num_1 * num_1) + num_2 + num_3;
    return num_result;
}
void interface()
{
    printf("Resolucao das funcoes\n");
    printf("Insira o primeiro valor!\n");
    
}
int main(int argc, char *argv[])
{
    float num_1, num_2, num_3;
    num_1 = num_2 = num_3 = 0;
    scanf("%f", &num_1);
    printf("Insira o segundo valor!\n");
    scanf("%f", &num_2);
    printf("Insira o terceiro valor!\n");
    scanf("%f", &num_3);

    float imprimir = produto_notavel(num_1, num_2, num_3);
    printf("\nResultado da funcao %.2f", imprimir);
    return 0;
}