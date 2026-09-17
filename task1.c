#include<stdio.h>
int main()
{
    double total_marks, obtained_mark, percentage;
    int family_income;
    printf("Enter your total marks");
    scanf("%lf", &total_marks);
    printf("Enter Obtained Marks: ");
    scanf("%lf", &obtained_mark);
    percentage = obtained_mark / total_marks * 100;
    printf("Enter Family income:  ");
    scanf("%d", &family_income);
    if (family_income < 50000 ||percentage >= 80)
    {
        printf("student qualifies for the scholarship. ");
    
    }
    else{
        printf("student doesn't qualify for the scholarship.");
    }
     


    

}