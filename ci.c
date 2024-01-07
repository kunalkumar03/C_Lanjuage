#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,ci;
    printf("Enter the value of p,r and t:\n");
    scanf("%f%f%f",&p,&r,&t);
    ci=p*(pow((1+r/100),t))-p;
    printf("Compound interest is %f",ci);
    return 0;
}