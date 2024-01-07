#include<stdio.h>
#include<math.h>
int main()
{
    double a,square_root,cube_root;
    printf("Enter a value: ");
    scanf("%lf",&a);
    square_root=sqrt(a);
    cube_root=cbrt(a);
    printf("square_root=%lf\n",square_root);
    printf("cube_root=%lf",cube_root);
    return 0;
}