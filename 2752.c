//2752 - Saída 6

#include <stdio.h>

int main(){
    char var[50]="AMO FAZER EXERCICIO NO URI";

    printf("<%s>\n", var);
    printf("<%30s>\n", var);
    printf("<%.20s>\n", var);
    printf("<%-20s>\n", var);
    printf("<%-30s>\n", var);
    printf("<%.30s>\n", var);
    printf("<%30.20s>\n", var);
    printf("<%-30.20s>\n", var);

    return 0;
}
