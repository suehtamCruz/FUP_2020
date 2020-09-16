#include<stdio.h>

int main(void) {
    //questao1
    int soma =0;
    for (int i =0; i<=10;i++) {
        soma+=i;
    };
    printf("\n%d\n", soma);

    //questao 2
    int det, soma=0;

    scanf("%d", &det);

    for (int i = 0;i<=det;i++) {
        soma+=i;
    };

    printf("\n%d\n", soma);
    //questao 3
    int det, somaPar = 0;
    scanf("%d", &det);

    for (int i=0;i<=det;i++) {
        i%2==0?somaPar+=i:0;
    };

    printf("\n%d\n", somaPar);

    //questao 4
    int somaMult() {
        int soma = 0;

        for (int i = 0; i<=200; i++) {
            i%3==0 && i%7!=0 ?soma+=i:0;
        }
        return soma;
    }
    int main(void) {

        printf("\n%d\n", somaMult());

        return 0;
    };
    //questao 5
    
    int seg=0,bac=1;
    scanf("%d",&seg);
    for(int i=0;i<seg;i++){
        bac*=2;
    };

    printf("\n%d\n",bac);
}