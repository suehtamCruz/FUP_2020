#include<stdio.h>

int sorteados[4][4] = { 1, 4 , 23 , 12,
                        10 , 5, 22, 2 ,
                        16, 3 , 8 , 9,
                        15, 20 , 25 ,6 
                    };

int sorteio(int cart[]){
    int cont = 0;
    for(int c = 0;c<16;c++){
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(cart[c] == sorteados[i][j]){
                    cont++;
                    i=5;
                }
            }
        }
    }
    return cont;
}

int main(void){

    int cartela[16];

    for(int i=0;i<16;i++){
        scanf("%d",&cartela[i]);
    }
    int bingo = sorteio(cartela);
    printf("\n%d\n",bingo);
    return 0;
}