#include<stdio.h>
#include<string.h>
#include<ctype.h>

int vet[100];

void minuscula(char str[],int tam){
    vet[100]=0;
    for(int i=0;i<tam;i++){
        vet[i] = islower(str[i]);
    }

}

int main(void){

    char string[100];
    scanf("%[^\n]",string);
    int length = strlen(string);
    
    minuscula(string,length);
   
    int cont=0;

    for(int i=0;i<length;i++){
        if(vet[i] == 0){
            cont++;
        }
    }
    cont!=0 ? printf("false\n") : printf("true\n");

    return 0;
}