#include <stdio.h>
#include <cs50.h>
#include <math.h>
float quadrado (int x) {
    return x * x;
}
int main(void) {
    float x1, x2;
    int a = get_int("Qual é o volor de a? ");
    int b = get_int("Qual é o valor de b? ");
    int c = get_int("Qual é o valor de c? ");
    x1 = (-b + sqrt (quadrado (b) - 4 * a * c)) / ( 2 * a);
    x2 = (-b - sqrt (quadrado (b) - 4 * a * c)) / ( 2 * a);

    printf("X1 é %f\n", x1);
    printf("X2 é %f\n", x2);
    return 0;
}