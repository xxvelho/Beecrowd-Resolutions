// 2414 - Desafio do Maior Número;

#include <stdio.h>

int main() {
  int n, maior = 0;
  
  while (scanf("%d", &n) != EOF){
    if (n > maior){
      maior = n;
    }
  }
    
  printf("%d\n", maior);

  return 0;
}
