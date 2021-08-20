#include <stdbool.h>
#include <string.h>
#include "functions.h"

bool is_palindromo_rec(char texto[], int i, int f){
  if(i >= f)
    return true;
  
  if(texto[i] != texto[f])
    return false;

  i++;
  f--;
  
  return is_palindromo_rec(texto, i, f);
}

bool is_palindromo(char texto[]){
  return is_palindromo_rec(texto, 0, strlen(texto)-1);
}
