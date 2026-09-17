#include<stdio.h>
int main(){
    float totalmarks, obtainedmarks, percentage;
    printf("enter total marks: ");
    scanf("%f", &totalmarks );
    printf("enter obtained marks: ");
    scanf("%f", &obtainedmarks);
    percentage = (obtainedmarks/totalmarks)*100;
    printf("percentage %f", percentage);
}|