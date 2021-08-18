#include <stdio.h>
#include "functions.h"

int main() {

  int n, menor, maior;

  // ENTRADA DO TAMANHO DO VETOR
  scanf("%d", &n);

  int v[n];
  // ENTRADA DE DADOS DO VETOR
  for(int i=0; i<n; i++){
    scanf("%d", &v[i]);
  }

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  menor_maior(v, n, &menor, &maior);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MENOR = %d\n", menor);
  printf("MAIOR = %d", maior);

  return(0);
}