#include<stdio.h>

int len=0;

void bigPosValue(int m[][len],int lin){

    int linMaior,colMaior,maiorVal;

    for(int i=0;i<lin;i++){
        for(int j=0;j<len;j++){
            if(i==0 && j==0){
                maiorVal = m[i][j];
            }
            if(m[i][j] > maiorVal){
                linMaior = i;
                colMaior = j;
                maiorVal = m[i][j];
            }
        }
    }
    printf("lin: %d, col: %d , value: %d ;",linMaior,colMaior,maiorVal);
}

int main(void){
    int lin,col;
    scanf("%d%d",&lin,&col);
    len = col;
    int m[lin][col];

    for(int i=0;i<lin;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&m[i][j]);
        }
    }
    bigPosValue(m,lin);
    return 0;
}