#include<stdio.h>
#include<string.h>

int compareString(char str1[],char str2[]){
    int isEqual = strcmp(str1,str2);
    return isEqual;
}

int main(void){
    char string1[100],string2[100];
    scanf("%[^\n] ",string1);
    scanf("%[^\n]",string2);

    if(compareString(string1,string2) == 0){
        printf("VERDADEIRO\n");
    }else{
        printf("FALSO\n");
    }
    return 0;
}