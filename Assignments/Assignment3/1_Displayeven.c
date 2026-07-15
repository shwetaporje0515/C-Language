#include<stdio.h>

void DisplayEven(int iNo)
{
    int i = 0;
    
    if (iNo <= 0)
    {
        return;
    }
    
    for(i = 1; i <= (iNo * 2); i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\n",i);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    
    DisplayEven(iValue);
    
    return 0;
}