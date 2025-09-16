#include <stdio.h>

int l;
int c;
int tam = 3;

char tabuleiro[3][3] = {'X', 'O', 'X', ' ', 'O', ' ', 'X', ' ', 'O'};



void mostra_tabuleiro(){
      for(l = 0; l < tam; l++){
        for(c = 0; c < tam; c++){
            //if(c=1, l =1){}
                printf("%2.c ", tabuleiro[l][c]);
                if (c == 1 || c == 0){
                    printf("|");
            
                } 
        }
       if (l == 1 || l == 0 ){
        printf("\n---+---+---\n");
       }

    }
}

int main(){

    mostra_tabuleiro();


    return 0;
}