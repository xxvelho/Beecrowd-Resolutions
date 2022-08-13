//1172 - Substituição em Vetor I

#include <stdio.h>

int main (){
  int vetor[10], num;

  for(int i=0; i<10; i++){
    scanf("%d", &num);
    if(num<=0){
      vetor[i] = 1;
    }
    else{
      vetor[i] = num;
    }
    printf("X[%d] = %d\n", i, vetor[i]);
  }
  
  return 0;
}
