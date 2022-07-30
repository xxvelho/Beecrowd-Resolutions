//2172 - Evento

#include <stdio.h>

int main(){
  long int x , m;
  
  do{
    scanf("%ld %ld", &x, &m);
    
    if(x>0 && x<=3)
      printf("%ld\n", x*m);
    
  }while(x!=0 && m!=0);
  
  return 0;
}
