#include<stdio.h>

struct aluno{
    char *pNome;
    int idade;
    float peso;

};

int *posicao_maior_idade(struct aluno alunos[],int qtd_alunos){
    int *pos_maior;
    for(int i=0;i<qtd_alunos;i++){
        if(i==0){
            pos_maior = &alunos[i].idade;
        }
        else if(*pos_maior < alunos[i].idade){
            pos_maior = &alunos[i].idade;
        }
    }
    return pos_maior;
}

int main(void){
    int qtd_alunos,tam_string;
    scanf("%d",&qtd_alunos);

    struct aluno alunos[qtd_alunos];
    char str_aux[50];

    for(int i = 0;i < qtd_alunos; i++){
        
        scanf(" %[^\n] ",str_aux);
        alunos[i].pNome = str_aux;
    
        scanf("%d %f", &alunos[i].idade , &alunos[i].peso);
    }
    int *posicao_maior = posicao_maior_idade(alunos,qtd_alunos);
    printf("%p\n",posicao_maior);
    return 0;
}