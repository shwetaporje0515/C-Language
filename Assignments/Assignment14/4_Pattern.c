/*
4. Accept number from user and display below pattern. 
Input :  
Output : 4 
# 1 * # 2 * # 3 * # 4 *  
*/

#include<stdio.h>

void Pattern(int iNo)
{
    for(int i = 1; i <= iNo; i++)
    {
        printf("# %d * ",i );
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);
    
    Pattern(iValue);
    
    return 0;
}