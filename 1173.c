//1173 - Preenchimento de Vetor I

#include <stdio.h>

int main (){
  int num, vetor[10];
  scanf("%d", &num);

  for(int i=0; i<10; i++){
    vetor[i] = num;
    printf("N[%d] = %d\n", i, vetor[i]);
    num*=2;
  }

  return 0;
}
