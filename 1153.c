//1153 - Fatorial Simples

#include <stdio.h>

int main(){
  int fatorial = 1;
  int n = 0;
  scanf("%d", &n);
  
  while (n > 1){
    fatorial *= n;
    n--;
  }

  printf("%d\n", fatorial);
   
  return 0;
}
