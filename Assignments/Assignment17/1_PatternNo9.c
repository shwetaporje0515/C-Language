/*
1. Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol = 4
Output: 1 2 3 4   
	5 6 7 8   
	9 1 2 3   
	4 5 6 7
*/


#include<stdio.h>

int Pattern(int iRow, int iCol)
{
    int no = 1;
    for(int i = 1; i <= iRow; i++)
    {
        
        for(int j = 1; j <= iCol; j++)
        {
            printf("%d\t",no);
            no++;

            if(no > 9)
            {
                no = 1;
            }
            
            
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 , iValue2;

    printf("Enter the number of rows : ");
    scanf("%d",&iValue1);
    
    printf("Enter the number of columns : ");
    scanf("%d",&iValue2);
    
    Pattern(iValue1, iValue2);

    return 0;
}