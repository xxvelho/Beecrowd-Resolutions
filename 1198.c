//1198 - O Bravo Guerreiro Hashmat 

#include <stdio.h>

int main () {
  long long int a, b, diferenca;

  while(scanf("%lld %lld", &a, &b) != EOF){
    diferenca = a-b;
    if(diferenca < 0)
      diferenca *= -1;
    
    printf("%lld\n", diferenca);
  }

return 0;
}
