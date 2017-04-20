#include<stdio.h>
int main() {
    int i, fatorial, numero;
    printf("entre com um numero inteiro");
    scanf("%d", &numero);
    fatorial=1;
    for(i=2; i<= numero;i++)
        fatorial=fatorial*i;
    printf("fatorial: %d\n", fatorial);
    return 0;
}
