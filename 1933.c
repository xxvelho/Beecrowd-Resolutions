//1933 - Tri-du

#include <stdio.h>

int main(void){
  int a, b, c;
  scanf("%d %d", &a, &b);
	
  if (a == b)
    c = a;
	else if (a > b)
    c = a;
	else
    c = b;

  printf("%d\n", c);

  return 0;
}
