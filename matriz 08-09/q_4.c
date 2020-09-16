#include<stdio.h>

void inverteLinha(int m[][4],int l1[],int l4[]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==0){
                m[i][j] = l4[j];
            }
            if(i==3){
                m[i][j] = l1[j];
            }
        }
    }
}

int main(void){
    int mat[4][4];
    int linha1[4],linha4[4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&mat[i][j]);
            if(i==0){
                linha1[j]=mat[i][j];
            }
            if(i==3){
                linha4[j]=mat[i][j];
            }
        }
    }
    inverteLinha(mat,linha1,linha4);
    
    return 0;
}