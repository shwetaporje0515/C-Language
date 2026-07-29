/*
1. Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol = 4  
Output: A B C D   
	A B C D   
	A B C D   
	A B C D
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    char ch;
    for(int i = 1; i<=iRow; i++)
    {
        ch = 'A';
        for(int j = 1; j<= iCol; j++)
        {
            printf("%c\t",ch);
            ch++;
        }
        printf("\n");
    }    
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    
    printf("Enter numbers of rows and columns : ");
    scanf("%d%d",&iValue1,&iValue2);
    
    Pattern(iValue1, iValue2);
    
    return 0;
}
