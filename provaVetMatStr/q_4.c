#include<stdio.h>
#include<string.h>

void isAnagram(char p1[], char p2[], int tam){
    int cont=0;
    int is;
    int tamAna = tam;
    for(int i=0;i<tam;i++){
        for(int j=0;j<tamAna;j++){
            if(p1[i]==p2[j]){
                cont++;
                j=tamAna+1;
            }
        }
    }
    cont == tam ? printf("true") : printf("false");
}

int main(void){

    char p1[100],p2[100];
    
    scanf("%[^\n] ",p1);
    scanf("%[^\n]",p2);

    int tam= 0;
    tam = strlen(p1);
    isAnagram(p1,p2,tam);
    return 0;
}