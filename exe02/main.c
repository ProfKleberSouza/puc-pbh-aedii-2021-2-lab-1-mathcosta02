#include <stdio.h>
#include "functions.h"

int main() {

  int n, m;

  // ENTRADA DO TAMANHO DO VETOR
  scanf("%d", &n);

  int v[n];
  // ENTRADA DE DADOS DO VETOR
  for(int i=0; i<n; i++){
    scanf("%d", &v[i]);
  }

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  m = menor(v, n);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MENOR = %d\n", m);

  return(0);
}