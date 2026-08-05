/*
3. Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters. 
Input :   “MarvellouS”
Output :    6 (8-2) 
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int iCntC = 0;
    int iCntS = 0;
    
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCntC++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iCntS++;
        }
        
        if(iCntC < 0)
        {
            iCntC = -iCntC;
        }
        if(iCntS < 0)
        {
            iCntS = -iCntS;
        }
        
        *str++;
    }
     int iDiff = iCntS - iCntC;
     return iDiff;
   
}

int main()
{
    char arr[20];
    int iRet = 0;
    
    printf("Enter a string : ");
    scanf("%[^'\n']s", arr);
    
    iRet = Difference(arr);
    
    printf("%d",iRet);
    
    return 0;
}