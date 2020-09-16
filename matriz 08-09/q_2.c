#include<stdio.h>

void preenche0(int m[][20]){
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            m[i][j] = 0;
        }
    }
} 

int main(void){
    int mat[20][20];
    preenche0(mat);
    
    for(int i=0;i<20;i++){
       mat[i][i] = 1;
    }
    
    return 0;   
}