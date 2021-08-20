#include <stdio.h>
#include "functions.h"

int main() {

  int a, b, p;
  
  // ENTRADA DE DADOS
  scanf("%d %d", &a, &b);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  p = potencia(a, b);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("%d\n", p);

  return(0);
}