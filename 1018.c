// 1018 - Cédulas;

#include <stdio.h>

int main(void) {

int cem, ciquenta, vinte, dez, cinco, dois, um;

long long int n;

scanf("%lld", &n);

printf("%lld\n", n);

cem = n / 100;
n-=(cem*100);

ciquenta = n / 50;
n-=(ciquenta*50);

vinte = n / 20;
n-=(vinte*20);

dez = n / 10;
n-=(dez*10);

cinco = n / 5;
n-=(cinco*5);

dois = n / 2;
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
