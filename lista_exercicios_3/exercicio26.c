#include <stdio.h>

//26)	 Faça uma função que recebe 3 matrizes (A, B e Soma), a ordem dessas matrizes e efetua a soma de A e B e armazene o resultado na matriz Soma. Teste sua função utilizando a função ‘cria_matriz()’ e a função ‘mostra_matriz()’.

int A[3][3] = {3, 8, 14, 18, 20, 23, 24, 25, 30};
int B[3][3] = {6, 9, 12, 19, 22, 23, 24, 26, 29};
int soma[3][3];
int l;
int c;
int tam = 3;


int soma_matrizes(){

    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
          soma[l][c] = A[l][c] + B[l][c];
 
        }
   
    }
    return 0;

}

int cria_matriz(){
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            //resultado[l][c] = A[i][i] * escalar;
            soma[l][c] = soma_matrizes();
 
        }
   
    }
    return 0;
}

void mostra_matriz() {
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            printf("%4d", soma[l][c]);
        }
        printf("\n");
    }
}


int main(){

    soma_matrizes();
    mostra_matriz();

    return 0;
}