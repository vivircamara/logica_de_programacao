#include <stdio.h>

//14)	 Crie uma matriz 3x3 de números e mostre a soma dos valores de cada linha e a soma dos valores de cada coluna;


int l;
int c;
int tam = 3;
int soma_l;
int soma_c;

int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};


int main() {
    
       printf("Matriz 3x3:\n");
    for(l = 0; l < tam; l++) {
        for(c = 0; c < tam; c++) {
            printf("%d ", matriz[l][c]);
        }
        printf("\n"); 
    }
    printf("\nSoma das linhas e colunas:\n");

    for(l = 0; l < tam; l++) {
        soma_l = 0;
        for(c = 0; c < tam; c++) {
           soma_l += matriz[l][c]; 
           
        }

        printf("Linha %d: %d\n", l + 1, soma_l);
    }

     for (c = 0; c < 3; c++) {
        soma_c = 0;
        for ( l = 0; l < 3; l++) {
            soma_c += matriz[l][c];
        }
        printf("Coluna %d: %d\n", c + 1, soma_c);
    }

    return 0;
}