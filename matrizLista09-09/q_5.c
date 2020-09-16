#include<stdio.h>

int menorInMatriz(int m[][8]){
    int menor=0;
    
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){

            if(i==0 && j==0){
                menor = m[i][j];
            }
            if(m[i][j] < menor){
                menor = m[i][j];
            }

        }
    }
    
    return menor;
}

int main(void){
    int mat[8][8];

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int menor = menorInMatriz(mat);
    printf("\n%d\n",menor);
    return 0;
}