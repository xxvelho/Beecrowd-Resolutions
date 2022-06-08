// 1020 - Idade em Dias;

#include <stdio.h>

int main(void) {

int dia, mes, ano;

scanf("%d", &dia);

ano = dia / 365;
dia-=(365*ano);

mes = dia / 30;
dia-=(30*mes);

printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes,dia);

return 0;
}
