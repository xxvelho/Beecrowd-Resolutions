// 3302 - Resposta Certa;

#include <stdio.h>

int main(void) {
  int n, i;
  scanf("%d", &n);
  
  for(i=1;i<=n;i++){
    int num;
    scanf("%d", &num);
    printf("resposta %d: %d\n", i, num);
  }
  
return 0;
}
