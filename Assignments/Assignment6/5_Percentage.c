/*5. Write a program which accept total marks & obtained marks from user and 
calculate percentage.  */

#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    if(iNo2 == 0)
    {
        return 0;
    }
    
    int iPercent = 0;
    iPercent = (iNo2 * 100) / iNo1;
    return iPercent;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;
    
    printf("please enter the totalmarks : ");
    scanf("%d",&iValue1);
    
    printf("please enter the obtained marks : ");
    scanf("%d",&iValue2);
    
    fRet = Percentage(iValue1, iValue2);
    printf("%f",fRet);
    
    return 0;
}