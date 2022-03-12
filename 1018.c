/*
  autor: Elivelton Bouteille;
  nome: 1018 - Cédulas;
*/

#include <stdio.h>

int main(void) {

int i,cem=0, ciquenta=0, vinte=0, dez=0, cinco=0, dois=0, um=0;

long long int n;

scanf("%lld", &n);

printf("%lld\n", n);

for(i=1;i<n;i++){
  if(i%100==0){
  cem+=1;
  }
}
n-=(cem*100);

for(i=1;i<n;i++){
  if(i%50==0){
  ciquenta+=1;
  }
}
n-=(ciquenta*50);

for(i=1;i<n;i++){
  if(i%20==0){
  vinte+=1;
  }
}
n-=(vinte*20);

for(i=1;i<n;i++){
  if(i%10==0){
  dez+=1;
  }
}
n-=(dez*10);

for(i=1;i<n;i++){
  if(i%5==0){
  cinco+=1;
  }
}
n-=(cinco*5);

for(i=1;i<n+1;i++){
  if(i%2==0){
  dois+=1;
  }
}
n-=(dois*2);

um+=n;


printf("%d nota(s) de R$ 100,00\n", cem);
printf("%d nota(s) de R$ 50,00\n", ciquenta);
printf("%d nota(s) de R$ 20,00\n", vinte);
printf("%d nota(s) de R$ 10,00\n", dez);
printf("%d nota(s) de R$ 5,00\n", cinco);
printf("%d nota(s) de R$ 2,00\n", dois);
printf("%d nota(s) de R$ 1,00\n", um);

return 0;
}
