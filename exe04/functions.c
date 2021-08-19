#include <stdio.h>
#include <ctype.h>
#include "functions.h"

void numero_vogais(char texto[]){
  int i=0, contA=0, contE=0, contI=0, contO=0, contU=0;

  while(texto[i] != '\0'){
    texto[i] = toupper(texto[i]);
    if(texto[i] == 'A'){
      contA++;
    }
    if(texto[i] == 'E'){
      contE++;
    }
    if(texto[i] == 'I'){
      contI++;
    }
    if(texto[i] == 'O'){
      contO++;
    }
    if(texto[i] == 'U'){
      contU++;
    }
    i++;
  }

  printf("A = %d\n", contA);
  printf("E = %d\n", contE);
  printf("I = %d\n", contI);
  printf("O = %d\n", contO);
  printf("U = %d\n", contU);
}
