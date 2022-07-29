//3046 - Dominó

#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  
  int saida = ((n+1)*(n+2))/2;
  printf("%d\n", saida);
  
  return 0;
}
