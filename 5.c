#include <stdio.h>

int main() 
{
    int a,b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    

    int sum = a + b;
    
    int substract = a - b;
    
    int multiply = a * b;

    
    {

    
    
    printf("Addition: %d+ %d= %d\n", a,b, sum);
    printf("Subtraction: %d - %d= %d\n", a,b, substract);
    printf("Multiplication: %d* %d = %d\n", a,b, multiply);
    
    }

    
}
