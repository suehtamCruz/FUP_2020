#include<stdio.h>

struct aluno{
    char *pNome;
    int idade;
    float peso;

};

int soma_idades(struct aluno alunos[],int qtd){
    int soma=0;
    for(int i = 0; i < qtd ; i++){
        soma+= alunos[i].idade;
    }
    return soma;
}


int main(void){
    int qtd_alunos;
    scanf("%d",&qtd_alunos);

    struct aluno alunos[qtd_alunos];
    char str_aux[50];

    for(int i = 0;i < qtd_alunos; i++){
        
        scanf(" %[^\n] ",str_aux);
        alunos[i].pNome = str_aux;
    
        scanf("%d %f", &alunos[i].idade , &alunos[i].peso);
    }
    int soma = soma_idades(alunos,qtd_alunos);
    printf("\n%d anos no total",soma);
    return 0;
}