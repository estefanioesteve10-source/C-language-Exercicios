#include <stdio.h>

int main() {
    int peers[50];
    int a = 0;

    // Preenchendo o array (corrigindo a lógica do índice)
    for(int i = 0; i < 100; i++) {
        if(i % 2 == 0) {
            peers[a] = i;
            a++; 
        }
    }

    // IMPRESSÃO FORMATADA
    printf("{"); // Abre a chave no início
    for(int i = 0; i < a; i++) {
        printf("%d", peers[i]); // Imprime o número
        
        // Só imprime a vírgula se NÃO for o último elemento
        if(i < a - 1) {
            printf(", ");
        }
    }
    printf("}\n"); // Fecha a chave e pula linha no fim

    return 0;
}