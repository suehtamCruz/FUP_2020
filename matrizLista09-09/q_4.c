#include<stdio.h>

void preenhe1(int m[][20]){
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            m[i][j] = 1;
        }
    }
}

int main(void){
    int mat[20][20];
    preenhe1(mat);

    for(int i=0;i<20;i++){
        mat[i][i] = 0;
    }
    return 0;
}