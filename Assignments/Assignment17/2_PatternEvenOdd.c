/*
2. Accept number of rows and number of columns from user and display below pattern. Input :  iRow = 4  iCol = 5
Output: 2 4 6 8 10
	1 3 5 7 9
	2 4 6 8 10
	1 3 5 7 9
*/


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    
    // int no1 = 1;
    for(int i = 1; i<=iRow; i++)
    {
        int Eno = 2;
        int Ono = 1;
        for(int j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0){
                printf("%d\t",Eno);
                Eno += 2;
            }
            else if(i % 2 == 0){
                printf("%d\t",Ono);
                Ono +=2;
            }
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
