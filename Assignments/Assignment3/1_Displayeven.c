#include<stdio.h>

void DisplayEven(int iNo)
{
    
    
    if (iNo <= 0)
    {
        return;
    }
    
    int iEven = 0
    while(iNo > 0)
    {
        iEven = iEven+2;
        printf("%d\n",iEven);
        iNo--;
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
