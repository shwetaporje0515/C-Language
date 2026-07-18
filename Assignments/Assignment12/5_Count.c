#include<stdio.h>

/*5.Write a program which accept number from user and count frequency of such a 
digits which are less than 6. 
Input :  2395  
Output :  3 
Input : 1018 
Output :  3 
Input : 9440
Output :  3 
Input : 96672 
Output :  1
*/

int Count(int iNo)
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
        
        if(iDigit < 6)
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
    
    iRet = Count(iValue);
    printf("%d",iRet);
    
    return 0;
}