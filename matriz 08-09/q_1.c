#include<stdio.h>

void preenche1(int m[][20]){
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            m[i][j] = 1;
        }
    }
}   

int main(void){
    int mat[20][20];
    preenche1(mat);
    return 0;
}