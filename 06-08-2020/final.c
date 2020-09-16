#include<stdio.h>
#include<math.h>
int main(void) {

    //questao 1
    int num=0, fator=1;
    scanf("%d", &num);
    for (int i=0;i<=num;i++) {

        i==0 ? fator*=1 : i!=0 ? fator*=i : 0;

    }
    printf("\n%d", fator);

    //questao 2
    int num=0;
    scanf("%d", &num);
    if (num%num==0 && num%1==0) {
        if (num == 1 || num == 2 || num == 3 || num == 5) {
            printf("\n'Primo");
        }
        else {
            (num%2!=0 && num%3!=0 && num%5!=0)?printf("\nPrimo"):printf("\nNao primo");
        }
    }

    //questao 3
    int qtd=0;
    for (int i=0;i<=1000;i++) {
        i%2==0 && i%5==0 && i%6!=0?qtd++:0;
    };
    printf("\n%d numeros", qtd);

    //questao 4
    int num;
    float harmonico;
    scanf("%d", &num);

    for (float i=1;i<=num;i++) {
        harmonico += (1/i);
    };
    printf("%0.4f", harmonico);

    //questao 5
    int base, exp;
    scanf("%d%d", &base, &exp);
    int res = pow(base, exp);
    printf("\n%d", res);

    //questao 6

    float num=0;
    scanf("%f", &num);
    float isQuad = pow(num, 0.5);

    ceil(isQuad)==isQuad && floor(isQuad)==isQuad ?printf("\neh quadrado"):printf("nao eh quadrado");

    //questao 7

    int num, nsimo=1;
    scanf("%d", &num);
    for (int i=0;i<num;i++) {
        nsimo*=2;
    }
    printf("\n%d", nsimo-1);
    return 0;
}