#include <stdio.h>

//23)	 Faça uma função (‘mostra_matriz()’) que mostra uma matriz de ordem M x N na tela. Observe que os elementos de cada coluna deverão ficar embaixo dos elementos da linha acima. 

int matriz[3][3] = {3, 5, 6, 12, 13, 16, 18, 22, 30};
int tam = 3;
int l;
int c;

void mostra_matriz(){

    for(l = 0; l < tam; l++){
        for(c = 0; c < tam; c++){
            printf("%02.d ", matriz[l][c]);
        }
        printf("\n");
    }

}



int main(){

    mostra_matriz();

    
    return 0;
}