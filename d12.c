#include<stdio.h>
int main()
{
    float a,b;
    printf("weight in kilograms:");
    scanf("%f",&a);
    b = a * 1000;
    printf("weight in grams:%.2f\n",b);
    return 0;


}