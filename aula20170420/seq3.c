#include<stdio.h>

int main() {
    float A, B, C, D, E,media;
    printf(" Digite as notas A, B, C, D,E");
    scanf("%g %g %g %g %g", &A,&B,&C, &D, &E);
    media= (2*A+2*B+2*C+3*D+5*E)/14;
    printf("a media ponderada e: %f\n", media);
    return 0;
}
