#include <stdio.h>
#include <cs50.h>
int main(void) {
    string nome = get_string("Qual e o seu nome? ");
    printf("Ola, %s\n", nome);
    return 0;
}