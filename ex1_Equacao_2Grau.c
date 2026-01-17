/*
* Esse programa calcula as raízes de uma equação do segundo grau
* da forma ax² + bx + c = 0, utilizando a fórmula de Bhaskara.
*/

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
    float delta = quadrado (b) - 4 * a * c;
    if (delta < 0) {
        printf("A equação não possui raízes reais\n");
        return 1;
    }
    else if (delta == 0) {
        x1 = -b / (2 * a);
        x2 = x1;
        printf("A equação possui uma raiz real: x = %.2f\n", x1);
    }
    else {
        // Duas raízes reais e distintas
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
    printf("As raízes da equação são: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    return 0;
}