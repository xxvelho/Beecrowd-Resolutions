//1165 - Número Primo

#include <stdio.h>

int main (){
  int n, num;
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    scanf("%d", &num);
    
    int flag = 0;   
    for(int j=2; j<num; j++)
      if(num%j==0)
        flag++;
    
    if(flag)
      printf("%d nao eh primo\n", num);
    else
      printf("%d eh primo\n", num);
  
  }
  
  return 0;
}
