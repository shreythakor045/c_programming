#include<stdio.h>
int main()
{
    float a,b;
    printf("enter the temperature in fehrenheit:");
    scanf("%f",&a);
    b=(a-32)*5/9;
    printf("the temperature in celsius is:%.2f",b);
    return 0;
}