#include <stdio.h>
#include "functions.h"

int main() {

  char texto[50];
  
  // ENTRADA DE DADOS
  gets(texto);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  numero_vogais(texto);

  return(0);
}