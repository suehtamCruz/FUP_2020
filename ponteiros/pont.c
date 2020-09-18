#include<stdio.h>

float main(void){

    float num;
    float res;
    scanf("%f",&num);
    res = (num/2) * 2;
    float *pnum = &num;
    float *pres = &res;

    *pnum== *pres ? printf("iguais e posicao num:%d e posicao res:%d ",(int)pnum,(int)pres) : printf("diferentes");

    return 0;
}