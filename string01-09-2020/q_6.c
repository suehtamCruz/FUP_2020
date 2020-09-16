#include<stdio.h>
#include<string.h>

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
    char string1[100];
    char string2[100];
    scanf("%[^\n] ",string1);
    scanf("%[^\n]",string2);

    int maiorLength = maiorTam(string1,string2);
    printf("%d\n",maiorLength);
    return 0;
}