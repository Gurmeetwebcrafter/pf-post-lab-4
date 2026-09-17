#include<stdio.h>
int main ()
{
    int num1, num2, num3;
    float average;
    printf("Enter Num1 :");
    scanf("%d", &num1);
    printf("Enter Num2 :");
    scanf("%d", &num2);
    printf("Enter Num3 :");
    scanf("%d", &num3);
    average = (num1 + num2 +  num3) / 3;
    printf("average = %f", average);


}
