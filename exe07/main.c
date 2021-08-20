#include <stdio.h>
#include "functions.h"

int main() {

  int a, b, MDC;
  
  // ENTRADA DE DADOS
  scanf("%d %d", &a, &b);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  MDC = mdc(a, b);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MDC = %d\n", MDC);

  return(0);
}