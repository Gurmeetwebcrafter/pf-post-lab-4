#include<stdio.h>
int main(){
    char name[100];
    char character;
    printf("Enter Your Namen: ");
    fgets(name, sizeof(name), stdin);
    puts("student name ");
    puts(name);
    printf("enter single character");
    character= getchar();
    printf("You Entered :");
    putchar(character);
}