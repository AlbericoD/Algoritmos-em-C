#include <stdio.h>
#include <stdlib.h>

void calcula_media(int qtd_alunos)
{
    int  contador;
    for (contador = 1; contador <= qtd_alunos; contador++)
    {
        float notas_alunos, notas, media_classe;
        printf("\nInsira a nota do Aluno numero %d\n", contador);
        scanf("%f%*c", &notas);
        notas_alunos += notas;
        if (contador == qtd_alunos)
        {
            media_classe = notas_alunos / qtd_alunos;
            printf("\nMedia da classe de %d alunos, foi de %.2f", qtd_alunos, media_classe);
        }
    }
    return;
}
int pede_qtd_aluno()
{
    int qtd_alunos;
    printf("Insira a quantidade de alunos da sua classe!\n");
    scanf("%d%*c", &qtd_alunos);
    return qtd_alunos;
}
int main(int argc, char *argv[])
{
    int alunos = pede_qtd_aluno();
    calcula_media(alunos);
    return 0;
}