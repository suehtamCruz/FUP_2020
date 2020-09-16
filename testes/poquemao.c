#include<stdio.h>
int menor(int a , int b , int c){
    int menorNum = 0;
    int nums[3]= {a,b,c};
    for(int i = 0 ; i<3;i++){
        if(i==0){
            menorNum = nums[i];
        };
        if(nums[i] < menorNum){
            menorNum = nums[i];
        };
    }
    return menorNum;
}

int poquemao(int doce , int p1, int p2, int p3){
    int cont = 0;
    int res = 0;
    int menorPoq = menor(p1,p2,p3);
    if(doce - menorPoq < 0 ){
        return cont;
    }else{
        if(doce - menorPoq > 0){
            cont++;
            doce -= menorPoq;
        }
        if(doce - ((p1+p2+p3) - menorPoq) >=0){
            cont+=2;
            doce-= ((p1+p2+p3) - menorPoq);
        }
        if(doce - ((p1+p2+p3) - (menorPoq  ))){

        }
    }   
    return cont;
}

int main(void){

    return 0;
}