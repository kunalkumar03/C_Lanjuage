#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    printf("Before swapping: %d %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: %d %d",a,b);
    return 0;
}