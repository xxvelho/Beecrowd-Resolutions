//1146 - Sequências Crescentes 

#include <stdio.h>

int main (){
  int num;
  scanf("%d", &num);
  
  while (num != 0){
    for(int i=1; i<num; i++){
      printf("%d ", i);
    }
    printf("%d\n", num);
    
    scanf("%d", &num);
  }
  
  return 0;
}
