#include<stdio.h>
int main()
{
int a;
printf("Enter a number: ");
scanf("%d",&a);//4
if(a%2==0)//if(4%2==0)....0==0
{
    printf("Even number");
}
else
{
    printf("Odd number");
}
return 0;
}