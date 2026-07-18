#include<stdio.h>

/*4.Write a program which accept number from user and count frequency of 4 in it. 
Input :  2395  
Output :  0 
Input : 1018 
Output :  0 
Input : 9440
Output :  2 
Input : 922432
Output :  1 
*/


int CountFour(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    int iCount = 0;
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        // printf("%d\n",iDigit);
        
        if(iDigit == 4)
        {
              iCount++;
        }
        
        
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);
    
    iRet = CountFour(iValue);
    printf("%d",iRet);
    
    return 0;
}