#include <stdio.h>
#include <stdbool.h>
#include "functions.h"

int main() {

  char palavra[20];
  int x;

  // ENTRADA DE DADOS
  gets(palavra);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  x = is_palindromo(palavra);

  // SAIDA - IMPRIMINDO O RESULTADO
  if(x == 1){
    printf("SIM");
  }
  else{
    printf("NAO");
  }

  return(0);
}