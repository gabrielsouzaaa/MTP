#include <stdio.h>

int main () {
    int numero;
    printf(" digite um numero: \n");
    scanf("%d", &numero);
    if(numero % 2 == 0)
        printf("o numero e par");
    else
        printf("o numero e impar");
    if(numero%3 == 0)
        printf("o numero e multiplo de 3 \n");
    if(numero%5 == 0)
        printf("o numero e multiplo de 5\n");
    if(numero%7 == 0)
        printf("o numero e multiplo de 7\n");
    return 0;
}
