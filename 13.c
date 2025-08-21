#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the bytes:");
    scanf("%f",&a);
    b = a / 1024;
    c = b / 1024;
    printf("kb:%f\n",b);
    printf("mb:%f\n",c);
    return 0;
}