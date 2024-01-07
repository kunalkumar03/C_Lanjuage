#include<stdio.h>
int main()
{
    int l,b,area,perimeter;
    printf("Enter the value of length and width: ");
    scanf("%d%d",&l,&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("Area of rectangle=%d\n",area);
    printf("Perimeter of rectangle=%d",perimeter);
    
    return 0;
}