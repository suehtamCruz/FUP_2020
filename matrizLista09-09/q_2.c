#include<stdio.h>

void sumMat(int m[][4],int n[][4],int r[][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            r[i][j] = m[i][j] + n[i][j];
        }
    }
}

int main(void){
    int m[4][4],n[4][4],r[4][4];
    printf("m\n");

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&m[i][j]);
        }
    }
    printf("\nn:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&n[i][j]);
        }
    }
    sumMat(m,n,r);
    return 0;
}