#include <stdio.h>
void safeFlush() {
    char c;
    while((c= getchar()) != EOF && c != '\n');
}
int main() {
    float base, altura, area;
    printf("digite a base e altura do paralelogramo");
    scanf ("%f", &base);
    safeFlush();
    scanf("%f", &altura);
    area= base*altura;
    printf("A area do paralelogramo e: %g", area);

return 0;
}
