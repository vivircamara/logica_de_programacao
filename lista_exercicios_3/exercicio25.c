#include <stdio.h>

//25)	 Faça uma função chamada ‘mult_por_escalar()’ que recebe duas matrizes (A e Resultado), a ordem da matriz A e um escalar (número real). A função deverá efetuar o produto desse escalar por cada elemento da matriz e armazenar na matriz Resultado. Teste sua função utilizando as funções ‘cria_matriz()’ e ‘mostra_matriz()’

int A[3][3] = {4, 8, 10, 11, 12, 14, 17, 18, 21};
int resultado[3][3];
int escalar = 4;
int l;
int c;
int i;
int num;
int tam = 3;

int mult_por_escalar(){

    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
          resultado[l][c] = A[l][c] * escalar;
 
        }
   
    }

    //printf("%d", num);
    return 0; 

}

void cria_matriz(){
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            //resultado[l][c] = A[i][i] * escalar;
            resultado[l][c] = mult_por_escalar();
 
        }
   
    }
}

void mostra_matriz() {
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            printf("%4d", resultado[l][c]);
        }
        printf("\n");
    }
}



int main(){
    
    mult_por_escalar();
    cria_matriz();
    mostra_matriz();

    return 0;
}