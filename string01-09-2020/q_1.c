#include<stdio.h>
#include<string.h>

int tam(char string[]){
    int length = strlen(string);
    return length;
} 
int main(void){
    char str[100];
    scanf("%[^\n]",str);
    int tamanho = tam(str);
    printf("%d\n",tamanho);
    return 0;
}