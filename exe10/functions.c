#include <stdio.h>
#include "functions.h"

void tabela_verdade_rec(int d, char vet[], int pos){

  if(d == 0){
    vet[pos] = '\0';
    printf("%s\n", vet);
  }
  else{
    vet[pos] = '0';
    tabela_verdade_rec(d-1, vet, pos+1);

    vet[pos] = '1';
    tabela_verdade_rec(d-1, vet, pos+1);
  }
}

void tabela_verdade(int d){
  char vet[100];

  tabela_verdade_rec(d, vet, 0);
}
