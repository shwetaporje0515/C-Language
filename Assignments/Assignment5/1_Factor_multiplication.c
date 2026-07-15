/*1.Write a program which accept number from user and display its multiplication of 
factors. 
Input :  12
Output : 144	(1 * 2 * 3 * 4 * 6)
Input : 13 
Output : 1 	(1)
Input :  10   
Output : 10  	(1 * 2 * 5) */
 


#include<stdio.h>
// #include<math.h>

int MultFactor(int iNo)
{
    int iMult = 1;
    for(int i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            printf("%d\n",i);
            iMult = iMult *i;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a number : ");
    scanf("%d",&iValue);
    
    iRet = MultFactor(iValue);
    printf("Multiplication of factors : %d",iRet);
    
    return 0;
}