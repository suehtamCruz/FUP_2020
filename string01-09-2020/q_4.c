#include<stdio.h>
#include<string.h>
#include<ctype.h>
//islower()
int vet[100];

void maiuscula(char str[],int tam){
    vet[100]=0;
    for(int i=0;i<tam;i++){
        vet[i] = isupper(str[i]);
    }

}

int main(void){
    
    char string[100];
    scanf("%[^\n]",string);
    int length = strlen(string);
    
    maiuscula(string,length);
   
    int cont=0;

    for(int i=0;i<length;i++){
        if(vet[i] == 0){
            cont++;
        }
    }
    cont!=0 ? printf("false\n") : printf("true\n");

    return 0;
}