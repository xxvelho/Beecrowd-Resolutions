// 1078 - Tabuada;

#include <stdio.h>

int main() {
  int i, num;
  scanf("%d", &num);

  if(num>2 && num<1000){
    for(i=1;i<11;i++){
      printf("%d x %d = %d\n",i, num, num*i);
    }
  }

return 0;
}
