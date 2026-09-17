#include<stdio.h>
int main()
{
    float length, width, area, perimeter;
    printf("Enter Length: ");
    scanf("%f", &length);
    printf("Enter Width: ");
    scanf("%f", &width);
    area = width * length;
    printf("Area = %f", area);
    perimeter =  length + width;
    printf("Perimeter =  %f", perimeter);


}