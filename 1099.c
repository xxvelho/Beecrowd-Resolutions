// 1099 - Soma de Ímpares Consecutivos II;

#include <stdio.h>

int main(void) {
  int n, i;
  scanf("%d", &n);

  for(i = 0; i<n; i++){
    int i, a,b,aux,soma = 0;
    scanf("%d %d", &a, &b);
    if(a>b){
      aux = a;
      a = b;
      b = aux;
    }
    for(i=a+1; i<b; i++){
      if(i%2!=0){
        soma += i;
      }
    }
    printf("%d\n", soma);
  }

  return 0;
}
