#include<stdio.h>

int main(void){

    int tam,soma=0;
    scanf("%d",&tam);
    int input[tam];

    for(int i = 0; i < tam ; i++){
        scanf("%d",&input[i]);

        if( input[i] == 1 && (soma + 11 ) < 21 ){
            soma=+11;
        }
        else if(input[i]==11|| input[i]==12 || input[i]==13){
            soma+=10;

        }else{
            soma+=input[i];
        }
    };
    printf("\n%d\n",soma);
    return 0;
}