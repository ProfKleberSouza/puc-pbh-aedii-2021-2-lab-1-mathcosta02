#include <stdio.h>
#include "functions.h"

void inverte(char texto[]){
  int contLetras=0, i=0, n;

  while(texto[i] != '\0'){
    contLetras++;
    i++;
  }
  i=0;
  n=contLetras-1;

  while(i<n){
    int aux = texto[i];
    texto[i] = texto[n];
    texto[n] = aux;

    i++;
    n--;
  }

  for(i=0; i<contLetras; i++){
    printf("%c", texto[i]);
  }

  printf("\n");
}
