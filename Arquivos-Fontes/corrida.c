#include <stdlib.h>
#include <stdio.h>

int regras(int velocidade){
  int nivel[4] = {0, 1, 2, 3};
  int retorno[2] = { 0, 0 };
//   Nivel: 2
// Raia: 1
  if (velocidade >= 0) {
      // Nível 1​: Se a velocidade é menor que 10 cm/h .
      retorno[0] = nivel[1];
      retorno[1] = velocidade;
    if(velocidade < 10){

    } else if (velocidade >= 10 && velocidade < 20) {
      // Nível 2​: Se a velocidade é maior ou igual a 10 cm/h e menor que 20 cm/h.
      retorno[0] = nivel[2];
      retorno[1] = velocidade;
    }
    else {
      // Nível 3​: Se a velocidade é maior ou igual a 20 cm/h.
      retorno[0] = nivel[3];
      retorno[1] = velocidade;
    }
  }else{
    // Regra Valor invalido: Se a velocidade sai dos instervalos.
    retorno[0] = nivel[0];
    retorno[1] = velocidade;
  }
 return retorno;
}

int verificaRegras(int velocidade_lesma,  int numero_lesma){
  int retorno;  
  printf("Estou verificando a regra da lesma %d, ela tem a velocidade %d \n", numero_lesma, velocidade_lesma);
  retorno = regras(velocidade_lesma);
  return retorno;
}



int main(){

  printf("Projeto lesma!\n" );
  printf("insira o arquivo para realizar os testes! \n\n");
  int arquivo_falso[4] = { 3, 8, 4, 2};
  int quantidade_de_lesmas = 0;
  int resultado_final;

    if(sizeof(arquivo_falso)/sizeof(*arquivo_falso) >= 1 ){
        for (size_t indice = 0; indice < sizeof(arquivo_falso)/sizeof(*arquivo_falso); indice ++){

            if (arquivo_falso[0]) {
                quantidade_de_lesmas = arquivo_falso[indice];
            }
            resultado_final = verificaRegras(arquivo_falso[indice], indice);

            printf("Resultado Final %d \n", resultado_final);
        }
    }
    getchar();
return 0;
}

