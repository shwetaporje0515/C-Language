/*
2. Accept number from user and display below pattern. 

Input = 5
output = 5 # 4 # 3 # 2 # 1 # 
*/

#include<stdio.h>

void Pattern(int iNo)
{
    for(int i = iNo; i >= 1; i--)
    {
        printf("%d # ",i );
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);
    
    Pattern(iValue);
    
    return 0;
}