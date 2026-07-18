/*2.Write a program which accept number from user and check whether it contains 0 
in it or not. 
Input :  
2395  
Output :  There is no Zero 
Input : 
 10
18 
Output :  It Contains Zero 
Input : 
 90
00 
Output :  It Contains Zero 
Input : 
 10
687 
Output :  It Contains Zero 
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL; 

BOOL ChkZero(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        // printf("%d\n",iDigit);
        
        if(iDigit == 0)
        {
            return TRUE;    
        }
        else
        {
            return FALSE;
        }
        
        iNo = iNo / 10;
    }

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);
    
    bRet = ChkZero(iValue);
    if(iValue == TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("It does not coontains zero");
    }
    
    return 0;
}