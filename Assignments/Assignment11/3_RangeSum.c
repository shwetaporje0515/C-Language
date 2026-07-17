/*3. Write a program which accept range from user and return addition of all numbers 
in between that range. (Range should contains positive numbers only) 
Input :  23 30  
Output :  212   

Input :  10 18
output : 126

input : -10 2
output : invalid range

input : 90 18
output : invalid range  
*/

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{   
    if(iStart < 0 )
    {
        iStart = -iStart;
        printf("Invalid input");
    }
    
    if(iStart > iEnd) 
    {
        printf("Invalid input");
    }
    
    int iSum = 0;
    for(iStart; iStart <= iEnd; iStart++)
    {
        iSum = iSum + iStart;
    }
    return iSum;

}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
    
    printf("Enter starting point : ");
    scanf("%d",&iValue1);
    
    printf("Enter ending point : ");
    scanf("%d",&iValue2);
    
    iRet = RangeSum(iValue1, iValue2);
    printf("Addition is %d", iRet);
    
    return 0;
}