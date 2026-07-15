/*4.Write a program which accept number from user and return summation of all its 
non factors. 
Input :  12 
Output : 50 */ 

#include<stdio.h>
// #include<math.h>

int FactDiff(int iNo)
{
    int iSumFact = 0;
    int iSumNonFact = 0;
    for(int i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            printf("%d\n",i);
            iSum = iSum + i;
        }
	else if(iNo % i != 0)
	{
	    
	}
    }
    return iSum;
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);
    
    int iRet = FactDiff(iValue);
    printf("Difference of summation of factor is : %d",iRet);
    
    return 0;
}