#include<stdio.h>

int sumAll(int m[][3]){
    int soma=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            soma+=m[i][j];
        }
    }
    return soma;
}

int main(void){
    int mat[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int soma = sumAll(mat);
    printf("\n%d\n",soma);
    return 0;
}