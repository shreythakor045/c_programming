#include<stdio.h>
int main()
{
    float a,b;
    printf("enter the temperature in celsius:");
    scanf("%f",&a);
    b = (a*9/5)+32;
    printf("temperature in fahrenheit is :%.2f\n",b);
    return 0;

}