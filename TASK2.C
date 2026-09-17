#include<stdio.h>
int main()
{
    int late_days;
    printf("Enter Late Days");
    scanf("%d", &late_days);
    if (late_days <1 ){
        printf("No fine");
    }
    else if (late_days>=1 && late_days<= 5)
    {
        printf("Fine: Rs. 50");
    
    }
    else if (late_days >=6 && late_days<= 10)
    {
        printf("fine : 100rs");
    }
    else if (late_days > 10){
        printf("fine :  200rs");
    }
    return 0;
}
