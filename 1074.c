// 1074 - Par ou Ímpar;

#include <stdio.h>

int main(){
int n, num, i;
scanf("%d", &n);

for(i=0;i<n;i++){
  scanf("%d", &num);
  
  if(num ==0){
    printf("NULL\n");
  }
  else if (num%2==0 && num > 0){
    printf("EVEN POSITIVE\n");
  }
  else if (num%2==0 && num < 0){
    printf("EVEN NEGATIVE\n");
  }
  else if (num%2!=0 && num > 0){
    printf("ODD POSITIVE\n");
  }
  else if (num%2!=0 && num < 0){
    printf("ODD NEGATIVE\n");
  }
}

return 0;
}
