#include<stdio.h>
#include<string.h>

int big(char str1[],char str2[]){
    int tam1 = strlen(str1);
    int tam2 = strlen(str2);

    if(tam1==tam2){
        return 0;
    }else{
        if(tam1>tam2){
            return tam1;
        }
        if(tam2>tam1){
            return tam2;
        }
    }   
}

int main(void){
    char str1[100],str2[100];
    scanf("%[^\n] ",str1);
    scanf("%[^\n]",str2);

    int maior = big(str1,str2);
    printf("%d\n",maior);
    return 0;
}