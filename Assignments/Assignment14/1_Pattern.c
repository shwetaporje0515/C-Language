/*
1. Accept number from user and display below pattern. 
Input :  5
Output : A B C D E 
*/
#include<stdio.h>

int Pattern(int iNo)
{
    char ch = 'A';
    
    for(int i = 1; i<= iNo; i++)
    {
        printf("%c\t",ch);
        ch++;
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);
    
    Pattern(iValue);

    return 0;
}
