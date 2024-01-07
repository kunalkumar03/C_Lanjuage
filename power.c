#include<stdio.h>
int main()
{
    int a,square,cube;
    printf("Enter a value: ");
    scanf("%d",&a);
    square=a*a;
    cube=a*a*a;
    printf("square=%d\n",square);
    printf("cube=%d",cube);
    return 0;
}