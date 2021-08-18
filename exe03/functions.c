
#include "functions.h"

void menor_maior(int v[], int n, int *menor, int *maior){
  int men, mai;
  men = v[0];
  mai = v[0];

  for(int i=1; i<n; i++){

    if(v[i] < men){
      men = v[i];
    }
    if(v[i] > mai){
      mai = v[i];
    }

  }
  *menor = men;
  *maior = mai;
}
