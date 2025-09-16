#include <stdio.h>

int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int l;
int c;
int tam = 3;

int main(){
    //tentativa usando o if
    /*for(l = 0; l < tam; l++){
        for(c = 0; c < tam; c++){
            //if(c=1, l =1){}
                printf("%d | ", matriz[l][c]);
            if(c = 2)
            {      
               printf("| %d ", matriz[l][c]);

            }
            
        }
        printf("\n---+---+---\n");
    }*/

    printf("Primeira tentiva, sem usar o if:");
    for(l = 0; l < tam; l++){
        for(c = 0; c < tam; c++){
            //if(c=1, l =1){}
                printf("%d | ", matriz[l][c]);
            
        }
        printf("\n---+---+---\n");

    }

    printf("Utilizando o if:\n\n\n");

     for(l = 0; l < tam; l++){
        for(c = 0; c < tam; c++){
            //if(c=1, l =1){}
                printf("% d ", matriz[l][c]);
                if (c < 2){
                    printf("|");
            
                } 
        }
       if (l < 2){
        printf("\n---+---+---\n");
       }

    }


    return 0;
}