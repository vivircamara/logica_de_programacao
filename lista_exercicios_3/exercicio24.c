#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 20

//24)	 Faça uma função, chamada ‘cria_matriz()’, que recebe uma matriz e sua ordem (o número de linhas e o número de colunas) e preenche essa matriz com números aleatórios entre -5 e 5. Mostre a matriz preenchida com a função mostra_matriz.

int matriz[3][3] = {0};
int l;
int c;
int i;
int tam = 3;



/*int numero_aleatorio(){
    int min = -5;
    int max = 5;
    int numero_aleatorio;

    srand(time(NULL));

    numero_aleatorio = min + (rand() % (max - min +1));

    return 0;

   // printf("%d", numero_aleatorio);
}*/

void cria_matriz(){
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            matriz[l][c] = (rand() % 11) - 5; 
        }
 
    }
   
}

void mostra_matriz() {
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            printf("%4d", matriz[l][c]);
        }
        printf("\n");
    }
}

int main(){
   
    //numero_aleatorio();

    //for(i = 0; i < 9; i++){matriz[i][i] = numero_aleatorio();}

   // printf("%d", matriz[3][3]);

    /*for(l = 0; l < tam; l++){
    for(c = 0; c < tam; c++){
       
        printf("%d ", matriz[l][c]);
    }
    printf("\n");
}*/
    srand(time(NULL));

    cria_matriz();
    mostra_matriz();


    return 0;
}