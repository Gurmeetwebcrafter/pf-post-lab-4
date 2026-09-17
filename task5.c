#include<stdio.h>
int main()
{
    int number, square, cube;
    printf("Enter Number: ");
    scanf("%d", &number);
    square = number * number;
    printf("square of number = %d\n", square);
    cube= number * number * number;
    printf("cube of number= %d", cube);
}