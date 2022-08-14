//1151 - Fibonacci Fácil 

#include <stdio.h>

int main (){
  int num, a = 0, b = 1, fib = 0;
  scanf("%d", &num);

  printf("%d ", a);
  for (int i=2; i<num; i++){
    a = b;
    b = fib;
    fib = a + b;
    printf("%d ", fib);
  }
  printf("%d\n", fib+b);

  return 0;
}
