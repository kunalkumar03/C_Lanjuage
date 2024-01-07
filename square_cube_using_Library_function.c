#include<stdio.h>
#include<math.h>
int main()
{
    double a,square,cube;
    printf("Enter a value: ");
    scanf("%lf",&a);
    square=pow(a,2);
    cube=pow(a,3);
    printf("square=%lf\n",square);
    printf("cube=%lf",cube);
    return 0;
}