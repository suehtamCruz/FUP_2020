#include<stdio.h>

int maiorNaMatriz(int m[][4]){
    int maior=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(m[i][j]>maior){
                maior = m[i][j];
            }
        }       
    }
    return maior;

}
int main(void){
    int mat[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int maior = maiorNaMatriz(mat);
    printf("\n%d\n",maior);
    return 0;
}