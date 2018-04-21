//Albérico Dias Barreto Filho RA: 20171571
//Mandei o projeto do semaforo no email hein sakai

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO_ARQUIVO 200
char arquivo[TAMANHO_ARQUIVO], conteudoArquivo[TAMANHO_ARQUIVO];
int lesmas[TAMANHO_ARQUIVO], melhor = 0;
char *itoa_alternativo(int valor, int base)
{
    static char buf[32] = {0};
    int i = 30;
    for (; valor && i; --i, valor /= base)
        buf[i] = "0123456789abcdef"[valor % base];
    return &buf[i + 1];
}
void classificaOmelhor(int velocidade)
{
  if (velocidade > melhor) melhor = velocidade;
}
void regraDoJogo(int velocidade)
{
  for (int indice = 0; indice <= sizeof(lesmas) / sizeof *(lesmas); indice++)
  {
    if (velocidade >= 0)
    {
      classificaOmelhor(velocidade);
    }
    else
    {
      printf("\n Invalido");
    }
  }
}
void gravaResultados()
{
  printf("\n\tGravando os resultados em:\t\n");
  printf("\n[classificao.txt]\t\n");
  FILE *struct_referencia_manipula_arquivo;
  struct_referencia_manipula_arquivo = fopen("classificao.txt", "w");
  if (struct_referencia_manipula_arquivo == 0)
  {
    printf("Erro ao [Abrir] || [Criar Arquivo], verifique as permicoes.\n\n");
    exit(1);
  }
  fseek(struct_referencia_manipula_arquivo, 0, SEEK_END);
  fprintf(struct_referencia_manipula_arquivo, "\n%s", conteudoArquivo);
  fclose(struct_referencia_manipula_arquivo);
  printf("\nResultados gravados com sucesso. \t\n");
}
int regraQuantidade(int participantes){
  if(participantes >= 1 && participantes <= 100 ) return 1;
  return 0;
}
int regraVelocidade(int velocidade){
  if(velocidade >=1 && velocidade <= 50) return 1;
  return 0;
}
void regras(int velocidade, int posicao)
{
  if (posicao > 0 && posicao <= 100)
  {
    if(regraVelocidade(velocidade)){
      regraDoJogo(velocidade);
    }
  }  
}
int avalia()
{
  int corrida_valida = regraQuantidade(lesmas[0]);
  if(corrida_valida){
    for (int indice = 0; indice <= sizeof(lesmas) / sizeof *(lesmas); indice++)
    {
      int velocidade_valida = regraVelocidade(lesmas[indice]);
      if(velocidade_valida && indice <= lesmas[0]){
          regras(lesmas[indice], indice);
      }else if(!velocidade_valida && indice <= lesmas[0]){
        printf("\nValor invalido na raia %d\n",indice);
        char saida_para_erro[50] = {"Valor\ninvalido\nna raia: \0"};
        strcat(saida_para_erro, itoa_alternativo(indice,10));
        strcpy(conteudoArquivo, saida_para_erro);
        gravaResultados();
        return 0;
      }
    }
  return 1;  
  }else{
  printf("\nValor invalido na linha 0\n");  
  char saida_para_erro[50] = {"Valor\ninvalido\nna linha 0\0"};
  strcpy(conteudoArquivo, saida_para_erro);
  gravaResultados();
  return 0;
  }
}
int defineNivel(int velocidade)
{
  if (velocidade < 10) return 1;
  else if (velocidade >= 10 && velocidade < 20) return 2;
  else return 3; 
}
void inicio()
{
  FILE *struct_referencia_manipula_arquivo;
  int qtddelinhas;
  int indice = 0;
  int posicao_lesma;
  char nomeArquivo[TAMANHO_ARQUIVO];
  printf("\n\tDigite o nome do arquivo e a extensão [.txt]: \n");
  scanf("%s%*c", nomeArquivo);
  struct_referencia_manipula_arquivo = fopen(nomeArquivo, "r");
  if (struct_referencia_manipula_arquivo == 0)
  {
    printf("Erro ao ler o arquivo, verifique a existencia dele na raiz do executavel. \n\n");
    exit(1);
  }
  printf("\n\tResultados do arquivo [%s] : \n", nomeArquivo);
  while (fscanf(struct_referencia_manipula_arquivo, "%d", &posicao_lesma) > 0)
  {
    lesmas[indice] = posicao_lesma;
    indice++;
  }
  fclose(struct_referencia_manipula_arquivo);
}
void finaliza(int melhor)
{
  for (int raia = 0; raia <= sizeof(lesmas) / sizeof *(lesmas); raia++)
  {
    if (lesmas[raia] == melhor)
    {
      int saida = defineNivel(melhor);
      char saida_para_escrita_nivel[50] = {"Nivel: \0"};
      char saida_para_escrita_raia[50] = {"\nRaia: \0"};
      char saida_completa[70];
      printf("\n\t A Melhor Velocidade: %d KM/H \n", melhor);
      printf("\nNivel: %d \nRaia: %d \n", saida, raia);
      strcat(saida_para_escrita_nivel, itoa_alternativo(saida,10));
      strcat(saida_para_escrita_raia, itoa_alternativo(raia,10));
      strcat(saida_para_escrita_nivel,saida_para_escrita_raia);
      strcpy(saida_completa, saida_para_escrita_nivel);
      strcpy(conteudoArquivo, saida_completa);
    }
  }
}
int main()
{
  inicio();
  if(avalia()){
    finaliza(melhor);
    gravaResultados();
  };
}
