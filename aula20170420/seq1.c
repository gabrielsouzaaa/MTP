#include <stdio.h>
void safeFlush() {
    char c;
    while((c= getchar()) != EOF && c != '\n');
}
int main() {
    float lado;
    float area;
    printf("entre com o lado do quadrado: ");
    scanf ("%f",&lado);
    safeFlush();
    area = lado*lado;
    printf ( "A area do quadrado e: %g", area);
return 0;
}
