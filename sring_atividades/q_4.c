#include<stdio.h>
#include<string.h>

void isBeggin(char menor[],char maior[]){
    int tamMenor = strlen(menor);
    int cont=0;
    for(int i=0;i<tamMenor;i++){
        if(menor[i] == maior[i]){
            cont++;
        }
    }
    cont==tamMenor ? printf("verdadeiro\n") : printf("falso\n");
}

int main(void){
    char strMenor[50],strMaior[50];
    scanf("%[^\n] ",strMenor);
    scanf("%[^\n]",strMaior);

    isBeggin(strMenor,strMaior);
    return 0;
}