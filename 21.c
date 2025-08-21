#include <stdio.h>
int main()
{
    float a,b,c,d;
    printf("enter goss salary:");
    scanf("%f",&a);
    b = a*0.1;
    c = a*0.03;
    d= (a + b) -c;
    printf("net salary is:%f\n",d);
    return 0;
}