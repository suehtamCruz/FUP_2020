#include<stdio.h>
#include<string.h>
#include<ctype.h>

int tam(char string[]){
    int length = strlen(string);
    return length;
} 

int compareString(char str1[],char str2[]){
    int isEqual = strcmp(str1,str2);
    return isEqual;
}

int vet[100];

void minuscula(char str[],int tam){
    vet[100]=0;
    for(int i=0;i<tam;i++){
        vet[i] = islower(str[i]);
    }

}
void maiuscula(char str[],int tam){
    vet[100]=0;
    for(int i=0;i<tam;i++){
        vet[i] = isupper(str[i]);
    }

}   
int haveSpace(char str[]){
    int tam = strlen(str);
    int cont=0;
    for(int i=0;i<tam;i++){
        if(str[i]==' '){
            cont++;
        }
    }
    return cont;
}
int maiorTam(char str1[] ,char str2[]){
    int lengths[2];
    lengths[0] = strlen(str1); 
    lengths[1] = strlen(str2);
    int maior;
    if(lengths[0] == lengths[1]){
        return 0;
    }else{
          for(int i=0;i<2;i++){
        if(i==0){
            maior = lengths[i];
        }
        if(lengths[i]>maior){
            maior = lengths[i];
        }
    }
    }
    return maior;
}

int main(void){

    //////////////questao 1//////////////////
        // char str[100];
        // scanf("%[^\n]",str);
        // int tamanho = tam(str);
        // printf("%d\n",tamanho);



    //////////////questao 2//////////////////
        //  char string1[100],string2[100];
        // scanf("%[^\n] ",string1);
        // scanf("%[^\n]",string2);

        // if(compareString(string1,string2) == 0){
        //     printf("VERDADEIRO\n");
        // }else{
        //     printf("FALSO\n");
        // }



    //////////////questao 3//////////////////
        //  char string[100];
        // scanf("%[^\n]",string);
        // int length = strlen(string);
        
        // minuscula(string,length);
    
        // int cont=0;

        // for(int i=0;i<length;i++){
        //     if(vet[i] == 0){
        //         cont++;
        //     }
        // }
        // cont!=0 ? printf("false\n") : printf("true\n");



    //////////////questao 4//////////////////
        //   char string[100];
        // scanf("%[^\n]",string);
        // int length = strlen(string);
        
        // maiuscula(string,length);
    
        // int cont=0;

        // for(int i=0;i<length;i++){
        //     if(vet[i] == 0){
        //         cont++;
        //     }
        // }
        // cont!=0 ? printf("false\n") : printf("true\n");



    //////////////questao 5//////////////////
        //   char string[100];
        //     scanf("%[^\n]",string);
        //     int space = haveSpace(string);
        //     space >0 ? printf("true\n") : printf("false\n");


        
    //////////////questao 6//////////////////
        //    char string1[100];
        // char string2[100];
        // scanf("%[^\n] ",string1);
        // scanf("%[^\n]",string2);

        // int maiorLength = maiorTam(string1,string2);
        // printf("%d\n",maiorLength);

    return 0;
}