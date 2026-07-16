/*
4.Write a program which accept number from user and display its table.  
Input : 2 
Output :  2 4 6 8 10 12 14 16 18 20
*/

#include<stdio.h>

int Table(int iNo)
{   
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    int itable = 0;
    for(int i = 1; i <= 10; i++)
    {
        itable = iNo * i;
        printf("%d ",itable);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);
    
    Table(iValue);
    
    return 0;
}