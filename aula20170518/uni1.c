#include <stdio.h>

union Uni {
    int i;
    float f;
};

int main() {
    char c;
    union Uni U;
    printf("Digite 'i' caso voce queira entrar com um numero inteiro ou 'f' para um flutuante: ");
    c=getchar();
    if(c=='i') {
        printf("Digite um numero: ");
        scanf("%d",&U.f);
        printf("%g\n",U.f);
    }
    else
    if(c=='f') {
        printf("Digite um numero: ");
        scanf("%f",&U.i);
        printf("%d\n",U.i);
    }
    else
        printf("Opcao invalida!\n");
    return 0;
}
