#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the gross sales:");
    scanf("%d",&a);
    b = a - (a*0.1);
    printf("the net sales is :%d",b);
    return 0;
}