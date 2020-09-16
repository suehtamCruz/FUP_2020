#include<stdio.h>
#include<math.h>
float vol (float a , float  l , float c ){
    float res = a*c*l;

    return res;
}

float areaCaixa(float c , float a, float b){
    float res = ((2*c*a) + (2*b*c) + (2*a*b));
    return res;
}
float areaTampa(float larg, float comp){
    float res = larg*comp;
    return res;
}

int maior(int a, int b){
    int maior = 0;
    int vet[2] = {a ,b};
    for(int i=0;i<2;i++){
        if(i==0){
            maior =vet[i];
        }
        if(vet[i]>maior){
            maior = vet[i];
        }
    }
    return maior;
}

int main(void){

    //questao 1
    // float n1,n2,n3;
    // scanf("%f%f%f",&n1,&n2,&n3);
    // float media = (n1+n2+n3)/3;
    // printf("\n%0.2f",media);

    //questao 2
    // float n1,n2,n3;
    // int p1,p2,p3;
    // scanf("%f%d %f%d %f%d",&n1,&p1,&n2,&p2,&n3,&p3);
    // n1*=(float)p1;
    // n2*=(float)p2;
    // n3*=(float)p3;
    // float pondMedia = (n1+n2+n3)/(p1+p2+p3);
    // printf("\n%0.2f",pondMedia);
    
    //questao 3
    // int n;
    // scanf("%d",&n);
    // int r =  pow( n , 2);
    // printf("%d",r);
 
    //questao 4
    // float peso,altura;
    // scanf("%f%f",&peso,&altura);
    // float imc = peso/(altura*altura);
    // printf("%0.2f",imc);


    //questao 5
    // float far;
    // scanf("%f",&far);
    // float cel = (far - 32) / 1.8;
    // printf("%0.2f",cel);
   

    //questao 6 A
    // float larg,alt,comp;
    // scanf("%f%f%f",&larg,&alt,&comp);

    // float volume = vol(larg,comp,alt);
    // printf("\n%0.2f",volume);


    //questao 6 B
    // float alt,comp,larg;
    // scanf("%f%f%f",&alt,&comp,&larg);
    // float areaTotal = areaCaixa(alt,comp,larg) + areaTampa(larg,comp);
    // printf("\n%0.2f",areaTotal);

    
    //questao 7
    // int n1,n2;
    // int maiorNum = maior(n1,n2);
    // int mdc = 0;
    // scanf("%d%d",&n1,&n2);
    
    // for(int i = 1; i<=maiorNum;i++){
    //     if((n1%i ==0 && n2%i==0) &&( i>mdc)){
    //         mdc=i;
    //     }
    // }

    // printf("\n%d",mdc);


    return 0;
}
