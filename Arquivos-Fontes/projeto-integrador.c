#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int menu()
{
    /*===========================
    *função :  menu
    *   retorno : inteiro
    *   retorno 0: sair
    *   retorno 1: equação
    *   retorno 2: raiz quadrada
    *   retorno 3: potenciação
    *============================*/
    int escolha;
    system("cls");
    puts("\t\tMENU\n");
    printf("1)  Calcular o delta e encontrar as raizes reais\n2)  Calcular Raiz Quadratica \n3)  Calcular Potencia\n0)  Sair\n");
    scanf("%i", &escolha);
    //system("cls");
    return escolha;
}
void equacao()
{
    /*===========================
    *função :  equacao
    *   retorno : resultado null || x1 && x2
    *   condição: delta != 0 || float a == 0 = null
    *============================*/
    float a, b, c, delta, x1, x2;
    puts("\t     Calcular o delta e, encontrar os valores das raizes reais ");
    puts("\tSendo que, a equacao do segundo grau seja no modelo = ax + bx + c \n\n");
    printf("Digite o valor de a: \n");
    scanf("%f*c", &a);
    printf("\nDigite o valor de b: \n");
    scanf("%f*c", &b);
    printf("\nDigite o valor de c: \n");
    scanf("%f*c", &c);
    if (a != 0)
    {
        delta = pow(b, 2) - 4 * a * c;
        if (delta > 0)
        {
            printf("\nDelta = %.2f\n", delta);
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("\nx1 = %.2f\n", x1);
            printf("\nx2 = %.2f\n\n", x2);
        }
        else if (delta < 0)
        {
            delta = pow(b, 2) - 4 * a * c;
            printf("\nDelta = %.2f\n", delta);
            printf("\n>> Nao existe raizes reais <<\n\n");
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            printf("Delta = %.2f\n", delta);
            printf("\nx1 = %.2f\n", x1);
            printf("\nx2 = %.2f\n", x1);
        }
    }
    else
    {
        printf("\n\n>>O que vc digitou nao e uma equacao do segundo grau<<\n\n");
    }
    system("pause");
}
void raiz()
{
    /*
    * função: computa a raiz positiva de float raiz  
    * se o numero for negativo ele não faz a conta
    */
    float raiz, valido;
    printf("\t   Raiz Quadrada!");
    printf("\nInforme o numero para encontrar a raiz:\n");
    scanf("%f*c", &raiz);
    valido = raiz < 0;
    if (!valido)
    {
        printf("\nA raiz quadratica positiva de %2.f = %.1f \n\n", raiz, sqrtf(raiz));
    }
    else
    {
        printf("\nInfome um numero positivo!\n\n");
    }
    system("pause");
}
void potencia()
{
    /*
    * função: computa a base positiva(aceita ponto flutuante)
    * eleva a um expoente(inteiro)  
    * se o numero for negativo ele não faz a conta
    */
    float base, expoente;
    printf("\t   Potenciacao!");
    printf("\n\nInforme o valor da base:\n");
    scanf("%f*c", &base);
    printf("\nInforme o valor do expoente:\n");
    scanf("%f*c", &expoente);
    printf("\nResultado: \n%.2f elevado a %.1f = %2.f\n\n", base, expoente, powf(base, expoente));
    system("pause");
}
int main(int argc, char *argv[])
{
    int opcao;
    do
    {
        opcao = menu();
        switch (opcao)
        {
        case 1:
            equacao();
            break;
        case 2:
            raiz();
            break;
        case 3:
            potencia();
        default:
            break;
        }
    } while (opcao);
    system("pause");
    return 0;
}