/*5. Write a program which returns difference between Even factorial and odd factorial 
of given number.  
Input :  5  
Output :  -7   (8 - 15)
Input :  -5  
Output :  -7   (8 - 15
Input :  10  
Output :  2895  (3840 - 945)
*/

#include<stdio.h>

int FactorialDiff(int iNo)
{   
    
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    
    int iFact1 = 1;
    int iFact2 = 1;
    for(int i = 1; i <= iNo; i++)
    {
        if(i % 2 == 0)
        {
            iFact1 = iFact1 * i;
        }
        else if(i % 2 != 0)
        {
            iFact2 = iFact2 * i;
        }
    }
    return iFact1 - iFact2;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);
    
    iRet = FactorialDiff(iValue);
    printf("Factorial difference is %d", iRet);    
    return 0;
}