/* 3.Write a program which accept number from user and display all its non factors. 

Input :  12 
Output : 5 7 8 9 10 11 */

#include<stdio.h>
// #include<math.h>

void NonFact(int iNo)
{
    int iMult = 1;
    for(int i = 1; i < iNo; i++)
    {
        if(iNo % i != 0)
        {
            printf("%d\n",i);
            
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);
    
    NonFact(iValue);
    
    return 0;
}