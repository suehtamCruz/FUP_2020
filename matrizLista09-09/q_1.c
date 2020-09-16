#include<stdio.h>

int main(void){
    int lin,col;

    printf("lin\n");
    scanf("%d",&lin);
    printf("col\n");
    scanf("%d",&col);

    int m[lin][col];
    for(int i=0;i<lin;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&m[i][j]);
        }
    }
    lin==col?printf("Simetrica\n"):printf("Nao simetrica\n");

    
    return 0;
}