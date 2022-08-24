//3047 - A idade de Dona Mônica 

#include <stdio.h>

int main(){

    int monica, a, b, mais_velho;

    scanf("%d %d %d", &monica, &a, &b);
    
    mais_velho = monica - a - b;

    if (mais_velho > a && mais_velho > b)
        printf("%d\n", mais_velho);
    else if (a > b && a > mais_velho)
        printf("%d\n", a);
    else
        printf("%d\n", b);

    return 0;

}
