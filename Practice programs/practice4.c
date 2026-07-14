#include<stdio.h>

char getGrade()
{
    return 'A';
}

int main()
{
    char grade = getGrade();
    printf("Grade = %c", grade);
    return 0;
}