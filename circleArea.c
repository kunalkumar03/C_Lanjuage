#include<stdio.h>
int main()
{
    float r,area,circumference;
    printf("Enter the value of radius: ");
    scanf("%f",&r);
    area=3.14*r*r;
    circumference=2*3.14*r;
    printf("Area=%f  Circumference=%f",area,circumference);
    return 0;
}
//area=3.14*r*r;
//circumference=2*3.14*r;