/*5.Write a program which accept number from user and return difference between 
summation of all its factors and non factors.

Input :  12 
Output : -34 (16 - 50)  
Input :   10  
Output : -29 (8 - 37)  
 */

#include<stdio.h>
// #include<math.h>

int FactDiff(int iNo)
{
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iDiff = 0;
    for(int i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            // printf("%d\n",i);
            iSumFact = iSumFact + i;
        }
        else if(iNo % i != 0)
	    {
	       // printf("%d\n", i);
	        iSumNonFact = iSumNonFact + i;
	    }
	    
	iDiff = iSumFact - iSumNonFact;
    }
    return iDiff;
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