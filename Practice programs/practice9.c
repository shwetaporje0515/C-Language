#include<stdio.h>

int main()
{
    int i, j;
    
    int iRow = 0;
    int iColumn = 0;
    
    printf("Enter the number of rows :");
    scanf("%d",&iRow);
    
    printf("Enter the number of columns :");
    scanf("%d",&iColumn);
    
    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j <=iColumn; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}