#include<stdio.h>
#include<math.h>
int main()
{
   float l,b,a,c,x,r,z;
     printf("Enter the value of length:\n");
     printf("Enter the value of breath:\n");
     printf("Enter the value of radius:\n");
    scanf("%f %f %f",&l,&b,&r);
    a=l*b;
    c=2*(l+b);
    x=3.14*r*r;
    z=2*3.14*r;
    printf("the area of Rectangle is %f\n",a);
    printf("the Circumfrence of Rectangle is %f\n",c);
    printf("the area of circle is %f\n",x);
    printf("the circumfrence of circle is %f\n",z);
    return 0;
}