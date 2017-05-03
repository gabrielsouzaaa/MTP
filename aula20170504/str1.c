#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <ctype.h>
#define NCHAR 256
int main(){
    int i;
    char frase [NCHAR];
    printf ("entre com uma frase: \n");
    fgets (frase, NCHAR, stdin);
    frase [ strlen (frase)-1]= '\0';
    for (i=0 ; i<NCHAR; i++)
        frase[i]= toupper(frase[i]);
    printf ("tamanho da string: %u\n", strlen( frase));
    if ( strncmp (frase, "bom dia", 7) ==0)
        printf( "bom dia pra voce tambem!\n");
    else
        printf("voce quer dizer: \"%s\"?\n", frase);
    return 0;

}
