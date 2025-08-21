#include<stdio.h>
int main()
{
    int a,b;

    printf("enter the time in hour:");

    scanf("%d",&a);

    b = a * 60;

    printf("%d time in min:%d\n",a,b);
    return 0;
}