//Add, multiply, subtract and divide two integers.
//Improvise to read two different numbers for every run.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, sum, sub, mul, divide;
    printf("First Number : ");
    scanf("%d",&num1);

    printf("Second Number : ");
    scanf("%d",&num2);

    sum = num1+num2;
    sub = num1-num2;
    mul = num1*num2;
    divide = num1/num2;

    printf("Sum = %d, Subtraction = %d, Multiplication = %d and Division = %d",sum,sub,mul,divide);

    return (0);
}
