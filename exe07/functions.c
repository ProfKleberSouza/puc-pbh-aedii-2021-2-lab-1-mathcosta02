
#include "functions.h"

int mdc(int x, int y){
  int resto;

  if(y==0){
    return x;
  }
  else{
    return mdc(y, x % y);
  }
}
