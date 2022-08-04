//1178 - Preenchimento de Vetor III

#include <stdio.h>

int main (){
  double num, vetor[100];
  scanf("%lf", &num);
 
  for(int i=0; i<100; i++){
    vetor[i] = num;
    printf("N[%d] = %.4lf\n", i, vetor[i]);
    num/=2;
  }
  
  
  return 0;
}
