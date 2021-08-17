
#include "functions.h"

int menor(int v[], int n){
  int men;
  men = v[0];

  for(int i=1; i<n; i++){

    if(v[i] < men)
      men = v[i];
      
  }
  return men;
}
