#include<stdio.h>
int somaMult() {
    int soma = 0;

    for (int i = 0 ; i<=200 ; i++) {
        i%3==0 && i%7!=0 ?soma+=i:0;
    }
    return soma;
}
int main(void) {

    printf("\n%d\n", somaMult());
    return 0;
}