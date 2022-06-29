// 1161 - Soma de Fatoriais;

#include <stdio.h>

//função recussiva fibonacci
long long int fat(int n) {
  if (n==0) return 1;
  else return n * fat(n-1);
}

int main () {
  long long int SUM;
  int M, N;
  
  while(scanf("%d %d", &M, &N) != EOF){

    SUM = (fat(M) + fat(N));
    printf("%lld\n", SUM);
    
  }
  return 0;
}
