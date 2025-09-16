#include <stdio.h>

//30)	 Faça uma função que recebe uma tabuleiro 3x3 de caracteres, como se fosse um jogo da velha, e verifica se há algum vencedor. Há vencedor se uma linha, uma coluna ou uma diagonal contém 3 vezes o mesmo elemento (‘X’ ou ‘O’). A função deverá retornar 1 se há um vencedor for ‘X’, 2 se o vencedor for ‘O’ ou zero se não houver vencedor.

/*
    C0 C1 C2
L0   
L1
L2
*/

char tabuleiro[3][3] = {
    {'O', 'O', 'X'},
    {' ', 'O', ' '},
    {'X', ' ', 'O'}
};

int i;
int l;
int c;
int tam = 3;

int vencedor(){
 for(i = 0; i < tam; i++){

        if(tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2]){
            if(tabuleiro[i][0] == 'X'){
                return 1;
                printf("Vencedor: X, pela linha");

            }
            if(tabuleiro[i][0] == 'O'){
                return 2;
                printf("Vencedor: O, pela linha");

            }
        }

        if(tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i]){
            if(tabuleiro[0][i] == 'X'){
                return 1;
                printf("Vencedor: X, pela coluna");

            }
            if(tabuleiro[0][i] == 'O'){
                return 2;
                printf("Vencedor: O, pela coluna");

            }
        }
    
        if(tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]){
            if(tabuleiro[0][0] == 'X'){
                return 1;
                printf("Vencedor: X, pela diagonal");

            }
            if(tabuleiro[0][0] == 'O'){
                return 2;
                printf("Vencedor: O, pela diagonal");

            }
        }

        if(tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]){
            if(tabuleiro[0][2] == 'X'){
                return 1;
                printf("Vencedor: X, pela diagonal");
            }
            if(tabuleiro[0][2] == 'O'){
                  printf("Vencedor: O, pela diagonal");
                  return 2;
              

            }
        }

    
    
    }

    printf("Deu velha ou nem todos os espaçoes estão preenchidos");
    return 0;

}

int main(){
     for(l = 0; l < tam; l++){
        for(c = 0; c < tam; c++){
                printf("%2.c ", tabuleiro[l][c]);
                if (c == 1 || c == 0){
                    printf("|");
            
                } 
        }
       if (l == 1 || l == 0 ){
        printf("\n---+---+---\n");
       }

    }

   printf("\n%d", vencedor());

   //tentei printar dentro da função vencedor uma resposta escrita de qual foi o vencedor, mas não deu certo :///
   

    return 0;
    
}