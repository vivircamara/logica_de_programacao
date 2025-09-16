#include <stdio.h>

//27)	 Faça uma função chamada ‘mult_mat()’ que recebe 3 matrizes (A, B e Produto), a ordem da matriz A, a ordem da matriz B e armazene na matriz Produto a multiplicação de A por B. Caso não seja possível efetuar essa multiplicação a função deverá informar isso na tela.

int A[3][3] = {3, 12, 4, 2, 14, 15, 6, 13, 8};
int B[3][3] = {9, 10, 4, 8, 13, 14, 15, 7, 6};
int produto[3][3];
int l;
int c;
int tam = 3;

int mult_mat(){

    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
          produto[l][c] = A[l][c] * B[l][c];
 
        }
   
    }    
    return 0;
}

int cria_matriz(){
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {

            produto[l][c] = mult_mat();
 
        }
   
    }
    return 0;
}

void mostra_matriz() {
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            printf("%4d", produto[l][c]);
        }
        printf("\n");
    }
}


int main(){

    mult_mat();
    mostra_matriz();


    return 0;
}