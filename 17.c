#include<stdio.h>
int main()
{
    int l,w,area,perimeter;
    
    printf("enter length and width: ");
    scanf("%d%d",&l,&w);
    area = l*w;
    perimeter = 2*(l+w);
    printf("area = %d\nperimeter = %d\n", area, perimeter);
    return 0;
    
}