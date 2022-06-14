// 1075 - Resto 2;

#include <stdio.h>

int main (){
  int num, i;
  scanf("%d", &num);

  for(i = 0; i < 10000; i++){
    if(i%num==2){
      printf("%d\n", i);
    }
  }  

  return 0;
}
